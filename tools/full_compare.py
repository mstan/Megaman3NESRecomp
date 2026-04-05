#!/usr/bin/env python3
"""
full_compare.py — Comprehensive dual-instance state comparison.

Connects to native (4372) and emulated (4373) TCP debug servers,
aligns frames by game state transitions, then compares ALL state:
  - CPU registers
  - Full 2KB work RAM ($0000-$07FF)
  - PPU registers (ctrl, mask, scroll, addr, latches)
  - Nametable RAM ($2000-$2FFF)
  - CHR RAM ($0000-$1FFF)
  - Palette ($3F00-$3F1F)
  - OAM (256 bytes via $FE00)
  - Mapper state (MMC3 bank regs, IRQ)
  - Game-specific data (game_mode, sub_mode, stage, etc.)

Outputs a structured divergence catalog.

Usage:
    python tools/full_compare.py [--start-frame N] [--sample-count N]
                                 [--sample-interval N] [--wait-frames N]
"""
import argparse
import json
import socket
import sys
import time
from collections import defaultdict
from dataclasses import dataclass, field
from typing import Optional, List, Dict, Tuple


# ---------------------------------------------------------------------------
# TCP client (reused from nes_compare.py)
# ---------------------------------------------------------------------------

class NESDebugClient:
    def __init__(self, host="127.0.0.1", port=4372, label=""):
        self.host = host
        self.port = port
        self.label = label or f":{port}"
        self._sock: Optional[socket.socket] = None
        self._buf = b""
        self._next_id = 1

    def connect(self, timeout=5.0):
        self._sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self._sock.settimeout(timeout)
        self._sock.connect((self.host, self.port))
        self._buf = b""

    def close(self):
        if self._sock:
            self._sock.close()
            self._sock = None

    def send_cmd(self, cmd, timeout=10.0, **kwargs):
        msg_id = self._next_id
        self._next_id += 1
        obj = {"cmd": cmd, "id": msg_id}
        obj.update(kwargs)
        line = json.dumps(obj, separators=(",", ":")) + "\n"
        self._sock.sendall(line.encode())
        deadline = time.monotonic() + timeout
        while True:
            idx = self._buf.find(b"\n")
            if idx >= 0:
                raw = self._buf[:idx]
                self._buf = self._buf[idx + 1:]
                if not raw.strip():
                    continue
                resp = json.loads(raw)
                if "event" in resp:
                    continue
                if resp.get("id") == msg_id:
                    return resp
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise TimeoutError(f"[{self.label}] timeout")
            self._sock.settimeout(remaining)
            chunk = self._sock.recv(65536)
            if not chunk:
                raise ConnectionError(f"[{self.label}] closed")
            self._buf += chunk

    def send_cmd_multi(self, cmd, timeout=30.0, **kwargs):
        """Send command, collect ALL response lines (for dump_ram chunked responses)."""
        msg_id = self._next_id
        self._next_id += 1
        obj = {"cmd": cmd, "id": msg_id}
        obj.update(kwargs)
        line = json.dumps(obj, separators=(",", ":")) + "\n"
        self._sock.sendall(line.encode())
        results = []
        deadline = time.monotonic() + timeout
        while True:
            idx = self._buf.find(b"\n")
            if idx >= 0:
                raw = self._buf[:idx]
                self._buf = self._buf[idx + 1:]
                if not raw.strip():
                    continue
                resp = json.loads(raw)
                if "event" in resp:
                    continue
                if resp.get("id") == msg_id:
                    results.append(resp)
                    if not resp.get("ok", False):
                        return results
                    if cmd == "dump_ram":
                        total = kwargs.get("len", 256)
                        received = sum(r.get("len", 0) for r in results)
                        if received >= total:
                            return results
                    else:
                        return results
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise TimeoutError(f"[{self.label}] timeout on multi")
            self._sock.settimeout(remaining)
            chunk = self._sock.recv(65536)
            if not chunk:
                raise ConnectionError(f"[{self.label}] closed")
            self._buf += chunk

    def ping(self):
        return self.send_cmd("ping")

    def pause(self):
        return self.send_cmd("pause")

    def cont(self):
        return self.send_cmd("continue")

    def step(self, count=1):
        return self.send_cmd("step", count=count)

    def history(self):
        return self.send_cmd("history")

    def get_frame(self, frame):
        return self.send_cmd("get_frame", frame=frame, timeout=30.0)

    def read_frame_ram(self, frame, addr, length):
        """Read bytes from historical frame. Max 256 per call."""
        return self.send_cmd("read_frame_ram", frame=frame,
                             addr=f"0x{addr:04X}" if addr < 0x10000 else f"0x{addr:05X}",
                             len=length, timeout=10.0)

    def read_frame_region(self, frame, addr, length):
        """Read arbitrary-length region from historical frame (multi-call)."""
        data = bytearray(length)
        offset = 0
        while offset < length:
            chunk = min(256, length - offset)
            resp = self.read_frame_ram(frame, addr + offset, chunk)
            if not resp.get("ok"):
                raise RuntimeError(f"[{self.label}] read_frame_ram error at 0x{addr+offset:04X}: {resp.get('error')}")
            hex_str = resp.get("hex", "")
            chunk_data = bytes.fromhex(hex_str)
            data[offset:offset + len(chunk_data)] = chunk_data
            offset += len(chunk_data)
        return bytes(data)

    def frame_timeseries(self, start, end):
        return self.send_cmd("frame_timeseries", start=start, end=end, timeout=30.0)

    def mapper_state(self):
        return self.send_cmd("mapper_state")

    def ppu_state(self):
        return self.send_cmd("ppu_state")


