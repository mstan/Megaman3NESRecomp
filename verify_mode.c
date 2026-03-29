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

    /* Compare PPU visual state: CHR-RAM, nametables, framebuffer */
    static uint8_t emu_vram[0x4000];
    int vram_size = 0;
    nestopia_bridge_get_vram(emu_vram, &vram_size);

    /* Compare CHR-RAM (tile data the renderer reads) */
    int chr_diff_count = 0;
    int chr_first_addr = -1;
    /* Nestopia VRAM for CHR-ROM mappers may not contain CHR data in the
     * same layout. Compare nametable region instead ($2000-$2FFF → offset
     * 0x2000 in VRAM, which maps to our g_ppu_nt[0..0xFFF]). */
    int nt_diff_count = 0;
    int nt_first_addr = -1;
    if (vram_size >= 0x3000) {
        for (int i = 0; i < 0x1000; i++) {
            if (g_ppu_nt[i] != emu_vram[0x2000 + i]) {
                if (nt_diff_count == 0) nt_first_addr = 0x2000 + i;
                nt_diff_count++;
            }
        }
    }

    /* Compare rendered framebuffer — the ultimate visual truth */
    static uint32_t native_fb[256 * 240];
    static uint32_t emu_fb[256 * 240];
    ppu_render_frame(native_fb);
    nestopia_bridge_get_framebuf_argb(emu_fb);

    int pixel_diff_count = 0;
    int pixel_first_x = -1, pixel_first_y = -1;
    for (int i = 0; i < 256 * 240; i++) {
        /* Compare RGB only (ignore alpha) */
        if ((native_fb[i] & 0xFFFFFF) != (emu_fb[i] & 0xFFFFFF)) {
            if (pixel_diff_count == 0) {
                pixel_first_x = i % 256;
                pixel_first_y = i / 256;
            }
            pixel_diff_count++;
        }
    }

    /* Save comparison images periodically when pixels differ */
    if (pixel_diff_count > 0 && g_frame_count % 120 == 0) {
        extern void save_png(const char *path, int w, int h, const void *rgb, int stride);
        static uint8_t rgb[256 * 240 * 3];
        char path[128];

        /* Native framebuffer */
        for (int i = 0; i < 256 * 240; i++) {
            rgb[i*3+0] = (native_fb[i] >> 16) & 0xFF;
            rgb[i*3+1] = (native_fb[i] >>  8) & 0xFF;
            rgb[i*3+2] =  native_fb[i]        & 0xFF;
        }
        snprintf(path, sizeof(path), "C:/temp/verify_native_%04llu.png",
                 (unsigned long long)g_frame_count);
        save_png(path, 256, 240, rgb, 256 * 3);

        /* Emulator framebuffer */
        for (int i = 0; i < 256 * 240; i++) {
            rgb[i*3+0] = (emu_fb[i] >> 16) & 0xFF;
            rgb[i*3+1] = (emu_fb[i] >>  8) & 0xFF;
            rgb[i*3+2] =  emu_fb[i]        & 0xFF;
        }
        snprintf(path, sizeof(path), "C:/temp/verify_emu_%04llu.png",
                 (unsigned long long)g_frame_count);
        save_png(path, 256, 240, rgb, 256 * 3);

        /* Diff image: red where pixels differ, black where they match */
        for (int i = 0; i < 256 * 240; i++) {
            if ((native_fb[i] & 0xFFFFFF) != (emu_fb[i] & 0xFFFFFF)) {
                rgb[i*3+0] = 255; rgb[i*3+1] = 0; rgb[i*3+2] = 0;
            } else {
                rgb[i*3+0] = 0; rgb[i*3+1] = 0; rgb[i*3+2] = 0;
            }
        }
        snprintf(path, sizeof(path), "C:/temp/verify_diff_%04llu.png",
                 (unsigned long long)g_frame_count);
        save_png(path, 256, 240, rgb, 256 * 3);
    }

    int passed = (diff_count == 0) && (pixel_diff_count == 0);

    if (!passed) {
        s_divergence_count++;
        if (diff_count > 0) {
            fprintf(stderr, "[verify] DIVERGE frame %llu: RAM %d bytes | first: $%04X native=0x%02X emu=0x%02X"
                    " | $F8:N=%02X/E=%02X $78:N=%02X/E=%02X $5E:N=%02X/E=%02X $9B:N=%02X/E=%02X\n",
                    (unsigned long long)g_frame_count, diff_count,
                    first_diff_addr, first_native, first_emu,
                    g_ram[0xF8], emu_ram[0xF8], g_ram[0x78], emu_ram[0x78],
                    g_ram[0x5E], emu_ram[0x5E], g_ram[0x9B], emu_ram[0x9B]);
        }
        if (nt_diff_count > 0) {
            fprintf(stderr, "[verify] DIVERGE frame %llu: NT %d bytes | first: $%04X\n",
                    (unsigned long long)g_frame_count, nt_diff_count, nt_first_addr);
        }
        if (pixel_diff_count > 0) {
            fprintf(stderr, "[verify] DIVERGE frame %llu: PIXELS %d differ | first: (%d,%d) native=0x%06X emu=0x%06X\n",
                    (unsigned long long)g_frame_count, pixel_diff_count,
                    pixel_first_x, pixel_first_y,
                    native_fb[pixel_first_y * 256 + pixel_first_x] & 0xFFFFFF,
                    emu_fb[pixel_first_y * 256 + pixel_first_x] & 0xFFFFFF);
        }
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
