/* Two native controllers share one stage. Only named personal RAM is projected. */
#include "mm3_coop.h"
#include "mm3_mods.h"
#include "mm3_proto.h"
#include "mm3_charge.h"
#include "mm3_widescreen.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_ring.h"
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

enum { PERSONAL = 512, PARTS = 64 };
typedef struct { int16_t x; uint8_t y, attr, height, pattern[32], palette[4]; } Part;
typedef struct { int16_t origin; uint8_t count, oam[256]; Part parts[PARTS]; } Picture;
typedef struct { uint8_t ram[PERSONAL], held, previous; Picture building, shown; } Player;
typedef struct {
    char magic[4];
    uint8_t enabled, initialized, stage, anchor, current, roster, scope, scope_owner;
    uint8_t ai, ai_owner, ai_stack, ai_x;
    uint8_t draw, draw_owner, draw_stack, reserved;
    CycModRegs original;
    uint8_t scratch[16];
    Player players[2];
    uint64_t updates, failures, contacts[2], hits[2], handoffs;
} Coop;
static Coop C;
static int s_on, s_roster, s_inside, s_projectiles;
static unsigned s_count;
static uint16_t s_address[PERSONAL], s_index[2048];
static struct { uint32_t frame; uint16_t address; uint8_t seat, value; } s_pokes[32];
static int s_poke_count;
static uint8_t ram(unsigned a) { return cyc_cpu_ram()[a & 2047]; }
static void poke(unsigned a, unsigned v) { cyc_mod_poke((uint16_t)a, (uint8_t)v); }
int mm3_coop_enabled(void) { return s_on; }
int mm3_coop_seat(void) { return s_on ? C.current : 0; }
int mm3_coop_character(int seat) { return s_roster ^ (seat & 1); }
static void addresses(void)
{
    if (s_count) return;
    /* Camera, stage, boss/script flags, RNG, shared lives and E-Tanks stay out. */
    static const uint8_t zp[] = {0x1F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,
        0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,0x41,0x43,0x44,0x5D,0xB1,0xB4,0xB5,0xB9,0xBA,0xEB};
    for (unsigned i = 0; i < sizeof zp; i++) s_address[s_count++] = zp[i];
    for (unsigned a = 0xA0; a <= 0xAD; a++) s_address[s_count++] = (uint16_t)a;
    for (unsigned field = 0; field < 24; field++) for (unsigned slot = 0; slot < 16; slot++)
        s_address[s_count++] = (uint16_t)(0x300 + field * 32 + slot);
    for (unsigned i = 1; i <= 3; i++) {
        s_address[s_count++] = (uint16_t)(0x610 + i); s_address[s_count++] = (uint16_t)(0x630 + i);
    }
    for (unsigned i = 0; i < s_count; i++) s_index[s_address[i]] = (uint16_t)(i + 1);
}
static void capture(Player *p) { for (unsigned i = 0; i < s_count; i++) p->ram[i] = ram(s_address[i]); }
static void project(const Player *p) { for (unsigned i = 0; i < s_count; i++) poke(s_address[i], p->ram[i]); }
static int combat_field(unsigned a) { return a != 0xEB && !(a >= 0x610 && a <= 0x633); }
static void capture_combat(Player *p) { for (unsigned i = 0; i < s_count; i++) if (combat_field(s_address[i])) p->ram[i] = ram(s_address[i]); }
static void project_combat(const Player *p) { for (unsigned i = 0; i < s_count; i++) if (combat_field(s_address[i])) poke(s_address[i], p->ram[i]); }
int mm3_coop_read(int seat, unsigned a)
{
    if (a >= 2048 || seat < 0 || seat > 1) return 0;
    return s_on && C.initialized && s_index[a] ? C.players[seat].ram[s_index[a] - 1] : ram(a);
}
static int alive(int seat) { return (mm3_coop_read(seat, 0xA2) & 31) && mm3_coop_read(seat, 0x30) != 0x0E; }
static void sound(unsigned id)
{
    unsigned next = ram(0xDA) & 7;
    if (ram(0xDC + next) == 0x88) { poke(0xDC + next, id); poke(0xDA, (next + 1) & 7); }
}
static void controls(Player *p)
{
    poke(0x14, p->held & ~p->previous); poke(0x16, p->held);
    poke(0x15, 0); poke(0x17, 0); poke(0x98, 0);
}
static void initialize(void)
{
    mm3_charge_new_team();
    capture(&C.players[C.anchor]);
    uint8_t held = C.players[C.anchor ^ 1].held, previous = C.players[C.anchor ^ 1].previous;
    C.players[C.anchor ^ 1] = C.players[C.anchor];
    Player *p = &C.players[C.anchor ^ 1];
    p->held = held; p->previous = previous;
    for (unsigned slot = 1; slot < 16; slot++) p->ram[s_index[0x300 + slot] - 1] = 0;
    C.stage = ram(0x22); C.initialized = 1;
}
/* Isolated native controllers may use personal character/charge hooks, but
 * presentation observers, shared AI and this dispatcher must not run twice. */