# ---------------------------------------------------------------------------
# Frame alignment (from nes_compare.py)
# ---------------------------------------------------------------------------

GAME_DATA_FIELDS = [
    ("$14_state1", 0), ("$16_state2", 1), ("$31_game_mode", 2),
    ("$46_sub_mode", 3), ("$F4_prg_r6", 4), ("$F5_prg_r7", 5),
    ("$22_stage", 6), ("$A0_weapon", 7), ("OAM0_Y", 8), ("OAM3_Y", 9),
    ("OAM0_tile", 10), ("OAM0_attr", 11), ("$FF_ppuctrl_shadow", 12),
    ("$FE_ppumask_shadow", 13), ("$AE_lives", 14), ("$F6_bank_flag", 15),
]


def fetch_timeseries(client, start, end):
    """Fetch timeseries in 200-frame batches, return {frame: dict}."""
    records = {}
    batch_start = start
    while batch_start <= end:
        batch_end = min(batch_start + 199, end)
        resp = client.frame_timeseries(batch_start, batch_end)
        if not resp.get("ok"):
            batch_start = batch_end + 1
            continue
        for entry in resp.get("ts", []):
            if entry is not None:
                records[entry["f"]] = entry
        batch_start = batch_end + 1
    return records


def extract_sig(entry):
    """Extract game state signature for alignment."""
    gd = bytes.fromhex(entry.get("gd", "00" * 16))
    return (gd[0], gd[2], gd[3])  # $14, $31, $46


