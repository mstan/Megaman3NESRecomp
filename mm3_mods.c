/* Title-owned enhancements, using the original USA cartridge's equipment data. */
#include "mm3_mods.h"
#include "mm3_proto.h"
#include "mm3_charge.h"
#include "mm3_coop.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "logical_input.h"
#include "mod_function_hooks.h"
#include "mod_runtime.h"
#include "mod_savestate.h"
#ifdef CYC_WITH_SDL
#include "cyc_tcp.h"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char HOOK[] = "mm3.enhancement.player-dispatch";
static int s_weapons;
static uint8_t s_chr[12], s_palette[12][4];
static int s_tables_ready;
typedef struct {
    uint8_t magic[4], enabled, previous, pending, reserved;
    uint64_t changes;
} WeaponState;
static WeaponState s_states[2];
#define W s_states[mm3_coop_seat()]

const CycInputProfile mm3_input_profile = {
    .id = "megaman-weapons-1",
    .game_label = {"Previous weapon (L)", "Next weapon (R)"},
    .game_pad = {"leftshoulder", "rightshoulder"},
    .shortcut_pad = {"none", "leftstick+rightstick", NULL, NULL, NULL, NULL, NULL}
};

static uint8_t ram(unsigned address) { return cyc_cpu_ram()[address & 0x7FF]; }
static void poke(unsigned address, unsigned value) { cyc_mod_poke((uint16_t)address, (uint8_t)value); }

static void weapons_set(int on)
{
    s_weapons = on != 0;
    W.previous = W.pending = 0;
    mm3_mods_refresh_hooks();
    /* Lift only after this title's complete simulation profile is qualified. */
    nes_mod_set_local_only("Mega Man 3 quick weapon switching", s_weapons);
}

void mm3_mods_refresh_hooks(void)
{
    nes_mod_set_function_hook_enabled(HOOK, s_weapons || mm3_proto_available() || mm3_charge_available() || mm3_coop_enabled());
}

static int equipment_tables(void)
{
    if (s_tables_ready) return 1;
    size_t bytes = cyc_mod_copy_cart_payload(NULL, 0);
    if (bytes < 0x4671) return 0;
    uint8_t *payload = (uint8_t *)malloc(bytes);
    if (!payload) return 0;
    int ok = cyc_mod_copy_cart_payload(payload, bytes) == bytes;
    if (ok) {
        /* Bank $02, the same tables the native pause menu reads at A634/A641. */
        memcpy(s_chr, payload + 0x4634, sizeof s_chr);
        memcpy(s_palette, payload + 0x4641, sizeof s_palette);
        s_tables_ready = 1;
    }
    free(payload);
    return ok;
}

static int can_switch(void)
{
    int state = ram(0x30);
    return (ram(0xA2) & 31) && !ram(0x50) && ram(0xF8) != 1 &&
        (state <= 3 || state == 5);
}

static int weapon_dispatch(uint16_t address)
{
    (void)address;
    unsigned pressed = W.pending;
    W.pending = 0; /* Unsafe presses expire; they never apply after a lock clears. */
    if (!s_weapons || (pressed != CYC_GAME_L && pressed != CYC_GAME_R) ||
        !can_switch() || !equipment_tables()) return 0;
    int current = ram(0xA0);
    if (current >= 12) return 0;
    int next = current, step = pressed == CYC_GAME_L ? -1 : 1;
    do { next = (next + step + 12) % 12; }
    while (next != current && next && !(ram(0xA2 + next) & 0x80));
    if (next == current) return 0;

    if (mm3_mods_equip(next, 1)) W.changes++;
    return 0;
}
int mm3_mods_equip(int next, int announce)
{
    if (next < 0 || next >= 12 || (next && !(ram(0xA2 + next) & 0x80)) || !equipment_tables()) return 0;
    /* Personal weapon slots, including Rush and slide dust. Never touch world slots. */
    for (int slot = 1; slot < 16; slot++) poke(0x300 + slot, 0);
    poke(0x5B, 0); poke(0x5C, 0); /* Release the departing Spark Shock effect. */
    poke(0xA0, next);
    poke(0xA1, next % 6); poke(0xB4, next >= 6 ? 6 : 0);
    poke(0xB1, next ? 0x80 | next : 0);
    poke(0xB5, 0); poke(0x32, 0);
    poke(0xEB, s_chr[next]); poke(0x1B, 0xFF);
    for (int color = 0; color < 3; color++) {
        poke(0x611 + color, s_palette[next][color]);
        poke(0x631 + color, s_palette[next][color]);
    }
    poke(0x18, 3);
    /* Native sound ring: submit_sound_ID ($F89A), without touching its temporaries. */
    int sound = ram(0xDA) & 7;
    if (announce && ram(0xDC + sound) == 0x88) {
        poke(0xDC + sound, 0x1B);
        poke(0xDA, (sound + 1) & 7);
    }
    return 1;
}