typedef struct { const char *id; int enabled; } Hook;
static Hook s_hooks[64];
static int isolated_hooks(int enabled)
{
    int count = nes_mod_function_hook_count();
    if (count > (int)(sizeof s_hooks / sizeof s_hooks[0])) return 0;
    if (enabled) {
        for (int i = 0; i < count; i++) {
            Hook *h = &s_hooks[i]; nes_mod_function_hook_at(i, &h->id, NULL, &h->enabled, NULL);
            int personal = !strcmp(h->id, "mm3.proto.muzzle") || !strcmp(h->id, "mm3.proto.shots") ||
                !strcmp(h->id, "mm3.coop.pool-end") || !strcmp(h->id, "mm3.coop.death-music") ||
                (s_inside == 2 && (!strcmp(h->id, "mm3.proto.pose") || !strcmp(h->id, "mm3.proto.part") || !strcmp(h->id, "mm3.proto.pose-done")));
            if (h->enabled && !personal) nes_mod_set_function_hook_enabled(h->id, 0);
        }
        cyc_mod_allow_isolated_hooks(true);
    } else {
        cyc_mod_allow_isolated_hooks(false);
        for (int i = 0; i < count; i++) nes_mod_set_function_hook_enabled(s_hooks[i].id, s_hooks[i].enabled);
    }
    return 1;
}
static int native_call(uint16_t routine, CycModRegs *r, int pool)
{
    uint8_t result[PERSONAL], sounds[8], next = 0;
    if (!cyc_mod_isolate_begin()) return 0;
    int ok = isolated_hooks(1);
    if (ok && pool) {
        poke(0xF4, 0x1C); poke(0xF5, 0x1D);
        ok = cyc_mod_call(0xFF6B, r);
    }
    if (ok) { s_projectiles = pool; ok = cyc_mod_call(routine, r); s_projectiles = 0; }
    if (ok) {
        for (unsigned i = 0; i < s_count; i++) result[i] = ram(s_address[i]);
        next = ram(0xDA); memcpy(sounds, cyc_cpu_ram() + 0xDC, sizeof sounds);
    }
    isolated_hooks(0); cyc_mod_isolate_end();
    if (ok) {
        for (unsigned i = 0; i < s_count; i++) poke(s_address[i], result[i]);
        for (unsigned i = 0; i < 8; i++) if (ram(0xDC + i) == 0x88 && sounds[i] != 0x88) poke(0xDC + i, sounds[i]);
        poke(0xDA, next);
    }
    return ok;
}
static int pool_boundary(uint16_t address)
{
    (void)address;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    /* At this top-level loop edge every personal AI invocation has returned.
     * Its original JSR is the next stack frame, so RTS ends only this pool. */
    if (s_projectiles) return r.x >= 16;
    if (!s_on || !C.initialized || s_inside || C.scope || C.ai || cyc_mod_isolated() || r.x < 16 || r.x >= 32 ||
        !(ram(0x300 + r.x) & 0x80) || ram(0x320 + r.x) >= 0xA0) return 0;
    capture_combat(&C.players[C.current]);
    int target_x = ram(0x360 + r.x) + ram(0x380 + r.x) * 256, target_y = ram(0x3C0 + r.x);
    int chosen = C.current, best = 0x7FFFFFFF;
    for (int seat = 0; seat < 2; seat++) if (alive(seat)) {
        int distance = abs(target_x - mm3_coop_read(seat, 0x360) - mm3_coop_read(seat, 0x380) * 256) +
            abs(target_y - mm3_coop_read(seat, 0x3C0));
        if (distance < best) { best = distance; chosen = seat; }
    }
    C.ai = 1; C.ai_owner = C.current; C.ai_stack = r.s; C.ai_x = ram(0x27);
    C.current = (uint8_t)chosen; project_combat(&C.players[chosen]); poke(0x27, ram(0x360));
    return 0;
}
static int enemy_done(uint16_t address)
{
    (void)address;
    if (!s_on || !C.ai || s_inside || C.scope || cyc_mod_isolated()) return 0;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (r.s != C.ai_stack) return 0;
    capture_combat(&C.players[C.current]); C.current = C.ai_owner; project_combat(&C.players[C.current]);
    poke(0x27, C.ai_x); C.ai = 0; return 0;
}
static int death_music(uint16_t address)
{
    (void)address;
    if (!s_on || !C.initialized) return 0;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    return r.a == 0xF2 && (ram(0x30) == 0x0E || ram(0x3D) == 0x0E) && alive(C.current ^ 1);
}
int mm3_coop_dispatch(void)
{
    if (!s_on || s_inside || C.scope || C.ai || cyc_mod_isolated()) return 0;
    addresses();
    if (ram(0xF8) == 1 || ram(0x50) || ram(0x30) == 4 || ram(0x30) >= 0x0C) return 0;
    if (!C.initialized || C.stage != ram(0x22)) initialize();
    capture(&C.players[C.anchor]);
    int guest = C.anchor ^ 1;
    CycModRegs original = {0}, r; cyc_mod_regs(&original); r = original;
    uint8_t input[4] = {ram(0x14),ram(0x15),ram(0x16),ram(0x17)}, scratch[16];
    memcpy(scratch, cyc_cpu_ram(), sizeof scratch);
    s_inside = 1; C.current = (uint8_t)guest; project(&C.players[guest]); controls(&C.players[guest]);
    mm3_mods_personal_dispatch();
    int ok = native_call(0xCD34, &r, 0);
    if (ok && ram(0x3D)) {
        poke(0x30, ram(0x3D)); poke(0x3D, 0);
        if (ram(0x30) == 0x0E) { if (!alive(C.anchor)) sound(0xF2); sound(0x17); }
    }
    if (ok) ok = native_call(0x800C, &r, 1);
    if (ok) { capture(&C.players[guest]); C.updates++; } else C.failures++;
    C.current = C.anchor; project(&C.players[C.anchor]); s_inside = 0;
    for (unsigned i = 0; i < 4; i++) poke(0x14 + i, input[i]);
    for (unsigned i = 0; i < sizeof scratch; i++) poke(i, scratch[i]);
    cyc_mod_set_regs(&original);
    return 0;
}
/* Run the guest through the real native collision call, then re-enter its
 * entry with the original anchor/stack. No blocking death/script is isolated. */