def compute_alignment(n_records, e_records):
    """Find frame offset: native_frame = emulated_frame + offset."""
    def get_transitions(records):
        transitions = []
        prev_sig = None
        for f in sorted(records.keys()):
            sig = extract_sig(records[f])
            if prev_sig is not None and sig != prev_sig:
                transitions.append((f, prev_sig, sig))
            prev_sig = sig
        return transitions

    n_trans = get_transitions(n_records)
    e_trans = get_transitions(e_records)
    if not n_trans or not e_trans:
        return 0, n_trans, e_trans

    # Find longest matching transition sequence
    best_offset = None
    best_len = 0
    n_sigs = [(o, n) for _, o, n in n_trans]
    e_sigs = [(o, n) for _, o, n in e_trans]
    for ni in range(len(n_trans)):
        for ei in range(len(e_trans)):
            if n_sigs[ni] == e_sigs[ei]:
                ml = 0
                while (ni + ml < len(n_trans) and ei + ml < len(e_trans)
                       and n_sigs[ni + ml] == e_sigs[ei + ml]):
                    ml += 1
                if ml > best_len:
                    best_len = ml
                    best_offset = n_trans[ni][0] - e_trans[ei][0]

    if best_offset is not None and best_len >= 2:
        return best_offset, n_trans, e_trans

    # Fallback: match single transition
    for nf, no, nn in n_trans:
        for ef, eo, en in e_trans:
            if (no, nn) == (eo, en):
                return nf - ef, n_trans, e_trans

    return 0, n_trans, e_trans


# ---------------------------------------------------------------------------
# Region diffing
# ---------------------------------------------------------------------------

@dataclass
class RegionDiff:
    region: str
    addr_base: int
    diffs: List[Tuple[int, int, int]]  # (offset, native_val, emu_val)

    @property
    def count(self):
        return len(self.diffs)

    def summary(self, max_show=20):
        lines = [f"  [{self.region}] {self.count} bytes differ:"]
        for i, (off, nv, ev) in enumerate(self.diffs[:max_show]):
            addr = self.addr_base + off
            lines.append(f"    ${addr:04X}: native=0x{nv:02X} emu=0x{ev:02X}")
        if self.count > max_show:
            lines.append(f"    ... and {self.count - max_show} more")
        return "\n".join(lines)


def diff_bytes(native_bytes, emu_bytes, base_addr=0):
    """Compare two byte sequences, return list of (offset, native, emu)."""
    diffs = []
    for i in range(min(len(native_bytes), len(emu_bytes))):
        if native_bytes[i] != emu_bytes[i]:
            diffs.append((i, native_bytes[i], emu_bytes[i]))
    return diffs


@dataclass
class FrameComparison:
    native_frame: int
    emu_frame: int
    cpu_diffs: Dict[str, Tuple]  # field -> (native, emu)
    ppu_diffs: Dict[str, Tuple]
    mapper_diffs: Dict[str, Tuple]
    region_diffs: List[RegionDiff]
    game_data_diffs: Dict[str, Tuple]

    @property
    def total_diffs(self):
        return (len(self.cpu_diffs) + len(self.ppu_diffs) +
                len(self.mapper_diffs) + len(self.game_data_diffs) +
                sum(rd.count for rd in self.region_diffs))

    @property
    def is_match(self):
        return self.total_diffs == 0


