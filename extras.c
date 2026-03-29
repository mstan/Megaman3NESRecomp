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

#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <stdio.h>
#include <string.h>
#include <SDL.h>

/* ---- External declarations ---- */
extern void func_FF90(void);
extern void call_by_address(uint16_t addr);
extern void func_C545(void);
extern void func_FF14(void);
extern void maybe_trigger_vblank(void);

#include <windows.h>

/* ---- Globals expected by the runner framework ---- */
const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";

/* ==================================================================
 * Coroutine scheduler — Windows Fiber implementation (Approach 2)
 *
 * Each coroutine channel gets its own fiber with its own C stack.
 * The scheduler runs in a dedicated fiber. Yield (func_FF21) switches
 * to the scheduler fiber; resume switches back to the coroutine fiber.
 * This preserves the full C call chain across yield/resume cycles.
 *
 * Boot path: the inline scheduler in func_FE00 dispatches the first
 * coroutine via call_by_address on the main thread. When it yields
 * (func_FF21), we convert the main thread to a fiber, create the
 * scheduler fiber, and switch. From then on, all coroutines run in
 * their own fibers.
 * ================================================================== */

#define SCHED_MAX_CHANNELS 4
#define FIBER_STACK_SIZE   (1024 * 1024)  /* 1 MB per coroutine */

static LPVOID s_scheduler_fiber = NULL;
static LPVOID s_co_fibers[SCHED_MAX_CHANNELS] = {0};
static int    s_fiber_init = 0;
static int    s_current_ch = -1;
static uint16_t s_start_addr = 0;

/* Fiber entry point for a new coroutine */
static void CALLBACK co_fiber_proc(LPVOID param) {
    int ch = (int)(intptr_t)param;
    /* Run the coroutine entry point */
    call_by_address(s_start_addr);
    /* Coroutine returned without yielding — mark done, return to scheduler */
    s_co_fibers[ch] = NULL;
    SwitchToFiber(s_scheduler_fiber);
    /* Never reached — fiber is deleted by scheduler */
}

/* Scheduler fiber main loop */
static void CALLBACK sched_fiber_proc(LPVOID param) {
    (void)param;

    while (1) {
        g_cpu.S = 0xFF;
        g_cpu.X = 0x00;
        g_ram[0x90] = 0x00;
        g_cpu.Y = 0x04;

        int dispatched = 0;
        while (g_cpu.Y > 0) {
            maybe_trigger_vblank();
            uint8_t state = g_ram[0x80 + g_cpu.X];

            if (state >= 0x04) {
                if (g_ram[0x90] != 0) { dispatched = -1; break; }

                g_cpu.Y = (g_cpu.Y - 1) & 0xFF;
                g_ram[0x91] = g_cpu.Y ^ 0x03;

                uint8_t old_state = g_ram[0x80 + g_cpu.X];
                g_ram[0x80 + g_cpu.X] = 0x02;

                int ch = g_cpu.X >> 2;
                s_current_ch = ch;

                /* Call input handler for channel 0 */
                if (g_ram[0x91] == 0) {
                    func_C545();
                }

                if (old_state == 0x08) {
                    /* State 8: START — create fiber for new coroutine */
                    uint8_t lo = g_ram[0x82 + g_cpu.X];
                    uint8_t hi = g_ram[0x83 + g_cpu.X];
                    g_ram[0x93] = lo;
                    g_ram[0x94] = hi;
                    s_start_addr = (uint16_t)lo | ((uint16_t)hi << 8);

                    /* Clean up old fiber if any */
                    if (s_co_fibers[ch]) {
                        DeleteFiber(s_co_fibers[ch]);
                        s_co_fibers[ch] = NULL;
                    }
                    s_co_fibers[ch] = CreateFiber(
                        FIBER_STACK_SIZE, co_fiber_proc, (LPVOID)(intptr_t)ch);
                    SwitchToFiber(s_co_fibers[ch]);
                    /* Back: coroutine yielded or finished */
                    s_current_ch = -1;
                    dispatched = 1;
                    break;

                } else {
                    /* State 4-7: RESUME — switch to existing coroutine fiber */
                    g_cpu.S = g_ram[0x82 + g_cpu.X];

                    if (s_co_fibers[ch]) {
                        SwitchToFiber(s_co_fibers[ch]);
                        /* Back: coroutine yielded or finished */
                    }
                    s_current_ch = -1;
                    dispatched = 1;
                    break;
                }
            }

            g_cpu.X = (g_cpu.X + 4) & 0xFF;
            g_cpu.Y = (g_cpu.Y - 1) & 0xFF;
        }

        if (!dispatched) maybe_trigger_vblank();
    }
}

