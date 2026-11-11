/* Native MM3 menu pixels and cursor rules; one common wait, personal choices. */
#include "mm3_coop_menu.h"
#include "mm3_coop.h"
#include "mm3_proto.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "logical_input.h"
#include "mod_function_hooks.h"
#include "mod_runtime.h"
#include "mod_savestate.h"
#ifdef CYC_WITH_SDL
#include "cyc_tcp.h"
#endif
#include <stdio.h>
#include <string.h>

enum { ENTRY = 0xA003, WAIT = 0xFF21, PHASE = 0xA1AA, END_PHASE = 0xA213,
       CURSOR = 0xA398, NAMES = 0xA481, SPRITES = 0xA30C, PANEL_W = 256, PANEL_H = 64 };
typedef struct {
    char magic[4];
    uint8_t enabled, active, owner, pending, checking, close_request;
    uint8_t cursor[2], page[2], repeat[2], held[2], previous[2], ready[2], heal[2], rush[2], rush_start[2];
    uint8_t portrait[2], image[2][PANEL_W * PANEL_H], palette[2][32];
    uint32_t ticks;
    uint64_t opens[2], selections[2], tanks[2], failures;
} Menu;
static Menu M;
static int s_capture;
static uint8_t ram(unsigned a) { return cyc_cpu_ram()[a & 2047]; }
static void poke(unsigned a, unsigned v) { cyc_mod_poke((uint16_t)a, (uint8_t)v); }
int mm3_coop_menu_active(void) { return mm3_coop_enabled() && M.active; }
int mm3_coop_menu_checking(void) { return mm3_coop_enabled() && M.checking; }
void mm3_coop_menu_cancel(void) { M.active = M.pending = M.checking = M.close_request = 0; }
void mm3_coop_menu_power_on(void) { memset(&M, 0, sizeof M); }
static void sound(unsigned id)
{
    unsigned next = ram(0xDA) & 7;
    if (ram(0xDC + next) == 0x88) { poke(0xDC + next, id); poke(0xDA, (next + 1) & 7); }
}
static void merge_sound(const uint8_t sounds[8], unsigned end)
{
    unsigned start = ram(0xDA) & 7;
    for (int i = 0; i < 8 && sounds[start] != 0x88 && ram(0xDC + start) == 0x88; i++) {
        sound(sounds[start]); start = (start + 1) & 7; if (start == end) break;
    }
}
static int select_bank(CycModRegs *r)
{ poke(0xF5, 2); return cyc_mod_call(0xFF6B, r); }
static void inventory(int seat)
{
    for (int a = 0xA0; a <= 0xAD; a++) poke(a, mm3_coop_read(seat, a));
    poke(0xA1, M.cursor[seat]); poke(0xB4, M.page[seat]);
}
typedef struct { const char *id; int enabled; } Hook;
static Hook s_hooks[64];
static int capture_hooks(int on)
{
    int count = nes_mod_function_hook_count(); if (count > 64) return 0;
    if (on) {
        for (int i = 0; i < count; i++) {
            nes_mod_function_hook_at(i, &s_hooks[i].id, NULL, &s_hooks[i].enabled, NULL);
            if (s_hooks[i].enabled && strcmp(s_hooks[i].id, "mm3.coop-menu.phase-end"))
                nes_mod_set_function_hook_enabled(s_hooks[i].id, 0);
        }
        cyc_mod_allow_isolated_hooks(true);
    } else {
        cyc_mod_allow_isolated_hooks(false);
        for (int i = 0; i < count; i++) nes_mod_set_function_hook_enabled(s_hooks[i].id, s_hooks[i].enabled);
    }
    return 1;
}
static int phase_end(uint16_t address) { (void)address; return s_capture; }
static int apply_buffer(uint8_t nt[1024])
{
    unsigned at = 0;
    while (at < 128) {
        unsigned high = ram(0x780 + at++); if (high & 0x80) return 1;
        if (at + 2 > 128) return 0;
        unsigned address = (high << 8) | ram(0x780 + at++), count = 1u + ram(0x780 + at++);
        if (at + count > 128 || address < 0x2000 || address >= 0x3000) return 0;
        for (unsigned i = 0; i < count; i++) nt[(address + i) & 1023] = ram(0x780 + at++);
    }
    return 0;
}
static void capture_panel(int seat)
{
    uint8_t nt[1024] = {0};
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (!cyc_mod_isolate_begin()) { M.failures++; return; }
    int ok = capture_hooks(1) && select_bank(&r);
    inventory(seat); poke(0xF8, 1); poke(0x51, 0xB0);
    unsigned label_tick = M.rush[seat] ? M.rush_start[seat] : M.ticks;
    poke(0x95, label_tick);
    s_capture = 1;
    for (int phase = 0; phase < 8 && ok; phase++) {
        poke(0x50, phase); ok = cyc_mod_call(PHASE, &r) && apply_buffer(nt);
    }
    s_capture = 0;
    if (ok) ok = cyc_mod_call(NAMES, &r) && apply_buffer(nt);
    poke(0xEA, 0x74); poke(0xEB, 0x0B); poke(0xEC, 0x12); poke(0xED, 0x1C);
    if (ok) ok = cyc_mod_call(0xFF45, &r);
    if (ok) {
        for (int i = 0; i < 16; i++) {
            M.palette[seat][i] = cyc_render_palette(i);
            M.palette[seat][16 + i] = cyc_mod_peek((uint16_t)(0xA624 + i)) & 63;
        }
        for (int y = 0; y < PANEL_H; y++) for (int x = 0; x < PANEL_W; x++) {
            /* The native IRQ has already advanced fine Y by two pixels.
             * Its first split line remains stage content; the last two wrap
             * into the other native nametable. Sprites keep physical OAM Y. */
            if (!y) { M.image[seat][y * PANEL_W + x] = 32; continue; }
            if (x < 8 && !(cyc_render_line_mask(176 + y) & 2)) { M.image[seat][y * PANEL_W + x] = 0; continue; }
            int sample_y = y + 2, row = 22 + sample_y / 8, column = x / 8;
            int tile, attr;
            if (row < 30) {
                tile = nt[row * 32 + column]; attr = nt[0x3C0 + (row / 4) * 8 + column / 4];
            } else {
                unsigned other = (0x2000 | ((ram(0x52) & 0x0C) << 8)) ^ 0x800;
                row -= 30;
                tile = cyc_render_nametable((uint16_t)(other + row * 32 + column));
                attr = cyc_render_nametable((uint16_t)(other + 0x3C0 + row / 4 * 8 + column / 4));
            }
            int palette = (attr >> ((row & 2) * 2 + (column & 2))) & 3;
            unsigned pattern = 0x1000 + tile * 16 + (sample_y & 7), bit = 7 - (x & 7);
            int value = ((cyc_render_chr((uint16_t)pattern) >> bit) & 1) |
                (((cyc_render_chr((uint16_t)(pattern + 8)) >> bit) & 1) << 1);
            M.image[seat][y * PANEL_W + x] = (uint8_t)(value ? palette * 4 + value : 0);
        }
        for (int i = 0; i < 256; i += 4) poke(0x200 + i, 0xF8);
        if (M.rush[seat]) {
            poke(0xA1, 6 + (M.page[seat] + M.cursor[seat] - 7) / 2);
            unsigned elapsed = 45 - M.rush[seat]; poke(0x95, elapsed < 15 ? elapsed : 15);
        } else poke(0x95, M.ticks);
        ok = cyc_mod_call(SPRITES, &r);
        M.portrait[seat] = !M.page[seat] && mm3_coop_character(seat);
        for (int i = 63; i >= 0 && ok; i--) {
            const uint8_t *p = cyc_cpu_ram() + 0x200 + i * 4;
            if (p[0] >= 240 || (M.portrait[seat] && i < 4)) continue;
            for (int y = 0; y < 8; y++) for (int x = 0; x < 8; x++) {
                int dx = p[3] + x, dy = p[0] + 1 + y - 176;
                if (dx >= PANEL_W || dy < 0 || dy >= PANEL_H) continue;
                int row = p[2] & 0x80 ? 7 - y : y, bit = p[2] & 0x40 ? x : 7 - x;
                unsigned pattern = 0x1000 + p[1] * 16 + row;
                int v = ((cyc_render_chr((uint16_t)pattern) >> bit) & 1) |
                    (((cyc_render_chr((uint16_t)(pattern + 8)) >> bit) & 1) << 1);
                if (v) M.image[seat][dy * PANEL_W + dx] = (uint8_t)(16 + (p[2] & 3) * 4 + v);
            }
        }
    }
    capture_hooks(0); cyc_mod_isolate_end();
    M.ready[seat] = ok != 0; if (!ok) M.failures++;
}
static int move_cursor(int seat)
{
    CycModRegs r = {0}; cyc_mod_regs(&r);
    uint8_t sounds[8], end = 0;
    if (!cyc_mod_isolate_begin()) return 0;
    int ok = select_bank(&r);
    inventory(seat); poke(0x16, M.held[seat]); poke(0x1F, M.repeat[seat]); poke(0x95, M.ticks);
    if (ok) ok = cyc_mod_call(CURSOR, &r);
    if (ok) {
        M.cursor[seat] = ram(0xA1); M.repeat[seat] = ram(0x1F);
        end = ram(0xDA); memcpy(sounds, cyc_cpu_ram() + 0xDC, sizeof sounds);
    }
    cyc_mod_isolate_end(); if (ok) merge_sound(sounds, end); else M.failures++;
    return ok;
}
static int request(uint16_t address)
{
    (void)address;
    if (!mm3_coop_enabled() || M.active || !M.pending || cyc_mod_isolated()) return 0;
    int seat = M.pending - 1;
    if (!mm3_coop_menu_ready(seat)) { M.pending = 0; return 0; }
    mm3_coop_menu_project(seat); M.checking = 1; return 0;
}
static int after_pause(uint16_t address)
{
    (void)address;
    if (M.checking) { mm3_coop_menu_restore(); M.checking = M.pending = 0; }
    return 0;
}
static int menu(uint16_t address)
{
    if (!mm3_coop_enabled() || cyc_mod_isolated()) return 0;
    if (!M.active) {
        int owner = M.pending ? M.pending - 1 : mm3_coop_seat();
        if (M.checking) { mm3_coop_menu_restore(); M.checking = 0; }
        M.pending = 0;
        if (!mm3_coop_menu_ready(owner)) return 1;
        M.active = 1; M.owner = (uint8_t)owner; M.opens[owner]++; M.close_request = 0;
        for (int seat = 0; seat < 2; seat++) {
            int weapon = mm3_coop_read(seat, 0xA0);
            M.cursor[seat] = (uint8_t)(weapon % 6); M.page[seat] = weapon >= 6 ? 6 : 0;
            M.repeat[seat] = 0xF0; M.previous[seat] = M.held[seat]; M.heal[seat] = M.rush[seat] = 0;
        }
        sound(0x1A);
    } else {
        M.ticks++;
        for (int seat = 0; seat < 2; seat++) {
            uint8_t fresh = M.held[seat] & ~M.previous[seat];
            if (M.rush[seat]) M.rush[seat]--;
            else if (M.heal[seat]) {
                if (!(M.ticks & 3)) { mm3_coop_menu_heal(seat); M.heal[seat]--; sound(0x1C); }
            } else if (mm3_coop_menu_ready(seat)) {
                move_cursor(seat);
                if (fresh & (0x80 | 0x40 | 0x10)) {
                    if ((fresh & 0x40) || M.cursor[seat] == 0x80) {
                        M.page[seat] ^= 6; M.cursor[seat] = 0x80; sound(0x1B);
                    } else if (M.cursor[seat] == 0xFF) {
                        if (!M.page[seat] && mm3_coop_menu_tank(seat)) {
                            M.heal[seat] = (uint8_t)(28 - (mm3_coop_read(seat, 0xA2) & 31)); M.tanks[seat]++;
                        }
                    } else {
                        int weapon = M.page[seat] + M.cursor[seat];
                        if (mm3_coop_menu_equip(seat, weapon)) {
                            M.selections[seat]++;
                            if (weapon == 7 || weapon == 9 || weapon == 11) { M.rush[seat] = 45; M.rush_start[seat] = (uint8_t)M.ticks; }
                            if ((fresh & 0x10) && seat == M.owner) M.close_request = 1;
                        }
                    }
                }
            }
            M.previous[seat] = M.held[seat];
        }
        if (M.close_request && !M.rush[0] && !M.rush[1] && !M.heal[0] && !M.heal[1]) {
            M.active = M.close_request = 0; sound(0x1A); poke(0xEE, 1); return 1;
        }
    }
    for (int seat = 0; seat < 2; seat++) capture_panel(seat);
    /* Native coroutine sleep consumes its own temporary return. The real
     * gameplay caller remains underneath until the menu confirms resume. */
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (r.s < 4) { M.failures++; M.active = 0; return 1; }
    uint8_t sp = (uint8_t)(r.s - 4);
    unsigned returns[] = {WAIT - 1, address - 1};
    for (int i = 0; i < 2; i++) {
        poke(0x100 | (uint8_t)(sp + 1 + i * 2), returns[i]);
        poke(0x100 | (uint8_t)(sp + 2 + i * 2), returns[i] >> 8);
    }
    r.s = sp; cyc_mod_set_regs(&r); poke(0xEE, 0); return 1;
}
void mm3_coop_menu_input(uint8_t buttons[2])
{
    if (!mm3_coop_enabled()) return;
    for (int seat = 0; seat < 2; seat++) {
        uint8_t held = nes_input_seat(seat + 1);
        if (!M.active && !M.pending && (held & ~M.held[seat] & 0x10) && mm3_coop_menu_ready(seat)) M.pending = (uint8_t)(seat + 1);
        M.held[seat] = held;
    }
    if (!mm3_coop_scene_active()) { M.pending = 0; return; }
    if (M.active) buttons[0] = buttons[1] = 0;
    else if (M.pending) buttons[0] = 0x10;
    else buttons[0] &= (uint8_t)~0x10;
}
int mm3_coop_menu_draw(uint32_t *out, int width)
{
    if (!mm3_coop_menu_active()) return 0;
    int left = (width - PANEL_W) / 2;
    for (int seat = 0; seat < 2; seat++) if (M.ready[seat]) {
        int top = 112 + seat * PANEL_H;
        for (int y = 0; y < PANEL_H; y++) for (int x = 0; x < PANEL_W; x++) {
            int dx = left + x; if (dx < 0 || dx >= width) continue;
            int index = M.image[seat][y * PANEL_W + x];
            if (index < 32) out[(top + y) * width + dx] = cyc_render_color_value(M.palette[seat][index]);
        }
        if (M.portrait[seat]) {
            int previous = mm3_coop_present_player(seat);
            mm3_proto_paint_portrait(out, width, left + 208, top + 9, mm3_coop_read(seat, 0xA0));
            mm3_coop_present_end(previous);
        }
    }
    return 1;
}
void mm3_coop_menu_refresh(void)
{
    static const char *ids[] = {"mm3.coop-menu.request","mm3.coop-menu.after-pause","mm3.coop-menu.entry","mm3.coop-menu.phase-end"};
    for (unsigned i = 0; i < sizeof ids / sizeof ids[0]; i++) nes_mod_set_function_hook_enabled(ids[i], mm3_coop_enabled());
    if (!mm3_coop_enabled()) mm3_coop_menu_cancel();
}
static int get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof M) return -1;
    memcpy(M.magic, "CM02", 4); M.enabled = mm3_coop_enabled(); memcpy(out, &M, sizeof M); return sizeof M;
}
static int valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    Menu n; if (!in || size != (int)sizeof n) return 0; memcpy(&n, in, sizeof n);
    if (memcmp(n.magic, "CM02", 4) || n.enabled != mm3_coop_enabled() || n.active > 1 || n.owner > 1 || n.pending > 2 || n.checking > 1 || n.close_request > 1) return 0;
    for (int seat = 0; seat < 2; seat++) {
        if ((n.page[seat] != 0 && n.page[seat] != 6) || (n.cursor[seat] > 5 && n.cursor[seat] != 0x80 && n.cursor[seat] != 0xFF) ||
            n.ready[seat] > 1 || n.portrait[seat] > 1 || n.heal[seat] > 28 || n.rush[seat] > 45) return 0;
        for (unsigned i = 0; i < sizeof n.image[seat]; i++) if (n.image[seat][i] > 32) return 0;
        for (unsigned i = 0; i < sizeof n.palette[seat]; i++) if (n.palette[seat][i] > 63) return 0;
    }
    return 1;
}
static int set(const uint8_t *in, int size)
{ if (!valid(in, size)) return 0; if (size) memcpy(&M, in, size); else memset(&M, 0, sizeof M); return 1; }
#ifdef CYC_WITH_SDL
static void tcp(int id, const char *line)
{
    (void)line; char b[512];
    snprintf(b, sizeof b, "\"active\":%s,\"owner\":%u,\"cursor\":[%u,%u],\"page\":[%u,%u],\"heal\":[%u,%u],\"ready\":[%u,%u],\"tanks\":[%llu,%llu],\"failures\":%llu",
        M.active ? "true" : "false",M.owner,M.cursor[0],M.cursor[1],M.page[0],M.page[1],M.heal[0],M.heal[1],M.ready[0],M.ready[1],
        (unsigned long long)M.tanks[0],(unsigned long long)M.tanks[1],(unsigned long long)M.failures);
    cyc_tcp_ok(id,b);
}
#endif
void mm3_coop_menu_tcp_setup(void)
{
#ifdef CYC_WITH_SDL
    cyc_tcp_register("mm3_coop_menu", "query personal native menu panels", tcp);
#endif
}
NES_MOD_CONSTRUCTOR(register_mm3_coop_menu)
{
    nes_mod_register_function_entry_plugin("mm3.coop-menu.request",0xCA73,request);
    nes_mod_register_function_entry_plugin("mm3.coop-menu.after-pause",0xCAB5,after_pause);
    nes_mod_register_function_entry_plugin("mm3.coop-menu.entry",ENTRY,menu);
    nes_mod_register_function_entry_plugin("mm3.coop-menu.phase-end",END_PHASE,phase_end);
    nes_mod_register_savestate_hook("mm3.coop-menu",get,set);
    nes_mod_register_savestate_validator("mm3.coop-menu",valid);
}