def compare_frame_full(native: NESDebugClient, emu: NESDebugClient,
                       nf: int, ef: int) -> FrameComparison:
    """Full state comparison of two aligned frames."""
    # Get frame records (CPU/PPU/mapper registers)
    nr = native.get_frame(nf)
    er = emu.get_frame(ef)

    if not nr.get("ok") or not er.get("ok"):
        raise RuntimeError(f"get_frame failed: native={nr.get('error')}, emu={er.get('error')}")

    # --- CPU diffs ---
    cpu_diffs = {}
    nc, ec = nr.get("cpu", {}), er.get("cpu", {})
    for field in ["A", "X", "Y", "S", "P"]:
        nv = nc.get(field, "")
        ev = ec.get(field, "")
        if nv != ev:
            cpu_diffs[f"CPU.{field}"] = (nv, ev)

    # --- PPU diffs ---
    ppu_diffs = {}
    np, ep = nr.get("ppu", {}), er.get("ppu", {})
    for field in ["ctrl", "mask", "status", "oamaddr", "scroll_x", "scroll_y",
                  "ppuaddr", "addr_latch", "scroll_latch", "data_buf",
                  "spr0_active", "spr0_reads"]:
        nv = np.get(field)
        ev = ep.get(field)
        if nv != ev:
            ppu_diffs[f"PPU.{field}"] = (nv, ev)

    # --- Mapper diffs ---
    mapper_diffs = {}
    nm, em = nr.get("mapper", {}), er.get("mapper", {})
    for field in ["type", "mirror", "mmc3_bank_sel", "mmc3_regs",
                  "mmc3_irq_latch", "mmc3_irq_counter",
                  "mmc3_irq_reload", "mmc3_irq_enabled"]:
        nv = nm.get(field)
        ev = em.get(field)
        if nv != ev:
            mapper_diffs[f"Mapper.{field}"] = (nv, ev)
    # Also compare bank
    if nr.get("bank") != er.get("bank"):
        mapper_diffs["bank"] = (nr.get("bank"), er.get("bank"))

    # --- Game data diffs ---
    game_data_diffs = {}
    ngd = bytes.fromhex(nr.get("game_data", "00" * 16))
    egd = bytes.fromhex(er.get("game_data", "00" * 16))
    for name, idx in GAME_DATA_FIELDS:
        if idx < len(ngd) and idx < len(egd) and ngd[idx] != egd[idx]:
            game_data_diffs[name] = (f"0x{ngd[idx]:02X}", f"0x{egd[idx]:02X}")

    # --- Memory region diffs ---
    region_diffs = []

    regions = [
        ("CPU_RAM",    0x0000, 0x0800),  # 2KB work RAM
        ("Nametable",  0x2000, 0x1000),  # 4KB nametable
        ("Palette",    0x3F00, 0x0020),  # 32-byte palette
        ("OAM",        0xFE00, 0x0100),  # 256-byte OAM
        ("CHR_RAM",   0x10000, 0x2000),  # 8KB CHR RAM
    ]

    for name, addr, length in regions:
        try:
            n_data = native.read_frame_region(nf, addr, length)
            e_data = emu.read_frame_region(ef, addr, length)
            diffs = diff_bytes(n_data, e_data)
            if diffs:
                region_diffs.append(RegionDiff(name, addr, diffs))
        except Exception as ex:
            print(f"  WARNING: failed to read {name}: {ex}", file=sys.stderr)

    return FrameComparison(
        native_frame=nf, emu_frame=ef,
        cpu_diffs=cpu_diffs, ppu_diffs=ppu_diffs,
        mapper_diffs=mapper_diffs, region_diffs=region_diffs,
        game_data_diffs=game_data_diffs
    )


# ---------------------------------------------------------------------------
# Divergence catalog
# ---------------------------------------------------------------------------

@dataclass
class DivergenceEntry:
    category: str      # CPU, PPU, Mapper, GameData, CPU_RAM, Nametable, etc.
    field_or_addr: str  # e.g., "CPU.A" or "$0042"
    first_emu_frame: int
    first_native_frame: int
    native_val: str
    emu_val: str
    occurrences: int = 1


