/*
 * extras.c — Mega Man 3 game-specific runner hooks
 * Implements game_extras.h.
 * Features: TCP debug server, verify mode via Nestopia oracle,
 *           per-frame ring buffer capture, custom debug commands.
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
#include "verify_mode.h"
#include "recomp_stack.h"
#include "mapper.h"

#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <stdio.h>
#include <string.h>
#include <SDL.h>

/* ---- External declarations ---- */
extern void func_FF90(void);
extern int call_by_address(uint16_t addr);
extern void func_C545(void);
extern void func_FF14(void);
extern void maybe_trigger_vblank(int cycles);

/* ---- Globals expected by the runner framework ---- */
const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";

/* ==================================================================
 * Runner hook implementations
 * ================================================================== */

uint32_t game_get_expected_crc32(void) { return 0x00000000u; }
const char *game_get_name(void) { return "Mega Man 3"; }

void game_on_init(void) {
    int port = (g_run_mode == RUN_MODE_EMULATED) ? 4373 : 4372;
    debug_server_init(port);

    if (g_run_mode != RUN_MODE_NATIVE && g_rom_path_for_extras) {
        verify_mode_init(g_rom_path_for_extras);
    }
}

void game_on_frame(uint64_t frame_count) { (void)frame_count; }
void game_post_nmi(uint64_t frame_count) { (void)frame_count; }

int game_handle_arg(const char *key, const char *val) {
    if (strcmp(key, "--verify") == 0) {
        g_run_mode = RUN_MODE_VERIFY;
        return 1;
    }
    if (strcmp(key, "--emulated") == 0) {
        g_run_mode = RUN_MODE_EMULATED;
        return 1;
    }
    (void)val;
    return 0;
}

const char *game_arg_usage(void) {
    return "  --verify     Run both native + Nestopia, compare each frame\n"
           "  --emulated   Run Nestopia only (reference mode)\n";
}

void game_run_nmi(void) {
    verify_mode_run_nmi();

    /* MM3's NMI handler at $C000 hijacks the RTI return address on the 6502
     * stack, replacing it with $C121 — a trampoline that calls func_FF90
     * (bank-switch dispatch / sound engine).
     *
     * DISABLED: The game's own code (scheduler coroutines) already calls
     * func_FF90 during normal execution. Calling it again from NMI causes
     * unbounded C stack growth: func_FF90 runs the sound engine which takes
     * many cycles, triggering another VBlank mid-execution, which calls
     * game_run_nmi → func_FF90 recursively. On real NES this can't happen
     * because NMI is edge-triggered (once per frame). The sound engine
     * doesn't work yet anyway (Issue 4 — jump_local_ptr unsupported). */
}