/* func_FEAA — standalone scheduler entry (called from generated JMP $FEAA).
 * With fibers active, this just switches to the scheduler fiber. */
void func_FEAA(void) {
    if (s_scheduler_fiber) {
        SwitchToFiber(s_scheduler_fiber);
    }
    /* If fibers not set up yet, return (inline scheduler in func_FE00 handles boot) */
}

/* func_FF21 — coroutine yield.
 * Saves 6502 state to channel table, then switches to the scheduler fiber.
 * On resume, restores registers and returns to caller. */
void func_FF21(void) {
    /* $FF21-$FF25: LDA #1; STA $93 */
    g_cpu.A = 0x01;
    g_ram[0x93] = g_cpu.A;

    /* $FF25-$FF28: PHA X, PHA Y */
    g_ram[0x100 + g_cpu.S] = g_cpu.X; g_cpu.S--;
    g_ram[0x100 + g_cpu.S] = g_cpu.Y; g_cpu.S--;

    /* $FF29: JSR $FF14 — compute channel*4 into X */
    g_ram[0x100 + g_cpu.S] = 0xFF; g_cpu.S--;
    g_ram[0x100 + g_cpu.S] = 0x2B; g_cpu.S--;
    func_FF14();
    g_cpu.S += 2;  /* RTS balance */

    /* $FF2C-$FF32: store timer, set state=1 (idle) */
    g_cpu.A = g_ram[0x93];
    g_ram[0x81 + g_cpu.X] = g_cpu.A;
    g_cpu.A = 0x01;
    g_ram[0x80 + g_cpu.X] = g_cpu.A;

    /* $FF34-$FF37: TSX; STX $82,Y — save SP to channel table */
    g_cpu.Y = g_cpu.X;
    g_cpu.X = g_cpu.S;
    g_ram[(0x82 + g_cpu.Y) & 0xFF] = g_cpu.X;

    int ch = g_cpu.Y >> 2;

    if (!s_fiber_init) {
        /* First yield — set up fiber infrastructure.
         * The main thread is running the first coroutine (dispatched by
         * the inline scheduler in func_FE00). Convert it to a fiber. */
        s_fiber_init = 1;
        LPVOID main_fiber = ConvertThreadToFiber(NULL);
        if (ch >= 0 && ch < SCHED_MAX_CHANNELS)
            s_co_fibers[ch] = main_fiber;
        s_scheduler_fiber = CreateFiber(FIBER_STACK_SIZE, sched_fiber_proc, NULL);
        SwitchToFiber(s_scheduler_fiber);
        /* Resumed by scheduler */
    } else {
        /* Normal yield — switch to scheduler */
        SwitchToFiber(s_scheduler_fiber);
        /* Resumed by scheduler */
    }

    /* Restore registers from 6502 stack (matching PLA Y, PLA X in original) */
    g_cpu.S++;
    g_cpu.Y = g_ram[0x100 + g_cpu.S];
    g_cpu.S++;
    g_cpu.X = g_ram[0x100 + g_cpu.S];
    g_cpu.S += 2;  /* pop JSR return address for stack balance */
}

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
            runner_present_framebuf(emu_argb);

            nestopia_bridge_get_ram(g_ram);
            nestopia_bridge_get_sram(g_sram);
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
    uint8_t *d = (uint8_t *)record;
    d[0]  = g_ram[0x14];  d[1]  = g_ram[0x16];
    d[2]  = g_ram[0x31];  d[3]  = g_ram[0x46];
    d[4]  = g_ram[0xF4];  d[5]  = g_ram[0xF5];
    d[6]  = g_ram[0x22];  d[7]  = g_ram[0xA0];
    d[8]  = g_ppu_oam[0]; d[9]  = g_ppu_oam[3];
    d[10] = g_ppu_oam[1]; d[11] = g_ppu_oam[2];
    d[12] = g_ram[0xFF];  d[13] = g_ram[0xFE];
    d[14] = g_ram[0xAE];  d[15] = g_ram[0xF6];
}

/* ==================================================================
 * TCP debug commands
 * ================================================================== */
int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)json;

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
