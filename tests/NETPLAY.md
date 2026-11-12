# Cycle co-op network checks

Use two processes of the same build and the same USA game image. Launch from
reset, with Co-op, Proto Man and quick weapon switching enabled and original
timing (`--extra-scanlines 0`). The wire files in `routes/net_snake_seat*.input`
drive the real title and stage-select controls into Snake Man's stage. They do
not load a snapshot or modify RAM. Input rows are match tick, hexadecimal NES
buttons, and game-action bits (L = 1, R = 2).

For each seat configure the existing `NES_NETPLAY=1` LAN transport, distinct
`NES_NET_BIND` endpoints, the other endpoint in `NES_NET_PEER`, matching session
ID, two occupied seats, and rollback mode. Use `NES_NET_TEST_INPUT` for that
seat's wire file, `NES_NET_MATCH_TICKS=2400`, `NES_NET_SHOT_TICK=2300`, and a
test-owned `NES_NET_FINAL_STATE` path. `RNET_SIM_LATENCY_MS=25`,
`RNET_SIM_JITTER_MS=10` and `NES_RB_FORCE_MISPREDICT=97` exercise correction.
Run one peer with `--interp-only`. Keep automated output muted and use explicit
ROM/config paths. Never open a save-file picker during automation.

Require successful capability/profile sealing before gameplay, two live
players after real stage entry, both seats' L/R counters advancing, actual
rollback episodes with zero desyncs, and equal complete digests at confirmed
tick 2300. Final quiesce ticks can differ; compare final snapshots only when
their simulation ticks match.

Exercise distinct Split/P1/P2 layouts, then the actual runtime menu's local
layout changes. The menu must reject a change between shared and independent
simulation during a match. A shared match retains the agreed host logical
width when either window changes size. Timing, gameplay mods, roster and
transition rules stay fixed until leaving. Verify that leaving restores each
peer's original timing, aspect and local layout.

With the optional charge mod, each peer must independently supply the verified
MM4 USA source. Confirm real half/full releases for both characters and equal
confirmed state; reject missing/wrong sources and QA RAM overrides before
gameplay. Network checks do not establish complete stage or platform coverage.

The final provider integration also uses the actual catalog, without CLI
gameplay toggles: host Co-op enabled with Split, Proto Man as P1 and wait-both;
guest catalog disabled with a different local layout and timing. Require the
host's `mm3=` session row in its outgoing session configuration and the guest's
accepted row, successful profile sealing, and the confirmed digest above.
After leaving, compare the restore callback's actual title/engine settings
with the saved offline settings, including view and aspect. The next offered
profile reads the persistent local catalog and can differ from those restored
runtime settings.
