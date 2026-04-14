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
#include "coroutine.h"

#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <SDL.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* ---- External declarations ---- */
extern int call_by_address(uint16_t addr);

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

static void dump_sched_trace_on_exit(void) {
    FILE *f = fopen("C:/temp/sched_trace_dump.txt", "w");
    if (!f) return;
    int count = 0, idx = 0;
    coroutine_get_sched_trace(&count, &idx);
    const SchedTraceEntry *buf = coroutine_get_sched_trace_buf();
    int start = (count < SCHED_TRACE_SIZE) ? 0 : idx;
    static const char *evt_names[] = {"START", "RESUME", "YIELD"};
    fprintf(f, "Scheduler trace at exit (frame %llu, %d events):\n",
            (unsigned long long)g_frame_count, count);
    fprintf(f, "Channel table: ");
    for (int ch = 0; ch < 4; ch++) {
        int x = ch * 4;
        fprintf(f, "[ch%d: st=%d tm=%d b82=$%02X b83=$%02X] ",
                ch, g_ram[0x80+x], g_ram[0x81+x], g_ram[0x82+x], g_ram[0x83+x]);
    }
    fprintf(f, "\nSP=$%02X I=%d\n", g_cpu.S, g_cpu.I);
    for (int i = 0; i < count; i++) {
        int ei = (start + i) % SCHED_TRACE_SIZE;
        fprintf(f, "  %s ch=%d f=%llu addr=$%04X sp=$%02X\n",
                evt_names[buf[ei].event_type],
                buf[ei].channel,
                (unsigned long long)buf[ei].frame,
                (int)buf[ei].addr,
                (int)buf[ei].sp_before);
    }
    /* Dump 6502 stack */
    fprintf(f, "Stack (from SP=$%02X):", g_cpu.S);
    for (int i = 1; i <= 32 && (g_cpu.S + i) <= 0xFF; i++)
        fprintf(f, " %02X", g_ram[0x100 + g_cpu.S + i]);
    fprintf(f, "\n");
    fclose(f);
}