static int player_dispatch(uint16_t address)
{
    if (!cyc_mod_isolated()) mm3_coop_dispatch();
    if (mm3_proto_dispatch()) { mm3_charge_cancel(); W.pending = 0; return 1; }
    weapon_dispatch(address);
    mm3_charge_dispatch();
    return 0;
}
void mm3_mods_personal_dispatch(void) { weapon_dispatch(0); mm3_charge_dispatch(); }

void mm3_mods_input(uint8_t buttons[2])
{
    mm3_coop_input(buttons);
    for (int seat = 0; seat < (mm3_coop_enabled() ? 2 : 1); seat++) {
        WeaponState *w = &s_states[seat];
        unsigned held = nes_input_game_buttons(seat + 1) & (CYC_GAME_L | CYC_GAME_R);
        w->pending = s_weapons && held != (CYC_GAME_L | CYC_GAME_R) ? (uint8_t)(held & ~w->previous) : 0;
        w->previous = (uint8_t)held;
    }
}

void mm3_mods_power_on(void)
{
    memset(s_states, 0, sizeof s_states);
    s_tables_ready = 0;
    mm3_proto_power_on();
    mm3_charge_power_on();
    mm3_mods_refresh_hooks();
}
void mm3_mods_frame_end(void) { s_states[0].pending = s_states[1].pending = 0; mm3_coop_frame_end(); mm3_proto_frame_end(); mm3_charge_frame_end(); }

bool mm3_mods_option(const char *name, const char *value)
{
    if (strcmp(name, "--weapon-cycle")) return mm3_coop_option(name, value) || mm3_charge_option(name, value) || mm3_proto_option(name, value);
    if (strcmp(value, "on") && strcmp(value, "off")) return false;
    weapons_set(!strcmp(value, "on"));
    return true;
}

static int state_get(uint8_t *out, int cap)
{
    int count = mm3_coop_enabled() ? 2 : 1, size = count * (int)sizeof W;
    if (cap < size) return -1;
    for (int i = 0; i < count; i++) { memcpy(s_states[i].magic, "MW01", 4); s_states[i].enabled = (uint8_t)s_weapons; }
    memcpy(out, s_states, size); return size;
}
static int state_valid(const uint8_t *in, int len)
{
    if (!len) return !s_weapons;
    int count = mm3_coop_enabled() ? 2 : 1;
    if (!in || len != count * (int)sizeof W) return 0;
    for (int i = 0; i < count; i++) {
        WeaponState next; memcpy(&next, in + i * sizeof next, sizeof next);
        if (memcmp(next.magic, "MW01", 4) || next.enabled != s_weapons || next.previous > 3 || next.pending > 3 || next.reserved) return 0;
    }
    return 1;
}
static int state_set(const uint8_t *in, int len)
{
    if (!state_valid(in, len)) return 0;
    if (len) memcpy(s_states, in, len); else memset(s_states, 0, sizeof s_states);
    return 1;
}
static void reset_mods(void) { weapons_set(0); }
static void activate_weapons(void) { weapons_set(1); }

#ifdef CYC_WITH_SDL
static void tcp_mods(int id, const char *line)
{
    (void)line;
    char fields[192];
    snprintf(fields, sizeof fields,
        "\"weapon_cycle\":%s,\"weapon\":%u,\"held\":%u,\"changes\":%llu,\"native_state\":%u",
        s_weapons ? "true" : "false", ram(0xA0), W.previous,
        (unsigned long long)W.changes, ram(0x30));
    cyc_tcp_ok(id, fields);
}
#endif
void mm3_mods_tcp_setup(void)
{
    mm3_proto_tcp_setup();
    mm3_charge_tcp_setup();
#ifdef CYC_WITH_SDL
    cyc_tcp_register("mm3_mods", "query current title enhancement state", tcp_mods);
#endif
}

NES_MOD_CONSTRUCTOR(register_mm3_mods)
{
    nes_mod_register_function_entry_plugin(HOOK, 0xCD34, player_dispatch);
    nes_mod_set_function_hook_enabled(HOOK, 0);
    nes_mod_register_reset_callback(reset_mods);
    nes_mod_register_activation_plugin("mega-man-3-usa.weapons", activate_weapons);
    nes_mod_register_savestate_hook("mm3.weapons", state_get, state_set);
    nes_mod_register_savestate_validator("mm3.weapons", state_valid);
}
