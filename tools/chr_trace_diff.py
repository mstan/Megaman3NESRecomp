#!/usr/bin/env python3
"""
chr_trace_diff.py - Compare CHR bank change traces between native and emulated.

Usage:
  python chr_trace_diff.py              # Query both ports, diff traces
  python chr_trace_diff.py --native     # Query native only (port 4372)
  python chr_trace_diff.py --emulated   # Query emulated only (port 4373)
  python chr_trace_diff.py --frames 190 210  # Filter to frame range
"""
import socket
import json
import sys
import argparse

def query(port, cmd_dict, timeout=5):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    try:
        s.connect(("127.0.0.1", port))
        s.sendall((json.dumps(cmd_dict) + "\n").encode())
        data = b""
        while True:
            chunk = s.recv(65536)
            if not chunk:
                break
            data += chunk
            if b"\n" in data:
                break
        return json.loads(data.decode().strip())
    finally:
        s.close()

def get_chr_trace(port):
    return query(port, {"cmd": "chr_trace"})

def get_mapper_state(port):
    return query(port, {"cmd": "mapper_state"})

def get_mm3_state(port):
    return query(port, {"cmd": "mm3_state"})

def fmt_regs(entry):
    r = entry["r"]
    bs = entry["bs"]
    inv = "INV" if (bs & 0x80) else "STD"
    return f"R0={r[0]:3d} R1={r[1]:3d} R2={r[2]:3d} R3={r[3]:3d} R4={r[4]:3d} R5={r[5]:3d} [{inv}]"

def print_trace(label, trace, frame_min=None, frame_max=None):
    entries = trace.get("entries", [])
    print(f"\n=== {label} CHR Trace ({trace['count']} total entries) ===")
    print(f"{'Frame':>8}  {'R0':>3} {'R1':>3} {'R2':>3} {'R3':>3} {'R4':>3} {'R5':>3} {'Mode':>4}  Caller")
    print("-" * 80)
    for e in entries:
        f = e["f"]
        if frame_min is not None and f < frame_min:
            continue
        if frame_max is not None and f > frame_max:
            continue
        r = e["r"]
        bs = e["bs"]
        inv = "INV" if (bs & 0x80) else "STD"
        print(f"{f:8d}  {r[0]:3d} {r[1]:3d} {r[2]:3d} {r[3]:3d} {r[4]:3d} {r[5]:3d} {inv:>4}  {e['fn']}")

def summarize_per_frame(entries):
    """Group CHR changes by frame, return dict frame -> list of entries."""
    by_frame = {}
    for e in entries:
        f = e["f"]
        by_frame.setdefault(f, []).append(e)
    return by_frame

def diff_traces(native_entries, emu_entries, frame_min=None, frame_max=None):
    """Compare per-frame CHR bank change summaries."""
    nat_by_frame = summarize_per_frame(native_entries)
    emu_by_frame = summarize_per_frame(emu_entries)

    all_frames = sorted(set(nat_by_frame.keys()) | set(emu_by_frame.keys()))
    if frame_min is not None:
        all_frames = [f for f in all_frames if f >= frame_min]
    if frame_max is not None:
        all_frames = [f for f in all_frames if f <= frame_max]

    print(f"\n=== CHR Trace Diff (frames {all_frames[0]}-{all_frames[-1]}) ===")

    divergences = 0
    for f in all_frames:
        nat = nat_by_frame.get(f, [])
        emu = emu_by_frame.get(f, [])

        # Compare final CHR state per frame
        nat_final = nat[-1]["r"] if nat else None
        emu_final = emu[-1]["r"] if emu else None

        if nat_final != emu_final:
            divergences += 1
            print(f"\n*** DIVERGENCE at frame {f} ***")
            print(f"  Native  ({len(nat)} changes): final R0-R5 = {nat_final}")
            print(f"  Emulated({len(emu)} changes): final R0-R5 = {emu_final}")
            # Show all changes in this frame
            for i, e in enumerate(nat):
                print(f"    NAT[{i}]: R={e['r']} bs={e['bs']} fn={e['fn']}")
            for i, e in enumerate(emu):
                print(f"    EMU[{i}]: R={e['r']} bs={e['bs']} fn={e['fn']}")
        elif len(nat) != len(emu):
            print(f"\n* Frame {f}: same final state but different change count "
                  f"(NAT={len(nat)}, EMU={len(emu)})")

    if divergences == 0:
        print("\nNo CHR bank divergences found in the specified frame range.")
    else:
        print(f"\nTotal divergences: {divergences}")

def main():
    parser = argparse.ArgumentParser(description="Compare CHR bank traces")
    parser.add_argument("--native", action="store_true", help="Query native only")
    parser.add_argument("--emulated", action="store_true", help="Query emulated only")
    parser.add_argument("--frames", nargs=2, type=int, metavar=("MIN", "MAX"),
                        help="Filter to frame range")
    parser.add_argument("--mapper", action="store_true",
                        help="Also show current mapper state")
    args = parser.parse_args()

    frame_min = args.frames[0] if args.frames else None
    frame_max = args.frames[1] if args.frames else None

    if args.native or (not args.native and not args.emulated):
        try:
            nat_trace = get_chr_trace(4372)
            print_trace("NATIVE", nat_trace, frame_min, frame_max)
            if args.mapper:
                ms = get_mapper_state(4372)
                print(f"\nNative mapper state: {json.dumps(ms, indent=2)}")
        except Exception as e:
            print(f"Native (4372): {e}")
            nat_trace = None

    if args.emulated or (not args.native and not args.emulated):
        try:
            emu_trace = get_chr_trace(4373)
            print_trace("EMULATED", emu_trace, frame_min, frame_max)
            if args.mapper:
                ms = get_mapper_state(4373)
                print(f"\nEmulated mapper state: {json.dumps(ms, indent=2)}")
        except Exception as e:
            print(f"Emulated (4373): {e}")
            emu_trace = None

    # Diff if both available
    if not args.native and not args.emulated:
        if nat_trace and emu_trace:
            nat_entries = nat_trace.get("entries", [])
            emu_entries = emu_trace.get("entries", [])
            if nat_entries and emu_entries:
                diff_traces(nat_entries, emu_entries, frame_min, frame_max)

if __name__ == "__main__":
    main()