void game_run_main(void) {
    if (g_run_mode == RUN_MODE_EMULATED) {
#ifdef ENABLE_NESTOPIA_ORACLE
        printf("[Emulated] Nestopia driving main loop\n");
        static uint32_t emu_argb[256 * 240];
        extern void runner_present_framebuf(const uint32_t *argb_buf);
        extern int g_turbo;

        for (;;) {
            SDL_Event ev;
            while (SDL_PollEvent(&ev)) {
                if (ev.type == SDL_QUIT) return;
                if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_ESCAPE) return;
                if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_F5)
                    g_turbo ^= 1;
            }
            const uint8_t *keys = SDL_GetKeyboardState(NULL);
            uint8_t btn = 0;
            if (keys[SDL_SCANCODE_Z])      btn |= 0x80;
            if (keys[SDL_SCANCODE_X])      btn |= 0x40;
            if (keys[SDL_SCANCODE_TAB])    btn |= 0x20;
            if (keys[SDL_SCANCODE_RETURN]) btn |= 0x10;
            if (keys[SDL_SCANCODE_UP])     btn |= 0x08;
            if (keys[SDL_SCANCODE_DOWN])   btn |= 0x04;
            if (keys[SDL_SCANCODE_LEFT])   btn |= 0x02;
            if (keys[SDL_SCANCODE_RIGHT])  btn |= 0x01;
            /* Script input override */
            extern int script_get_buttons(void);
            extern void script_tick(uint64_t frame, const uint8_t *ram);
            extern int script_check_exit(void);
            extern int script_wants_screenshot(char *buf, int buflen);
            int sp = script_get_buttons();
            if (sp >= 0) btn = (uint8_t)sp;
            /* TCP input override */
            int tcp_btn = debug_server_get_input_override();
            if (tcp_btn >= 0) btn = (uint8_t)tcp_btn;
            g_controller1_buttons = btn;

            debug_server_poll();
            debug_server_wait_if_paused();
            script_tick(g_frame_count, g_ram);
            if (script_check_exit() >= 0) return;

            nestopia_bridge_run_frame(g_controller1_buttons);
            nestopia_bridge_get_framebuf_argb(emu_argb);
            /* In turbo mode, only present every 16th frame to avoid
             * vsync blocking (~6ms per SDL_RenderPresent call). */
            if (!g_turbo || (g_frame_count & 15) == 0)
                runner_present_framebuf(emu_argb);

            nestopia_bridge_get_ram(g_ram);
            nestopia_bridge_get_sram(g_sram);

            /* Copy Nestopia CPU state to runner globals for ring buffer */
            {
                NestopiaCpuRegs cpu_regs;
                nestopia_bridge_get_cpu_regs(&cpu_regs);
                g_cpu.A = cpu_regs.a;
                g_cpu.X = cpu_regs.x;
                g_cpu.Y = cpu_regs.y;
                g_cpu.S = cpu_regs.sp;
                /* Unpack P flags */
                g_cpu.C = (cpu_regs.p >> 0) & 1;
                g_cpu.Z = (cpu_regs.p >> 1) & 1;
                g_cpu.I = (cpu_regs.p >> 2) & 1;
                g_cpu.D = (cpu_regs.p >> 3) & 1;
                g_cpu.V = (cpu_regs.p >> 6) & 1;
                g_cpu.N = (cpu_regs.p >> 7) & 1;
            }

            /* Copy Nestopia PPU state to runner globals for ring buffer */
            {
                NestopiaPpuRegs ppu_regs;
                nestopia_bridge_get_ppu_regs(&ppu_regs);
                g_ppuctrl     = ppu_regs.ctrl;
                g_ppumask     = ppu_regs.mask;
                g_ppuscroll_x = ppu_regs.scroll_x;
                g_ppuscroll_y = ppu_regs.scroll_y;
            }

            /* Copy Nestopia VRAM to runner globals for ring buffer oracle comparison */
            nestopia_bridge_get_chr_ram(g_chr_ram, 0x2000);
            nestopia_bridge_get_nametable(g_ppu_nt, 0x1000);
            nestopia_bridge_get_palette(g_ppu_pal);
            nestopia_bridge_get_oam(g_ppu_oam);

            g_frame_count++;

            debug_server_record_frame();
            debug_server_check_watchpoints();

            if (!g_turbo) SDL_Delay(16);
        }
#else
        fprintf(stderr, "[Error] Nestopia not compiled in\n");
        func_RESET();
#endif
    } else {
        func_RESET();
    }
}

int game_dispatch_override(uint16_t addr) {
    if (addr < 0x8000) {
        return 1;  /* RAM addresses are never valid function targets */
    }
    return 0;
}

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

/* Per-frame ring buffer capture (game_data[16] in NESFrameRecord). */
void game_fill_frame_record(void *record) {
    NESFrameRecord *fr = (NESFrameRecord *)record;
    uint8_t *d = fr->game_data;
    d[0]  = g_ram[0x14];  d[1]  = g_ram[0x16];
    d[2]  = g_ram[0x31];  d[3]  = g_ram[0x46];
    d[4]  = g_ram[0xF4];  d[5]  = g_ram[0xF5];
    d[6]  = g_ram[0x22];  d[7]  = g_ram[0xA0];
    d[8]  = g_ppu_oam[0]; d[9]  = g_ppu_oam[3];
    d[10] = g_ppu_oam[1]; d[11] = g_ppu_oam[2];
    d[12] = g_ram[0xFF];  d[13] = g_ram[0xFE];
    d[14] = g_ram[0xAE];  d[15] = g_ram[0xF6];
    /* Extended: mapper state for divergence tracking */
    MapperState ms;
    mapper_get_state(&ms);
    d[16] = (uint8_t)ms.mirroring;
    d[17] = ms.mmc3_bank_select;
    d[18] = ms.mmc3_regs[0]; d[19] = ms.mmc3_regs[1];
    d[20] = ms.mmc3_regs[2]; d[21] = ms.mmc3_regs[3];
    d[22] = ms.mmc3_regs[4]; d[23] = ms.mmc3_regs[5];
}

/* ==================================================================
 * TCP debug commands
 * ================================================================== */