def build_catalog(comparisons: List[FrameComparison]) -> List[DivergenceEntry]:
    """Build a deduped divergence catalog from a series of frame comparisons."""
    seen = {}  # key -> DivergenceEntry

    for comp in comparisons:
        # Register-level diffs
        for field, (nv, ev) in comp.cpu_diffs.items():
            if field not in seen:
                seen[field] = DivergenceEntry("CPU", field, comp.emu_frame,
                                              comp.native_frame, str(nv), str(ev))
            else:
                seen[field].occurrences += 1

        for field, (nv, ev) in comp.ppu_diffs.items():
            if field not in seen:
                seen[field] = DivergenceEntry("PPU", field, comp.emu_frame,
                                              comp.native_frame, str(nv), str(ev))
            else:
                seen[field].occurrences += 1

        for field, (nv, ev) in comp.mapper_diffs.items():
            if field not in seen:
                seen[field] = DivergenceEntry("Mapper", field, comp.emu_frame,
                                              comp.native_frame, str(nv), str(ev))
            else:
                seen[field].occurrences += 1

        for field, (nv, ev) in comp.game_data_diffs.items():
            if field not in seen:
                seen[field] = DivergenceEntry("GameData", field, comp.emu_frame,
                                              comp.native_frame, str(nv), str(ev))
            else:
                seen[field].occurrences += 1

        # Memory region diffs — group by 16-byte aligned block
        for rd in comp.region_diffs:
            for off, nv, ev in rd.diffs:
                addr = rd.addr_base + off
                block = addr & ~0xF  # 16-byte alignment
                key = f"{rd.region}:${block:04X}"
                if key not in seen:
                    seen[key] = DivergenceEntry(rd.region, f"${addr:04X}",
                                                comp.emu_frame, comp.native_frame,
                                                f"0x{nv:02X}", f"0x{ev:02X}")
                else:
                    seen[key].occurrences += 1

    return sorted(seen.values(), key=lambda e: (e.first_emu_frame, e.category, e.field_or_addr))


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(description="Full NES state comparison")
    parser.add_argument("--native-port", type=int, default=4372)
    parser.add_argument("--emu-port", type=int, default=4373)
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--sample-count", type=int, default=10,
                        help="Number of frames to fully compare (default 10)")
    parser.add_argument("--sample-interval", type=int, default=60,
                        help="Frames between samples (default 60)")
    parser.add_argument("--start-frame", type=int, default=-1,
                        help="Start from this emu frame (-1 = auto from ring buffer)")
    parser.add_argument("--wait-frames", type=int, default=0,
                        help="Step this many frames before starting (both instances)")
    parser.add_argument("--no-align", action="store_true",
                        help="Disable frame alignment")
    parser.add_argument("--output", default=None,
                        help="Write JSON catalog to file")
    args = parser.parse_args()

    native = NESDebugClient(args.host, args.native_port, label="native")
    emu = NESDebugClient(args.host, args.emu_port, label="emu")

    # Connect
    print(f"Connecting to native ({args.native_port})...", end=" ", flush=True)
    native.connect()
    print("OK")
    print(f"Connecting to emulated ({args.emu_port})...", end=" ", flush=True)
    emu.connect()
    print("OK")

    # Pause both
    native.pause()
    emu.pause()

    n_ping = native.ping()
    e_ping = emu.ping()
    print(f"Native  frame: {n_ping.get('frame', '?')}")
    print(f"Emulated frame: {e_ping.get('frame', '?')}")

    # Optional: step forward
    if args.wait_frames > 0:
        print(f"Stepping both {args.wait_frames} frames...", flush=True)
        native.step(args.wait_frames)
        emu.step(args.wait_frames)
        time.sleep(args.wait_frames / 60.0 + 1.0)
        native.pause()
        emu.pause()

    # Get ring buffer ranges
    n_hist = native.history()
    e_hist = emu.history()
    n_oldest, n_newest = n_hist.get("oldest", 0), n_hist.get("newest", 0)
    e_oldest, e_newest = e_hist.get("oldest", 0), e_hist.get("newest", 0)
    print(f"Native  ring: {n_oldest} - {n_newest}")
    print(f"Emulated ring: {e_oldest} - {e_newest}")

    # Frame alignment
    offset = 0
    if not args.no_align:
        print("\n--- Frame Alignment ---")
        # Fetch timeseries for alignment
        n_ts = fetch_timeseries(native, n_oldest, n_newest)
        e_ts = fetch_timeseries(emu, e_oldest, e_newest)
        print(f"Fetched {len(n_ts)} native, {len(e_ts)} emulated frames")

        offset, n_trans, e_trans = compute_alignment(n_ts, e_ts)
        print(f"Native transitions: {len(n_trans)}")
        for f, old, new in n_trans[:8]:
            print(f"  frame {f:>6}: {old} -> {new}")
        print(f"Emulated transitions: {len(e_trans)}")
        for f, old, new in e_trans[:8]:
            print(f"  frame {f:>6}: {old} -> {new}")
        print(f"Alignment offset: {offset} (native = emu + {offset})")
    else:
        print("Alignment disabled")

    # Determine sample frames (emulated frame numbers)
    if args.start_frame >= 0:
        start_ef = args.start_frame
    else:
        # Start from the latest available
        start_ef = max(e_oldest, e_newest - args.sample_count * args.sample_interval)

    sample_frames = []
    ef = start_ef
    for _ in range(args.sample_count):
        if ef > e_newest:
            break
        nf = ef + offset
        if nf >= n_oldest and nf <= n_newest:
            sample_frames.append((ef, nf))
        ef += args.sample_interval

    print(f"\n{'='*70}")
    print(f"Comparing {len(sample_frames)} frames (interval={args.sample_interval})")
    print(f"{'='*70}")

    # Full comparison at each sample point
    comparisons = []
    for i, (ef, nf) in enumerate(sample_frames):
        print(f"\n--- Sample {i+1}/{len(sample_frames)}: emu={ef}, native={nf} ---")
        try:
            comp = compare_frame_full(native, emu, nf, ef)
            comparisons.append(comp)

            if comp.is_match:
                print(f"  MATCH (0 diffs)")
            else:
                print(f"  {comp.total_diffs} total diffs:")
                if comp.cpu_diffs:
                    print(f"    CPU: {comp.cpu_diffs}")
                if comp.ppu_diffs:
                    print(f"    PPU: {comp.ppu_diffs}")
                if comp.mapper_diffs:
                    print(f"    Mapper: {comp.mapper_diffs}")
                if comp.game_data_diffs:
                    print(f"    GameData: {comp.game_data_diffs}")
                for rd in comp.region_diffs:
                    print(rd.summary())
        except Exception as ex:
            print(f"  ERROR: {ex}", file=sys.stderr)

    # Build divergence catalog
    print(f"\n{'='*70}")
    print(f"DIVERGENCE CATALOG")
    print(f"{'='*70}")

    catalog = build_catalog(comparisons)
    if not catalog:
        print("No divergences found across all samples!")
    else:
        print(f"\n{len(catalog)} unique divergence entries:\n")
        print(f"{'Category':<12} {'Field/Addr':<25} {'First(E)':<10} {'First(N)':<10} "
              f"{'Native':<12} {'Emulated':<12} {'Count':<6}")
        print("-" * 90)
        for entry in catalog:
            print(f"{entry.category:<12} {entry.field_or_addr:<25} "
                  f"{entry.first_emu_frame:<10} {entry.first_native_frame:<10} "
                  f"{entry.native_val:<12} {entry.emu_val:<12} {entry.occurrences:<6}")

    # Optional JSON output
    if args.output:
        json_catalog = []
        for entry in catalog:
            json_catalog.append({
                "category": entry.category,
                "field": entry.field_or_addr,
                "first_emu_frame": entry.first_emu_frame,
                "first_native_frame": entry.first_native_frame,
                "native_val": entry.native_val,
                "emu_val": entry.emu_val,
                "occurrences": entry.occurrences,
            })
        with open(args.output, "w") as f:
            json.dump({"offset": offset, "samples": len(comparisons),
                       "catalog": json_catalog}, f, indent=2)
        print(f"\nJSON catalog written to {args.output}")

    # Summary statistics
    matched = sum(1 for c in comparisons if c.is_match)
    diverged = len(comparisons) - matched
    print(f"\nSummary: {matched}/{len(comparisons)} frames matched, "
          f"{diverged} diverged")

    # Per-category breakdown
    if catalog:
        cats = defaultdict(int)
        for e in catalog:
            cats[e.category] += e.occurrences
        print("\nBy category:")
        for cat, count in sorted(cats.items(), key=lambda x: -x[1]):
            print(f"  {cat}: {count} occurrences")

    native.close()
    emu.close()


if __name__ == "__main__":
    main()
