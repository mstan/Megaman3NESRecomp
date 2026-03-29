/*
 * verify_mode.c — Dual-execution verification mode
 *
 * In VERIFY mode: native code runs the game normally. Nestopia runs
 * in the background. After each frame, we compare RAM between the two.
 * Divergences are logged and recorded in the ring buffer.
 *
 * In EMULATED mode: Nestopia drives everything (handled in extras.c).
 * In NATIVE mode: no emulator, just recompiled code.
 */
#include "verify_mode.h"
#include "nes_snapshot.h"
#include "nes_runtime.h"
#include "debug_server.h"

#include <stdio.h>
#include <string.h>

#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif

RunMode  g_run_mode = RUN_MODE_NATIVE;
static uint64_t s_divergence_count = 0;
static int s_emu_initialized = 0;

void verify_mode_init(const char *rom_path) {
#ifdef ENABLE_NESTOPIA_ORACLE
    if (g_run_mode == RUN_MODE_NATIVE) return;

    int rc = nestopia_bridge_init(rom_path);
    if (rc != 0) {
        fprintf(stderr, "[verify] Nestopia init failed (rc=%d), falling back to native\n", rc);
        g_run_mode = RUN_MODE_NATIVE;
        return;
    }
    s_emu_initialized = 1;
    fprintf(stderr, "[verify] Nestopia oracle initialized (mode=%s)\n",
            g_run_mode == RUN_MODE_VERIFY ? "verify" : "emulated");
#else
    (void)rom_path;
    if (g_run_mode != RUN_MODE_NATIVE) {
        fprintf(stderr, "[verify] Nestopia not compiled in, falling back to native\n");
        g_run_mode = RUN_MODE_NATIVE;
    }
#endif
}

int verify_mode_run_nmi(void) {
    if (g_run_mode == RUN_MODE_NATIVE) {
        func_NMI();
        return 1;
    }

#ifdef ENABLE_NESTOPIA_ORACLE
    if (!s_emu_initialized) {
        func_NMI();
        return 1;
    }

    if (g_run_mode == RUN_MODE_EMULATED) {
        /* Handled by game_run_main in extras.c — shouldn't reach here */
        func_NMI();
        return 1;
    }

    /* VERIFY mode: native runs the game, Nestopia runs in background.
     * Compare RAM after each frame. Log all divergences. */

    /* 1. Run native NMI */
    func_NMI();

    /* 2. Run Nestopia for one frame (same input) */
    nestopia_bridge_run_frame(g_controller1_buttons);

    /* 3. Get Nestopia's RAM */
    static uint8_t emu_ram[0x800];
    nestopia_bridge_get_ram(emu_ram);

    /* 4. Compare work RAM */
    int diff_count = 0;
    int first_diff_addr = -1;
    uint8_t first_native = 0, first_emu = 0;

    for (int i = 0; i < 0x0800; i++) {
        if (g_ram[i] != emu_ram[i]) {
            if (diff_count == 0) {
                first_diff_addr = i;
                first_native = g_ram[i];
                first_emu = emu_ram[i];
            }
            diff_count++;
        }
    }

    /* Also compare CHR/VRAM tile $00 at $1000 (BG pattern table) */
    static uint8_t emu_vram[0x4000];
    int vram_size = 0;
    nestopia_bridge_get_vram(emu_vram, &vram_size);

    /* Log CHR tile $00 comparison on first few frames */
    /* Compare framebuffer pixels to detect CHR bank mismatch */
    if (g_frame_count == 600) {
        static uint32_t emu_fb[256*240];
        nestopia_bridge_get_framebuf_argb(emu_fb);
        /* Pixel (4,4) is deep inside tile $00 at nametable position (0,0) */
        uint32_t ep = emu_fb[4*256+4] & 0xFFFFFF;
        /* Pixel (128,120) is mid-screen, also tile $00 area */
        uint32_t ep2 = emu_fb[120*256+128] & 0xFFFFFF;
        fprintf(stderr, "[verify] EMU pixels: (4,4)=0x%06X (128,120)=0x%06X\n", ep, ep2);
        fprintf(stderr, "[verify] NATIVE chr[0x1000]=%02X%02X%02X%02X chr[0x0000]=%02X%02X%02X%02X\n",
                g_chr_ram[0x1000], g_chr_ram[0x1001], g_chr_ram[0x1002], g_chr_ram[0x1003],
                g_chr_ram[0x0000], g_chr_ram[0x0001], g_chr_ram[0x0002], g_chr_ram[0x0003]);
        fprintf(stderr, "[verify] native $76=%02X $77=%02X emu $76=%02X $77=%02X\n",
                g_ram[0x76], emu_ram[0x76], g_ram[0x77], emu_ram[0x77]);
    }

    int passed = (diff_count == 0);

    if (!passed) {
        s_divergence_count++;
        fprintf(stderr, "[verify] DIVERGE frame %llu: %d bytes differ | first: $%04X native=0x%02X emu=0x%02X"
                " | $76:N=%02X/E=%02X $77:N=%02X/E=%02X $0636:N=%02X/E=%02X $0248:N=%02X/E=%02X\n",
                (unsigned long long)g_frame_count, diff_count,
                first_diff_addr, first_native, first_emu,
                g_ram[0x76], emu_ram[0x76], g_ram[0x77], emu_ram[0x77],
                g_ram[0x636 & 0x7FF], emu_ram[0x636 & 0x7FF],
                g_ram[0x248], emu_ram[0x248]);
    }

    return passed;
#else
    func_NMI();
    return 1;
#endif
}

uint64_t verify_mode_get_divergence_count(void) {
    return s_divergence_count;
}
