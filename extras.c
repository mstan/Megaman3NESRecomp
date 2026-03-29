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
#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <stdio.h>
#include <string.h>

/* Globals expected by the runner framework */
const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";

/* CRC32 of Mega Man 3 (USA) ROM data (excluding iNES header).
 * TODO: compute and fill in after first successful ROM load. */
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

void game_run_main(void) { func_RESET(); }

int game_dispatch_override(uint16_t addr) { (void)addr; return 0; }

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

/*
 * Per-frame ring buffer capture.
 * The game_data[16] field in NESFrameRecord is filled with MM3-specific state.
 *
 * Layout:
 *   [0]  = $14  (controller 1 newly pressed)
 *   [1]  = $16  (controller 1 held)
 *   [2]  = $31  (game mode)
 *   [3]  = $46  (sub-mode)
 *   [4]  = $F4  (PRG bank R6)
 *   [5]  = $F5  (PRG bank R7)
 *   [6]  = $22  (current stage)
 *   [7]  = $A0  (current weapon)
 *   [8]  = OAM[0].Y  (sprite 0 Y — often the caret or first visible sprite)
 *   [9]  = OAM[0].X  (sprite 0 X)
 *   [10] = OAM[0].tile
 *   [11] = OAM[0].attr
 *   [12] = $FF  (NMI enable flag / PPUCTRL shadow)
 *   [13] = $FE  (PPUMASK shadow)
 *   [14] = $AE  (lives)
 *   [15] = $F6  (bank-switch-in-progress flag)
 */
void game_fill_frame_record(void *record) {
    /* The record pointer points to the game_data[16] field */
    uint8_t *d = (uint8_t *)record;
    d[0]  = g_ram[0x14];
    d[1]  = g_ram[0x16];
    d[2]  = g_ram[0x31];
    d[3]  = g_ram[0x46];
    d[4]  = g_ram[0xF4];
    d[5]  = g_ram[0xF5];
    d[6]  = g_ram[0x22];
    d[7]  = g_ram[0xA0];
    d[8]  = g_ppu_oam[0];   /* sprite 0 Y */
    d[9]  = g_ppu_oam[3];   /* sprite 0 X */
    d[10] = g_ppu_oam[1];   /* sprite 0 tile */
    d[11] = g_ppu_oam[2];   /* sprite 0 attr */
    d[12] = g_ram[0xFF];
    d[13] = g_ram[0xFE];
    d[14] = g_ram[0xAE];
    d[15] = g_ram[0xF6];
}

/*
 * Custom TCP debug commands for MM3.
 * Returns 1 if handled, 0 if not recognized.
 */
int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)json;

    if (strcmp(cmd, "mm3_state") == 0) {
        char buf[512];
        snprintf(buf, sizeof(buf),
            "{\"id\":%d,\"game_mode\":%d,\"sub_mode\":%d,"
            "\"stage\":%d,\"weapon\":%d,\"lives\":%d,"
            "\"ctrl_pressed\":%d,\"ctrl_held\":%d,"
            "\"prg_r6\":%d,\"prg_r7\":%d,"
            "\"nmi_enable\":%d,\"ppumask_shadow\":%d,"
            "\"spr0_y\":%d,\"spr0_x\":%d,\"spr0_tile\":%d,"
            "\"bank_switching\":%d}\n",
            id,
            g_ram[0x31], g_ram[0x46],
            g_ram[0x22], g_ram[0xA0], g_ram[0xAE],
            g_ram[0x14], g_ram[0x16],
            g_ram[0xF4], g_ram[0xF5],
            g_ram[0xFF], g_ram[0xFE],
            g_ppu_oam[0], g_ppu_oam[3], g_ppu_oam[1],
            g_ram[0xF6]);
        debug_server_send_line(buf);
        return 1;
    }

    return 0;
}