static void collision(int kind, unsigned entry)
{
    if (!s_on || !C.initialized || s_inside || cyc_mod_isolated()) return;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (C.scope) {
        if (C.scope != kind || r.s != C.original.s) return;
        capture_combat(&C.players[C.current]); C.contacts[C.current]++;
        C.current = C.scope_owner; project(&C.players[C.current]);
        for (unsigned i = 0; i < sizeof C.scratch; i++) poke(i, C.scratch[i]);
        cyc_mod_set_regs(&C.original); C.scope = 0; return;
    }
    if (r.x < 16 || r.x >= 32 || !alive(C.current ^ 1)) return;
    /* Ordinary enemy calls return through their native caller. Boss/script
     * continuations are admitted separately when their exit is qualified. */
    if (kind == 2 && ram(0x320 + r.x) >= 0xA0) return;
    capture(&C.players[C.current]); C.scope_owner = C.current; C.original = r;
    memcpy(C.scratch, cyc_cpu_ram(), sizeof C.scratch);
    C.current ^= 1; project_combat(&C.players[C.current]); C.scope = (uint8_t)kind;
    unsigned ret = entry - 1;
    poke(0x100 + r.s, ret >> 8); r.s--;
    poke(0x100 + r.s, ret); r.s--;
    cyc_mod_set_regs(&r);
}
void mm3_coop_contact(void) { collision(1, 0x8097); }
void mm3_coop_weapon_hit(void) { collision(2, 0x8102); }
void mm3_coop_input(uint8_t buttons[2])
{
    /* MM3 stores A at bit7 and Right at bit0, exactly the host seat format. */
    for (int i = 0; i < 2; i++) C.players[i].held = nes_input_seat(i + 1);
    if (s_on) {
        buttons[0] = C.initialized && (alive(0) || alive(1)) ? nes_input_seat(C.anchor + 1) :
            nes_input_seat(1) | nes_input_seat(2);
        buttons[1] = 0;
    }
}
void mm3_coop_frame_end(void)
{
    if (!s_on || !C.initialized || C.scope || C.ai) return;
    capture(&C.players[C.anchor]);
    if (!alive(C.anchor) && alive(C.anchor ^ 1)) {
        C.anchor ^= 1; C.current = C.anchor; project(&C.players[C.anchor]);
        poke(0x14, 0); poke(0x16, C.players[C.anchor].held); C.handoffs++;
    }
    poke(0x15, 0); poke(0x17, 0); poke(0x98, 0);
    for (int i = 0; i < 2; i++) C.players[i].previous = C.players[i].held;
}
void mm3_coop_frame_begin(void)
{
    if (!s_on) return;
    if (C.initialized && !C.scope && (C.stage != ram(0x22) || ram(0x30) == 4)) {
        C.initialized = C.ai = 0; C.current = C.anchor;
    }
    if (C.initialized) for (int i = 0; i < s_poke_count; i++) if (s_pokes[i].frame == cyc_ring_frame) {
        unsigned a = s_pokes[i].address; int seat = s_pokes[i].seat;
        C.players[seat].ram[s_index[a] - 1] = s_pokes[i].value;
        if (C.current == seat) poke(a, s_pokes[i].value);
    }
}
void mm3_coop_before_draw(void)
{
    if (!s_on || !C.initialized || !C.ai || C.draw || C.current == C.anchor || cyc_mod_isolated()) return;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    capture_combat(&C.players[C.current]); C.draw = 1; C.draw_owner = C.current; C.draw_stack = r.s;
    C.current = C.anchor; project_combat(&C.players[C.anchor]);
}
static void after_return(void)
{
    if (!s_on || !C.draw || cyc_mod_isolated()) return;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (r.s != (uint8_t)(C.draw_stack + 2)) return;
    capture_combat(&C.players[C.anchor]); C.current = C.draw_owner; project_combat(&C.players[C.current]); C.draw = 0;
}
/* Graphics are captured through the native per-entity draw routine. */
void mm3_coop_draw(void)
{
    if (!s_on || !C.initialized || C.scope || (C.ai && !C.draw) || s_inside || ram(0xF8) == 1 || ram(0x30) == 4 || ram(0x30) >= 0x0C) return;
    capture(&C.players[C.anchor]);
    int guest = C.anchor ^ 1, camera = ram(0xF9) * 256 + ram(0xFC);
    C.current = (uint8_t)guest; project(&C.players[guest]);
    int shifted = ram(0x380) * 256 + ram(0x360) - 128;
    if (shifted < 0) shifted = 0;
    CycModRegs original = {0}, r; cyc_mod_regs(&original); r = original;
    Picture *f = &C.players[guest].building;
    memset(f, 0, sizeof *f); f->origin = (int16_t)(shifted - camera);
    uint8_t personal[PERSONAL], sounds[8], next_sound = 0;
    s_inside = 2;
    int ok = cyc_mod_isolate_begin();
    if (ok) {
        ok = isolated_hooks(1);
        poke(0xFC, shifted); poke(0xF9, shifted >> 8); poke(0x97, 4);
        for (int i = 0; i < 256; i += 4) poke(0x200 + i, 0xF8);
        if (ok) ok = cyc_mod_call(0xFF45, &r); /* apply this player's native CHR bank */
        for (int slot = 0; ok && slot < 16; slot++) if (ram(0x300 + slot) & 0x80) {
            r.x = (uint8_t)slot; poke(0x96, slot); ok = cyc_mod_call(0xF06B, &r);
        }
        if (ok) {
            int end = ram(0x97); if (!end) end = 256;
            f->count = (uint8_t)(end / 4); memcpy(f->oam, cyc_cpu_ram() + 0x200, sizeof f->oam);
            for (int i = 0; i < f->count; i++) {
                Part *p = &f->parts[i]; const uint8_t *oam = f->oam + i * 4;
                p->x = oam[3]; p->y = oam[0]; p->attr = oam[2]; p->height = ram(0xFF) & 0x20 ? 16 : 8;
                unsigned pattern = p->height == 16 ? (oam[1] & 1) * 0x1000 + (oam[1] & 0xFE) * 16 :
                    (ram(0xFF) & 8 ? 0x1000 : 0) + oam[1] * 16;
                for (int b = 0; b < p->height * 2; b++) p->pattern[b] = cyc_render_chr((uint16_t)(pattern + b));
                for (int c = 0; c < 4; c++) p->palette[c] = ram(0x630 + (p->attr & 3) * 4 + c) & 0x3F;
            }
            for (unsigned i = 0; i < s_count; i++) personal[i] = ram(s_address[i]);
            next_sound = ram(0xDA); memcpy(sounds, cyc_cpu_ram() + 0xDC, sizeof sounds);
        }
        isolated_hooks(0); cyc_mod_isolate_end();
    }
    if (ok) {
        memcpy(C.players[guest].ram, personal, s_count);
        unsigned producer = ram(0xDA) & 7;
        for (int i = 0; i < 8 && sounds[producer] != 0x88 && ram(0xDC + producer) == 0x88; i++) {
            if (sounds[producer] != 0xF2 || !alive(C.anchor)) sound(sounds[producer]);
            producer = (producer + 1) & 7;
            if (producer == next_sound) break;
        }
    } else { f->count = 0; C.failures++; }
    C.current = C.anchor; project(&C.players[C.anchor]); s_inside = 0; cyc_mod_set_regs(&original);
}
void mm3_coop_latch(void)
{
    if (!s_on) return;
    for (int i = 0; i < 2; i++) C.players[i].shown = C.players[i].building;
}
int mm3_coop_paint(uint32_t *out, int width, int origin, const uint8_t *opaque)
{
    if (!s_on || !C.initialized || ram(0xF8) == 1) return 0;
    int owner = C.current, guest = C.anchor ^ 1;
    Picture *f = &C.players[guest].shown;
    if (!f->count) return 0;
    C.current = (uint8_t)guest;
    uint64_t body = mm3_proto_private_mask(); int first = -1;
    for (int i = 0; i < 64; i++) if (body & (1ull << i)) { first = i; break; }
    int offset = origin + f->origin;
    for (int i = f->count - 1; i >= 0; i--) {
        if (body & (1ull << i)) {
            if (i == first) mm3_proto_paint_private(out, width, offset, opaque);
            continue;
        }
        if (mm3_charge_private_place(i, out, width, offset, opaque, f->oam) >= 0) continue;
        const Part *p = &f->parts[i];
        if (p->y >= 0xEF) continue;
        for (int sy = 0; sy < p->height; sy++) for (int sx = 0; sx < 8; sx++) {
            int y = p->y + 1 + sy, x = offset + p->x + sx;
            if (x < 0 || x >= width || y < 0 || y >= 240 || !(cyc_render_line_mask(y) & 0x10)) continue;
            if ((p->attr & 0x20) && opaque && opaque[y * width + x]) continue;
            int row = p->attr & 0x80 ? p->height - 1 - sy : sy, bit = p->attr & 0x40 ? sx : 7 - sx;
            int a = row / 8 * 16 + (row & 7);
            int c = ((p->pattern[a] >> bit) & 1) | (((p->pattern[a + 8] >> bit) & 1) << 1);
            if (c) out[y * width + x] = cyc_render_color_value(p->palette[c]);
        }
    }
    C.current = (uint8_t)owner;
    return 1;
}
int mm3_coop_present_begin(void) { int previous = C.current; if (s_on) C.current = C.anchor; return previous; }
void mm3_coop_present_end(int previous) { C.current = (uint8_t)previous; }
static void enabled(int on)
{
    s_on = on != 0;
    nes_mod_set_function_hook_enabled("mm3.coop.pool-end", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.enemy-done", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.death-music", s_on);
    cyc_mod_set_return_hook(s_on ? after_return : NULL);
    mm3_mods_refresh_hooks(); mm3_ws_refresh_policy();
    nes_mod_set_local_only("Mega Man 3 co-op development", s_on);
}
void mm3_coop_power_on(void) { memset(&C, 0, sizeof C); addresses(); enabled(s_on); }
bool mm3_coop_option(const char *name, const char *value)
{
    if (!strcmp(name, "--coop-test-poke")) {
        unsigned frame, seat, address, v; int n = 0; addresses();
        if (s_poke_count == 32 || sscanf(value, "%u:%u:%x:%x%n", &frame, &seat, &address, &v, &n) != 4 ||
            value[n] || seat < 1 || seat > 2 || address >= 2048 || !s_index[address] || v > 255) return false;
        s_pokes[s_poke_count].frame = frame; s_pokes[s_poke_count].seat = (uint8_t)(seat - 1);
        s_pokes[s_poke_count].address = (uint16_t)address; s_pokes[s_poke_count++].value = (uint8_t)v;
        return true;
    }
    if (!strcmp(name, "--coop-p1")) {
        if (strcmp(value, "megaman") && strcmp(value, "protoman")) return false;
        s_roster = !strcmp(value, "protoman"); return true;
    }
    if (strcmp(name, "--coop") || (strcmp(value, "on") && strcmp(value, "off"))) return false;
    if (!strcmp(value, "on")) mm3_proto_option("--protoman", "on");
    enabled(!strcmp(value, "on")); return true;
}
static int get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof C) return -1;
    memcpy(C.magic, "CP02", 4); C.enabled = s_on; C.roster = s_roster;
    memcpy(out, &C, sizeof C); return sizeof C;
}
static int valid(const uint8_t *in, int size)
{
    if (!size) return !s_on;
    Coop c; if (!in || size != (int)sizeof c) return 0; memcpy(&c, in, sizeof c);
    if (memcmp(c.magic, "CP02", 4) || c.enabled != s_on || c.roster != s_roster ||
        c.initialized > 1 || c.anchor > 1 || c.current > 1 || c.scope > 2 || c.scope_owner > 1 || c.ai > 1 || c.ai_owner > 1 || c.draw > 1 || c.draw_owner > 1) return 0;
    for (int seat = 0; seat < 2; seat++) {
        if (c.players[seat].building.count > PARTS || c.players[seat].shown.count > PARTS) return 0;
        const Picture *frames[] = {&c.players[seat].building, &c.players[seat].shown};
        for (int f = 0; f < 2; f++) for (int i = 0; i < frames[f]->count; i++) {
            const Part *p = &frames[f]->parts[i];
            if (p->height != 8 && p->height != 16) return 0;
            for (int color = 0; color < 4; color++) if (p->palette[color] > 63) return 0;
        }
    }
    return 1;
}
static int set(const uint8_t *in, int size)
{ if (!valid(in, size)) return 0; if (size) memcpy(&C, in, size); else memset(&C, 0, sizeof C); return 1; }
static void reset(void) { enabled(0); s_roster = 0; }
#ifdef CYC_WITH_SDL
static void tcp(int id, const char *line)
{
    (void)line; char b[512];
    snprintf(b, sizeof b, "\"enabled\":%s,\"initialized\":%u,\"anchor\":%u,\"seat\":%u,\"updates\":%llu,\"failures\":%llu,\"players\":[{\"x\":%d,\"y\":%d,\"hp\":%d},{\"x\":%d,\"y\":%d,\"hp\":%d}]",
        s_on ? "true" : "false", C.initialized, C.anchor, C.current, (unsigned long long)C.updates, (unsigned long long)C.failures,
        mm3_coop_read(0,0x360) + mm3_coop_read(0,0x380)*256,mm3_coop_read(0,0x3C0),mm3_coop_read(0,0xA2)&31,
        mm3_coop_read(1,0x360) + mm3_coop_read(1,0x380)*256,mm3_coop_read(1,0x3C0),mm3_coop_read(1,0xA2)&31);
    cyc_tcp_ok(id, b);
}
#endif
void mm3_coop_tcp_setup(void)
{
#ifdef CYC_WITH_SDL
    cyc_tcp_register("mm3_coop", "query native two-player simulation", tcp);
#endif
}
NES_MOD_CONSTRUCTOR(register_mm3_coop)
{
    nes_mod_register_function_entry_plugin("mm3.coop.pool-end", 0x8014, pool_boundary);
    nes_mod_register_function_entry_plugin("mm3.coop.enemy-done", 0x808B, enemy_done);
    nes_mod_register_function_entry_plugin("mm3.coop.death-music", 0xF89A, death_music);
    nes_mod_register_reset_callback(reset);
    nes_mod_register_savestate_hook("mm3.coop", get, set);
    nes_mod_register_savestate_validator("mm3.coop", valid);
}
