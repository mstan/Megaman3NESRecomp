/*
 * extras.c — Mega Man 3 game-specific runner hooks
 * Implements game_extras.h (minimal stub).
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
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
    debug_server_init(4371); /* 4370 = Yoshi, 4371 = MM3 */
}

void game_on_frame(uint64_t frame_count) { (void)frame_count; }

void game_post_nmi(uint64_t frame_count) { (void)frame_count; }

int game_handle_arg(const char *key, const char *val) {
    (void)key; (void)val;
    return 0;
}

const char *game_arg_usage(void) { return NULL; }

void game_run_nmi(void) { func_NMI(); }

void game_run_main(void) { func_RESET(); }

int game_dispatch_override(uint16_t addr) { (void)addr; return 0; }

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

void game_fill_frame_record(void *record) { (void)record; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)cmd; (void)id; (void)json;
    return 0;
}