void game_on_init(void) {
    int port = (g_run_mode == RUN_MODE_EMULATED) ? 4373 : 4372;
    debug_server_init(port);
    atexit(dump_sched_trace_on_exit);

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
    /* INSTRUMENTATION: sample native S + oracle SP BEFORE any NMI work runs.
     * Must be above verify_mode_run_nmi() because verify drives func_NMI
     * internally and we want s_pre_nmi (pre-NMI main-loop S). */
    {
        static FILE *s_pre_log = NULL;
        static int   s_pre_log_lines = 0;
        if (s_pre_log_lines < 8000) {
            if (!s_pre_log) s_pre_log = fopen("C:/temp/nmi_pre_sp.log", "w");
            if (s_pre_log &&
                ((g_frame_count < 300) || ((g_frame_count % 30) == 0))) {
                int oracle_sp = -1, oracle_pc = -1;
#ifdef ENABLE_NESTOPIA_ORACLE
                if (nestopia_bridge_is_loaded()) {
                    NestopiaCpuRegs _r;
                    nestopia_bridge_get_cpu_regs(&_r);
                    oracle_sp = _r.sp;
                    oracle_pc = _r.pc;
                }
#endif
                fprintf(s_pre_log,
                    "f=%llu mode=$%02X nat_S=$%02X oracle_sp=$%02X "
                    "oracle_pc=$%04X delta=%+d\n",
                    (unsigned long long)g_frame_count, g_ram[0x46],
                    g_cpu.S, oracle_sp & 0xFF, oracle_pc & 0xFFFF,
                    (oracle_sp >= 0) ? (int)((int8_t)(oracle_sp - g_cpu.S))
                                     : 0);
                fflush(s_pre_log);
                s_pre_log_lines++;
            }
        }
    }

    verify_mode_run_nmi();
    if (g_run_mode != RUN_MODE_NATIVE) return;

    /* MM3's NMI handler hijacks its RTI return address: it saves the
     * original return PC to $7C/$7D, then overwrites the stack with
     * $C121 (PostNMI_Trampoline). On real hardware, RTI pops this and
     * jumps to $C121. In the recomp, func_NMI() (== func_C000()) just
     * returns, so we explicitly call func_C121 to run the post-NMI chain
     * (sound engine via func_FF90, register restore, and return to the
     * interrupted code).
     *
     * NOTE: func_C000 must NOT be called here — verify_mode_run_nmi()
     * already invoked it via func_NMI() above. Calling it a second time
     * double-pops the stack by 3 bytes per frame, shifting S so that
     * C121's STA $0105,X writes land in shadow OAM ($0200-$0203),
     * corrupting sprite tiles (e.g. the title cursor). */
    extern void func_C121(void);

    /* INSTRUMENTATION: log S and vblank depth at entry to each handler,
     * so we can correlate low-S writes at $C12F/$C136 ($0105,X / $0106,X)
     * with stack pressure across depth=1 vs depth=2. Appends one line per
     * NMI entry to C:/temp/nmi_s_trace.log. Cap at 500 lines so we don't
     * balloon the file across long runs. */
    {
        static FILE *s_nmi_log = NULL;
        static uint64_t s_last_logged_mode = 0xFFFFFFFF;
        static int      s_nmi_log_lines = 0;
        /* Log every frame for mode changes + first 10 of each mode;
         * otherwise one every 30 frames to capture title + beyond without
         * flooding. */
        uint8_t cur_mode = g_ram[0x46];
        int should_log =
            (s_nmi_log_lines < 8000) &&
            ((cur_mode != s_last_logged_mode) ||
             ((g_frame_count % 30) == 0) ||
             (g_frame_count < 300));
        if (!s_nmi_log) s_nmi_log = fopen("C:/temp/nmi_s_trace.log", "w");
        if (s_nmi_log && should_log) {
            extern int coroutine_get_current_channel(void);
            int ch = coroutine_get_current_channel();
            uint8_t s_c000 = g_cpu.S;
            int     d_c000 = runtime_get_vblank_depth();
            /* Oracle SP comparison: in verify mode, Nestopia has just
             * completed the PREVIOUS frame's retro_run (see verify_mode.c)
             * so mach.cpu.sp reflects post-NMI-return state ≈ main-loop S
             * about to be interrupted by the NEXT NMI. That's exactly the
             * sample we want to compare against `s_pre_nmi` in native. */
            int oracle_sp = -1, oracle_pc = -1;
#ifdef ENABLE_NESTOPIA_ORACLE
            if (nestopia_bridge_is_loaded()) {
                NestopiaCpuRegs _r;
                nestopia_bridge_get_cpu_regs(&_r);
                oracle_sp = _r.sp;
                oracle_pc = _r.pc;
            }
#endif
            /* Show stack contents around S: 4 bytes ABOVE S (most recent
             * pushes) and 4 bytes BELOW S (next free slots). Since S points
             * at NEXT free slot, $0100+S+1 is the top of used stack. */
            fprintf(s_nmi_log,
                "f=%llu mode=$%02X ch=%d C000 S=$%02X depth=%d ctrl=$%02X "
                "oracle_sp=$%02X oracle_pc=$%04X "
                "top4=[%02X %02X %02X %02X] next4=[%02X %02X %02X %02X]\n",
                (unsigned long long)g_frame_count,
                cur_mode, ch, s_c000, d_c000, g_ppuctrl,
                oracle_sp & 0xFF, oracle_pc & 0xFFFF,
                g_ram[0x100 + ((uint8_t)(s_c000+1))],
                g_ram[0x100 + ((uint8_t)(s_c000+2))],
                g_ram[0x100 + ((uint8_t)(s_c000+3))],
                g_ram[0x100 + ((uint8_t)(s_c000+4))],
                g_ram[0x100 + ((uint8_t)(s_c000  ))],
                g_ram[0x100 + ((uint8_t)(s_c000-1))],
                g_ram[0x100 + ((uint8_t)(s_c000-2))],
                g_ram[0x100 + ((uint8_t)(s_c000-3))]);
            fflush(s_nmi_log);
            s_nmi_log_lines++;
            s_last_logged_mode = cur_mode;

            /* NOTE: func_C000 intentionally NOT called here — see comment
             * above. verify_mode_run_nmi() already ran it. */
            uint8_t s_c121 = g_cpu.S;
            fprintf(s_nmi_log,
                "f=%llu                 C121 S=$%02X depth=%d "
                "(C000_delta=%+d)\n",
                (unsigned long long)g_frame_count,
                s_c121, runtime_get_vblank_depth(),
                (int)((int8_t)(s_c121 - s_c000)));
            fflush(s_nmi_log);
            s_nmi_log_lines++;

            func_C121();

            uint8_t s_exit = g_cpu.S;
            fprintf(s_nmi_log,
                "f=%llu                 EXIT S=$%02X depth=%d "
                "(C121_delta=%+d)\n",
                (unsigned long long)g_frame_count,
                s_exit, runtime_get_vblank_depth(),
                (int)((int8_t)(s_exit - s_c121)));
            fflush(s_nmi_log);
            s_nmi_log_lines++;
            return;
        }
    }
    func_C121();
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

            /* Script-triggered named screenshot (oracle comparison support).
             * The native NMI callback writes script screenshots from
             * s_framebuf, but emulated mode bypasses that callback entirely.
             * Mirror the same path here using Nestopia's framebuffer. */
            {
                char shot_path[256];
                if (script_wants_screenshot(shot_path, sizeof(shot_path))) {
                    extern void save_png(const char *path, int w, int h,
                                         const void *rgb, int stride);
                    static uint8_t rgb[256 * 240 * 3];
                    for (int i = 0; i < 256 * 240; i++) {
                        uint32_t px = emu_argb[i];
                        rgb[i*3+0] = (px >> 16) & 0xFF;
                        rgb[i*3+1] = (px >>  8) & 0xFF;
                        rgb[i*3+2] = (px      ) & 0xFF;
                    }
                    save_png(shot_path, 256, 240, rgb, 256*3);
                    printf("[Shot] %s\n", shot_path);
                }
            }

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
#ifdef _WIN32
        __try {
            func_RESET();
        } __except(1) {
            printf("[CRASH] Exception 0x%08lX at frame %llu\n",
                   GetExceptionCode(), (unsigned long long)g_frame_count);
            fflush(stdout);
        }
#else
        func_RESET();
#endif
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

void game_post_render(uint32_t *framebuf) { (void)framebuf; }

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
                nestopia_bridge_get_mirroring(),  /* actual PPU mirroring: 2=vert, 3=horiz */
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

    /* dispatch_miss_last — last dispatch miss with caller + 6502 stack snapshot */
    if (strcmp(cmd, "dispatch_miss_last") == 0) {
        extern uint32_t g_miss_count_any;
        extern uint16_t g_miss_last_addr;
        extern uint64_t g_miss_last_frame;
        extern int      g_miss_last_bank;
        extern char     g_miss_last_caller[64];
        extern char     g_miss_last_stack2[64];
        extern uint8_t  g_miss_last_sp;
        extern uint8_t  g_miss_last_stack_bytes[16];
        char stk[80]; int p = 0;
        for (int i = 0; i < 16; i++)
            p += snprintf(stk + p, sizeof(stk) - p, "%s%02X", i ? " " : "",
                          g_miss_last_stack_bytes[i]);
        debug_server_send_fmt(
            "{\"id\":%d,\"count\":%u,\"addr\":\"$%04X\",\"bank\":%d,"
            "\"frame\":%llu,\"caller\":\"%s\",\"caller_parent\":\"%s\","
            "\"sp\":\"$%02X\",\"stack\":\"%s\"}\n",
            id, (unsigned)g_miss_count_any, g_miss_last_addr, g_miss_last_bank,
            (unsigned long long)g_miss_last_frame,
            g_miss_last_caller, g_miss_last_stack2,
            g_miss_last_sp, stk);
        return 1;
    }

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

    /* coroutine_info — check fiber state + stack dump + counters */
    if (strcmp(cmd, "coroutine_info") == 0) {
        uint8_t sp = g_ram[0x82]; /* channel 0 saved SP */
        char stack_hex[128] = "";
        int pos = 0;
        for (int i = 1; i <= 16 && (sp + i) <= 0xFF; i++) {
            pos += snprintf(stack_hex + pos, sizeof(stack_hex) - pos,
                "%s%02X", i > 1 ? " " : "", g_ram[0x100 + sp + i]);
        }
        int yields = 0, resumes = 0, starts = 0;
        uint8_t yield_sp = 0, resume_sp = 0;
        coroutine_get_debug_counters(&yields, &resumes, &starts,
                                      &yield_sp, &resume_sp);
        debug_server_send_fmt(
            "{\"id\":%d,\"active\":%d,"
            "\"ch0_fiber\":%d,\"ch1_fiber\":%d,"
            "\"ch2_fiber\":%d,\"ch3_fiber\":%d,"
            "\"ch0_state\":%d,\"ch0_timer\":%d,"
            "\"ch0_sp\":\"$%02X\",\"ch0_b83\":\"$%02X\","
            "\"yields\":%d,\"resumes\":%d,\"starts\":%d,"
            "\"last_yield_sp\":\"$%02X\",\"last_resume_sp\":\"$%02X\","
            "\"stack_from_sp\":\"%s\"}\n",
            id, coroutine_is_active(),
            coroutine_has_context(0), coroutine_has_context(1),
            coroutine_has_context(2), coroutine_has_context(3),
            g_ram[0x80], g_ram[0x81],
            sp, g_ram[0x83],
            yields, resumes, starts,
            yield_sp, resume_sp,
            stack_hex);
        return 1;
    }

    /* mirror_debug — track $A000 mirroring writes */
    if (strcmp(cmd, "mirror_debug") == 0) {
        int count = 0;
        uint8_t last_val = 0;
        uint64_t last_frame = 0;
        mapper_get_a000_debug(&count, &last_val, &last_frame);
        debug_server_send_fmt(
            "{\"id\":%d,\"a000_writes\":%d,\"last_val\":%d,"
            "\"last_frame\":%llu,\"current_mirror\":%d}\n",
            id, count, (int)last_val,
            (unsigned long long)last_frame,
            mapper_get_mirroring());
        return 1;
    }

    /* a000_trace — dump $A000 write trace ring buffer */
    if (strcmp(cmd, "a000_trace") == 0) {
        int count = 0, idx = 0;
        mapper_get_a000_trace(&count, &idx);
        const A000TraceEntry *buf = (const A000TraceEntry *)mapper_get_a000_trace_buf();
        /* Start from oldest entry */
        int start = (count < 64) ? 0 : idx;
        debug_server_send_fmt("{\"id\":%d,\"count\":%d,\"entries\":[", id, count);
        for (int i = 0; i < count; i++) {
            int ei = (start + i) % 64;
            if (i > 0) debug_server_send_fmt(",");
            debug_server_send_fmt(
                "{\"f\":%llu,\"v\":%d,\"fn\":\"%s\"}",
                (unsigned long long)buf[ei].frame,
                (int)buf[ei].val,
                buf[ei].caller ? buf[ei].caller : "?");
        }
        debug_server_send_fmt("]}\n");
        return 1;
    }

    /* bail_trace — dump bail event ring buffer */
    if (strcmp(cmd, "bail_trace") == 0) {
        extern BailTraceEntry g_bail_trace[];
        extern int g_bail_trace_count;
        extern int g_bail_trace_idx;
        int count = g_bail_trace_count;
        int start = (count < BAIL_TRACE_SIZE) ? 0 : g_bail_trace_idx;
        debug_server_send_fmt("{\"id\":%d,\"count\":%d,\"entries\":[", id, count);
        for (int i = 0; i < count; i++) {
            int ei = (start + i) % BAIL_TRACE_SIZE;
            BailTraceEntry *e = &g_bail_trace[ei];
            if (i > 0) debug_server_send_fmt(",");
            debug_server_send_fmt(
                "{\"f\":%llu,\"pc\":\"$%04X\",\"exp_sp\":\"$%02X\","
                "\"act_sp\":\"$%02X\",\"stk_top\":%d,"
                "\"fn0\":\"%s\",\"fn1\":\"%s\"}",
                (unsigned long long)e->frame, e->caller_pc,
                e->expected_sp, e->actual_sp,
                e->recomp_stack_top,
                e->recomp_stack_0 ? e->recomp_stack_0 : "?",
                e->recomp_stack_1 ? e->recomp_stack_1 : "?");
        }
        debug_server_send_fmt("]}\n");
        return 1;
    }

    /* ppu_t_state — query PPU internal t register and derived scroll */
    if (strcmp(cmd, "ppu_t_state") == 0) {
        extern uint16_t runtime_get_ppu_t(void);
        extern uint8_t  runtime_get_ppu_fine_x(void);
        extern uint16_t g_ppuaddr;
        uint16_t t = runtime_get_ppu_t();
        uint8_t fine_x = runtime_get_ppu_fine_x();
        int coarseX = t & 0x1F;
        int coarseY = (t >> 5) & 0x1F;
        int nt_sel = (t >> 10) & 3;
        int fineY = (t >> 12) & 7;
        int eff_scroll_x = (coarseX << 3) | (fine_x & 7);
        int eff_scroll_y = (coarseY << 3) | fineY;
        debug_server_send_fmt(
            "{\"id\":%d,\"t\":\"0x%04X\",\"fine_x\":%d,"
            "\"coarseX\":%d,\"coarseY\":%d,\"nt_sel\":%d,\"fineY\":%d,"
            "\"eff_scroll_x\":%d,\"eff_scroll_y\":%d,"
            "\"ppuaddr\":\"0x%04X\","
            "\"g_scroll_x\":%d,\"g_scroll_y\":%d}\n",
            id, (int)t, (int)fine_x,
            coarseX, coarseY, nt_sel, fineY,
            eff_scroll_x, eff_scroll_y,
            (int)g_ppuaddr,
            (int)g_ppuscroll_x, (int)g_ppuscroll_y);
        return 1;
    }

    /* last_sync — what runtime_sync_scroll_from_t produced last */
    if (strcmp(cmd, "last_sync") == 0) {
        extern void runtime_get_last_sync(uint8_t *sx, uint8_t *sy, uint16_t *t, uint64_t *frame);
        extern void runtime_get_frame_start_scroll(uint8_t *sx, uint8_t *sy, uint16_t *t, uint64_t *frame);
        uint8_t sx, sy, fsx, fsy; uint16_t t, ft; uint64_t frame, fframe;
        runtime_get_last_sync(&sx, &sy, &t, &frame);
        runtime_get_frame_start_scroll(&fsx, &fsy, &ft, &fframe);
        debug_server_send_fmt(
            "{\"id\":%d,"
            "\"last_sync_x\":%d,\"last_sync_y\":%d,\"last_sync_t\":\"0x%04X\",\"last_sync_f\":%llu,"
            "\"frame_start_x\":%d,\"frame_start_y\":%d,\"frame_start_t\":\"0x%04X\",\"frame_start_f\":%llu}\n",
            id, (int)sx, (int)sy, (int)t, (unsigned long long)frame,
            (int)fsx, (int)fsy, (int)ft, (unsigned long long)fframe);
        return 1;
    }

    /* disable_render_irq — toggle IRQ during rendering for debug */
    if (strcmp(cmd, "disable_render_irq") == 0) {
        extern int g_disable_render_irq;
        g_disable_render_irq = !g_disable_render_irq;
        debug_server_send_fmt("{\"id\":%d,\"disabled\":%d}\n",
            id, g_disable_render_irq);
        return 1;
    }

    /* irq_scanlines — when did IRQs fire during rendering last frame */
    if (strcmp(cmd, "irq_scanlines") == 0) {
        extern void runtime_get_irq_scanlines(int *out, int *count, uint64_t *frame);
        int scanlines[8], count = 0;
        uint64_t frame = 0;
        runtime_get_irq_scanlines(scanlines, &count, &frame);
        debug_server_send_fmt("{\"id\":%d,\"frame\":%llu,\"count\":%d,\"scanlines\":[",
            id, (unsigned long long)frame, count);
        for (int i = 0; i < count; i++) {
            if (i > 0) debug_server_send_fmt(",");
            debug_server_send_fmt("%d", scanlines[i]);
        }
        debug_server_send_fmt("]}\n");
        return 1;
    }

    /* scroll_trace — dump $2005 write trace ring buffer */
    if (strcmp(cmd, "scroll_trace") == 0) {
        extern void runtime_get_scroll_trace(int *out_count, int *out_idx);
        extern const void *runtime_get_scroll_trace_buf(void);
        typedef struct { uint64_t frame; uint8_t val; uint8_t which; } STE;
        int count = 0, idx = 0;
        runtime_get_scroll_trace(&count, &idx);
        const STE *buf = (const STE *)runtime_get_scroll_trace_buf();
        int start = (count < 64) ? 0 : idx;
        debug_server_send_fmt("{\"id\":%d,\"count\":%d,\"entries\":[", id, count);
        for (int i = 0; i < count; i++) {
            int ei = (start + i) % 64;
            if (i > 0) debug_server_send_fmt(",");
            debug_server_send_fmt(
                "{\"f\":%llu,\"v\":%d,\"xy\":\"%s\"}",
                (unsigned long long)buf[ei].frame,
                (int)buf[ei].val,
                buf[ei].which ? "Y" : "X");
        }
        debug_server_send_fmt("]}\n");
        return 1;
    }

    /* chr_trace — dump CHR bank change trace ring buffer */
    if (strcmp(cmd, "chr_trace") == 0) {
        int count = 0, idx = 0;
        mapper_get_chr_trace(&count, &idx);
        const ChrTraceEntry *buf = (const ChrTraceEntry *)mapper_get_chr_trace_buf();
        int start = (count < CHR_TRACE_SIZE) ? 0 : idx;
        debug_server_send_fmt("{\"id\":%d,\"count\":%d,\"entries\":[", id, count);
        for (int i = 0; i < count; i++) {
            int ei = (start + i) % CHR_TRACE_SIZE;
            if (i > 0) debug_server_send_fmt(",");
            debug_server_send_fmt(
                "{\"f\":%llu,\"r\":[%d,%d,%d,%d,%d,%d],\"bs\":%d,\"fn\":\"%s\"}",
                (unsigned long long)buf[ei].frame,
                (int)buf[ei].regs[0], (int)buf[ei].regs[1], (int)buf[ei].regs[2],
                (int)buf[ei].regs[3], (int)buf[ei].regs[4], (int)buf[ei].regs[5],
                (int)buf[ei].bank_select,
                buf[ei].caller ? buf[ei].caller : "?");
        }
        debug_server_send_fmt("]}\n");
        return 1;
    }

    /* mapper_state — native mode: read from runner's mapper state */
    if (strcmp(cmd, "mapper_state") == 0) {
        MapperState ms;
        mapper_get_state(&ms);
        debug_server_send_fmt(
            "{\"id\":%d,\"ok\":true,\"bank\":%d,"
            "\"type\":%d,\"mirror\":%d,"
            "\"mmc3_bank_sel\":%d,"
            "\"mmc3_regs\":[%d,%d,%d,%d,%d,%d,%d,%d],"
            "\"mmc3_irq_latch\":%d,\"mmc3_irq_counter\":%d,"
            "\"mmc3_irq_reload\":%d,\"mmc3_irq_enabled\":%d}\n",
            id, ms.current_bank,
            ms.mapper_type, ms.mirroring,
            (int)ms.mmc3_bank_select,
            ms.mmc3_regs[0], ms.mmc3_regs[1], ms.mmc3_regs[2], ms.mmc3_regs[3],
            ms.mmc3_regs[4], ms.mmc3_regs[5], ms.mmc3_regs[6], ms.mmc3_regs[7],
            (int)ms.mmc3_irq_latch, (int)ms.mmc3_irq_counter,
            ms.mmc3_irq_reload, ms.mmc3_irq_enabled);
        return 1;
    }

    /* sched_trace — scheduler event ring buffer */
    if (strcmp(cmd, "sched_trace") == 0) {
        int count = 0, idx = 0;
        coroutine_get_sched_trace(&count, &idx);
        const SchedTraceEntry *buf = coroutine_get_sched_trace_buf();
        int start = (count < SCHED_TRACE_SIZE) ? 0 : idx;
        static const char *evt_names[] = {"START", "RESUME", "YIELD"};
        debug_server_send_fmt("{\"id\":%d,\"count\":%d,\"current_ch\":%d,\"entries\":[",
            id, count, coroutine_get_current_channel());
        for (int i = 0; i < count; i++) {
            int ei = (start + i) % SCHED_TRACE_SIZE;
            if (i > 0) debug_server_send_fmt(",");
            debug_server_send_fmt(
                "{\"f\":%llu,\"evt\":\"%s\",\"ch\":%d,\"addr\":\"$%04X\",\"sp\":\"$%02X\"}",
                (unsigned long long)buf[ei].frame,
                evt_names[buf[ei].event_type],
                buf[ei].channel,
                (int)buf[ei].addr,
                (int)buf[ei].sp_before);
        }
        debug_server_send_fmt("]}\n");
        return 1;
    }

    /* irq_state — current IRQ/interrupt state */
    if (strcmp(cmd, "irq_state") == 0) {
        extern int g_disable_render_irq;
        debug_server_send_fmt(
            "{\"id\":%d,\"I_flag\":%d,\"disable_render_irq\":%d,"
            "\"vblank_depth\":%d,\"frame\":%llu}\n",
            id, (int)g_cpu.I, g_disable_render_irq,
            runtime_get_vblank_depth(), (unsigned long long)g_frame_count);
        return 1;
    }

    /* screenshot — save current framebuffer as PNG */
    if (strcmp(cmd, "screenshot") == 0) {
        /* Parse optional "path" from JSON, default to C:/temp/dbg_shot.png */
        char path[256] = "C:/temp/dbg_shot.png";
        {
            const char *p = strstr(json, "\"path\"");
            if (p) {
                p += 6;
                while (*p == ' ' || *p == ':') p++;
                if (*p == '"') {
                    p++;
                    int i = 0;
                    while (*p && *p != '"' && i < (int)sizeof(path) - 1)
                        path[i++] = *p++;
                    path[i] = '\0';
                }
            }
        }

        extern void runner_screenshot(const char *path);
        extern void runner_save_argb_png(const char *path, const uint32_t *argb, int w, int h);

#ifdef ENABLE_NESTOPIA_ORACLE
        if (g_run_mode == RUN_MODE_EMULATED) {
            static uint32_t shot_argb[256 * 240];
            nestopia_bridge_get_framebuf_argb(shot_argb);
            runner_save_argb_png(path, shot_argb, 256, 240);
        } else
#endif
        {
            runner_screenshot(path);
        }

        debug_server_send_fmt(
            "{\"id\":%d,\"ok\":true,\"path\":\"%s\",\"frame\":%llu}\n",
            id, path, (unsigned long long)g_frame_count);
        return 1;
    }

    return 0;
}