int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)json;

    /* In emulated mode, intercept mapper_state to read from Nestopia internals */
#ifdef ENABLE_NESTOPIA_ORACLE
    if (strcmp(cmd, "mapper_state") == 0 && g_run_mode == RUN_MODE_EMULATED) {
        NestopiaMapperState ns;
        nestopia_bridge_get_mapper_state(&ns);
        if (ns.valid) {
            debug_server_send_fmt(
                "{\"id\":%d,\"ok\":true,\"bank\":%d,"
                "\"type\":4,\"mirror\":%d,"
                "\"mmc3_bank_sel\":%d,"
                "\"mmc3_regs\":[%d,%d,%d,%d,%d,%d,%d,%d],"
                "\"mmc3_prg\":[%d,%d,%d,%d],"
                "\"mmc3_irq_latch\":%d,\"mmc3_irq_counter\":%d,"
                "\"mmc3_irq_reload\":%d,\"mmc3_irq_enabled\":%d}\n",
                id, (int)ns.prg[2],  /* current switchable PRG bank */
                (ns.bank_select & 0x01) ? 3 : 2,  /* mirroring from ctrl0 bit 0 — but actually $A000 controls this */
                (int)ns.bank_select,
                ns.regs[0], ns.regs[1], ns.regs[2], ns.regs[3],
                ns.regs[4], ns.regs[5], ns.regs[6], ns.regs[7],
                ns.prg[0], ns.prg[1], ns.prg[2], ns.prg[3],
                (int)ns.irq_latch, (int)ns.irq_counter,
                ns.irq_reload, ns.irq_enabled);
        } else {
            debug_server_send_fmt(
                "{\"id\":%d,\"ok\":false,\"error\":\"board is not MMC3\"}\n", id);
        }
        return 1;
    }
#endif

    if (strcmp(cmd, "mm3_state") == 0) {
        debug_server_send_fmt(
            "{\"id\":%d,\"game_mode\":%d,\"sub_mode\":%d,"
            "\"stage\":%d,\"weapon\":%d,\"lives\":%d,"
            "\"prg_r6\":%d,\"prg_r7\":%d,"
            "\"nmi_enable\":%d,\"ppumask_shadow\":%d,"
            "\"bank_switching\":%d,\"frame\":%llu}\n",
            id, g_ram[0x31], g_ram[0x46],
            g_ram[0x22], g_ram[0xA0], g_ram[0xAE],
            g_ram[0xF4], g_ram[0xF5],
            g_ram[0xFF], g_ram[0xFE],
            g_ram[0xF6], (unsigned long long)g_frame_count);
        return 1;
    }

    /* sched_state — current channel table */
    if (strcmp(cmd, "sched_state") == 0) {
        char buf[1024];
        int pos = 0;
        pos += snprintf(buf + pos, sizeof(buf) - pos,
            "{\"id\":%d,\"frame\":%llu,\"sp\":\"$%02X\",\"channels\":[",
            id, (unsigned long long)g_frame_count, g_cpu.S);
        for (int ch = 0; ch < 4; ch++) {
            int x = ch * 4;
            if (ch > 0) buf[pos++] = ',';
            pos += snprintf(buf + pos, sizeof(buf) - pos,
                "{\"ch\":%d,\"state\":%d,\"timer\":%d,"
                "\"b82\":\"$%02X\",\"b83\":\"$%02X\"}",
                ch, g_ram[0x80+x], g_ram[0x81+x],
                g_ram[0x82+x], g_ram[0x83+x]);
        }
        pos += snprintf(buf + pos, sizeof(buf) - pos, "]}\n");
        debug_server_send_line(buf);
        return 1;
    }

    /* sched_stack — dump 6502 stack contents */
    if (strcmp(cmd, "sched_stack") == 0) {
        char buf[2048];
        int pos = 0;
        uint8_t sp = g_cpu.S;
        pos += snprintf(buf + pos, sizeof(buf) - pos,
            "{\"id\":%d,\"sp\":\"$%02X\",\"stack\":[", id, sp);
        for (int i = 1; i <= 32 && (sp + i) <= 0xFF; i++) {
            if (i > 1) buf[pos++] = ',';
            pos += snprintf(buf + pos, sizeof(buf) - pos,
                "\"$%02X\"", g_ram[0x100 + sp + i]);
        }
        pos += snprintf(buf + pos, sizeof(buf) - pos, "]}\n");
        debug_server_send_line(buf);
        return 1;
    }

    return 0;
}
