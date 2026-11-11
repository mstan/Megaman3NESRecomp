/* Playable character state; native actors, physics and animation remain authoritative. */
#include "mm3_proto.h"
#include "mm3_charge.h"
#include "mm3_coop.h"
#include "mm3_mods.h"
#include "mm3_widescreen.h"
#include "mm3_proto_sheet.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_protoman_atlas.h"
#include "mod_function_hooks.h"
#include "mod_runtime.h"
#include "mod_savestate.h"
#ifdef CYC_WITH_SDL
#include "cyc_tcp.h"
#endif
#include <stdio.h>
#include <string.h>

typedef struct {
    uint64_t mask;
    int16_t x, y;
    uint8_t pose, right, behind, weapon, replace, clip, charge;
    uint8_t oam[256];
} BodyFrame;
typedef struct {
    char magic[4];
    uint8_t enabled, real, selected, teleport, invincible, reserved[3];
    uint16_t reflected;
    uint64_t blocks, reflections, doubled, limited;
    BodyFrame building, shown;
} ProtoState;
static ProtoState s_states[2];
#define S s_states[mm3_coop_seat()]
typedef struct {
    char magic[4];
    uint8_t enabled, running, active, shot, weapon, animation, state, boss;
    uint16_t remaining;
    CycModRegs original;
    uint8_t weapons[3][24], scratch[16];
} Reflection;
static Reflection s_reflections[2];
#define R s_reflections[mm3_coop_seat()]
typedef struct { uint8_t mask, selected, weapon; int16_t y; uint8_t oam[16]; } MenuFrame;
typedef struct { char magic[4]; uint8_t enabled; MenuFrame building, shown; } MenuState;
static MenuState s_menus[2];
#define M s_menus[mm3_coop_seat()]
static CycProtoAtlas s_atlas;
static int s_on, s_real = 1, s_start = 1, s_loaded;

static uint8_t ram(unsigned a) { return cyc_cpu_ram()[a & 0x7FF]; }
static void poke(unsigned a, unsigned v) { cyc_mod_poke((uint16_t)a, (uint8_t)v); }
int mm3_proto_available(void) { return s_on; }
int mm3_proto_selected(void) { return s_on && (mm3_coop_enabled() ? mm3_coop_character(mm3_coop_seat()) : S.selected); }
int mm3_proto_teleporting(void) { return s_on && S.teleport; }
int mm3_proto_reflecting(void) { return s_on && R.active; }
int mm3_proto_shot_limit(void) { return mm3_proto_selected() && s_real ? 2 : 3; }
int mm3_proto_muzzle_y(int native_offset)
{
    int offset = native_offset;
    int weapon = ram(0xA0);
    if (mm3_proto_selected() && (!weapon || weapon == 7 || weapon == 9 || weapon == 11)) {
        int state = ram(0x30);
        offset = state == 1 ? -5 : state == 3 ? -4 : 3;
        if (!state && ram(0x5C0) >= 4 && ram(0x5C0) <= 6 && (ram(0x5A0) & 1)) offset = 2;
    }
    return ram(0x3C0) + offset;
}

static void sound(unsigned id)
{
    int next = ram(0xDA) & 7;
    if (ram(0xDC + next) == 0x88) {
        poke(0xDC + next, id); poke(0xDA, (next + 1) & 7);
    }
}

static int shield_up(void)
{
    return mm3_proto_selected() && s_real && !S.teleport && ram(0x30) == 1 && !ram(0x32);
}

void mm3_proto_refresh_hooks(void)
{
    static const char *ids[] = {"mm3.proto.pose", "mm3.proto.part", "mm3.proto.pose-done", "mm3.proto.damage",
        "mm3.proto.shots", "mm3.proto.shield", "mm3.proto.reflected-hit", "mm3.proto.menu-begin", "mm3.proto.menu-part",
        "mm3.proto.muzzle"};
    for (unsigned i = 0; i < sizeof ids / sizeof ids[0]; i++)
        nes_mod_set_function_hook_enabled(ids[i], s_on || (i < 3 && mm3_charge_available()));
}
static void set_enabled(int enabled)
{
    if (enabled && !s_loaded) {
        char why[160];
        if (!cyc_protoman_atlas_load(&s_atlas, MM3_PROTO_PNG, sizeof MM3_PROTO_PNG,
                MM3_PROTO_JUMP_PNG, sizeof MM3_PROTO_JUMP_PNG, why, sizeof why)) {
            fprintf(stderr, "[Mods] Proto Man: %s\n", why); return;
        }
        s_loaded = 1;
    }
    s_on = enabled != 0;
    mm3_proto_refresh_hooks();
    mm3_mods_refresh_hooks(); mm3_ws_refresh_policy();
    nes_mod_set_local_only("Mega Man 3 Proto Man", s_on);
}

void mm3_proto_power_on(void)
{
    memset(s_states, 0, sizeof s_states);
    memset(s_reflections, 0, sizeof s_reflections);
    memset(s_menus, 0, sizeof s_menus);
    S.selected = s_on && s_start;
    set_enabled(s_on);
}

static int cancel_slide_if_clear(void)
{
    CycModRegs r; cyc_mod_regs(&r); r.x = 0; r.y = 1;
    if (!cyc_mod_isolate_begin()) return 0;
    /* Use the exact standing-height test and exit routine used by native slide. */
    int ok = cyc_mod_call(0xE8D6, &r) && !(ram(0x10) & 0x10);
    uint8_t player[24], state = 0, timer = 0;
    if (ok) {
        r.x = 0;
        ok = cyc_mod_call(0xD455, &r);
        if (ok) {
            for (int field = 0; field < 24; field++) player[field] = ram(0x300 + field * 32);
            state = ram(0x30); timer = ram(0x33);
        }
    }
    cyc_mod_isolate_end();
    if (ok) {
        for (int field = 0; field < 24; field++) poke(0x300 + field * 32, player[field]);
        poke(0x30, state); poke(0x33, timer);
    }
    return ok;
}

int mm3_proto_dispatch(void)
{
    if (!s_on) return 0;
    int state = ram(0x30);
    /* Select expires under a low ceiling; an open slide uses its native exit. */
    if (!mm3_coop_enabled() && !S.teleport && (ram(0x14) & 0x20) && (ram(0xA2) & 31) &&
        !ram(0x50) && !ram(0x3D) && ram(0xF8) != 1 &&
        (state <= 3 || state == 5) && (state != 2 || cancel_slide_if_clear())) {
        S.teleport = 1; S.invincible = ram(0x39);
        poke(0x32, 0); poke(0xB5, 0); sound(0x34);
    }
    if (!S.teleport) return 0;
    poke(0x39, 2);
    return 1;
}

void mm3_proto_frame_end(void)
{
    for (int seat = 0; seat < (mm3_coop_enabled() ? 2 : 1); seat++) for (int slot = 1; slot < 16; slot++) {
        int active = mm3_coop_read(seat, 0x300 + slot), ai = mm3_coop_read(seat, 0x320 + slot);
        if (!(active & 0x80) || (ai != 1 && ai != 0x0F)) s_states[seat].reflected &= (uint16_t)~(1u << slot);
    }
    if (!s_on || !S.teleport) return;
    if (S.teleport == 16) { S.selected ^= 1; sound(0x34); }
    if (++S.teleport > 32) { S.teleport = 0; poke(0x39, S.invincible); }
}

static int body_pose(int native_definition)
{
    int state = ram(0x30), animation = ram(0x5C0), firing = ram(0x32) != 0;
    int throwing = firing && ram(0xA0) == 0x0A;
    if (S.teleport) return CYC_PROTO_TELEPORT;
    if (state == 0x0E || state == 0x07) return -1; /* retain native death effects */
    if (state == 6) return native_definition == 0x0D ? -1 : CYC_PROTO_HURT;
    if (state == 2) return CYC_PROTO_SLIDE;
    if (state == 4 || state == 0x0D || state == 0x11 || state == 0x12 || state == 0x13) {
        if (native_definition == 0x13) return CYC_PROTO_TELEPORT_PARTIAL;
        if (native_definition == 0x14) return CYC_PROTO_TELEPORT_FULL;
        return CYC_PROTO_TELEPORT;
    }
    if (state == 3) {
        if (firing) return throwing ? CYC_PROTO_LADDER_FIRE1 : CYC_PROTO_LADDER_FIRE0;
        return CYC_PROTO_LADDER0;
    }
    if (animation >= 0x14 && animation <= 0x16) return CYC_PROTO_LADDER_TOP0;
    if (state == 1 || state == 0x0A)
        return firing ? (throwing ? CYC_PROTO_THROW_JUMP : CYC_PROTO_JUMP_FIRE) :
            shield_up() ? CYC_PROTO_JUMP_GUARD : CYC_PROTO_JUMP_OPEN;
    if (animation >= 0x0D && animation <= 0x0F)
        return throwing ? CYC_PROTO_THROW_IDLE : firing ? CYC_PROTO_FIRE_IDLE0 :
            CYC_PROTO_STEP0 + ((ram(0x95) >> 3) & 1);
    if (animation >= 4 && animation <= 6) {
        static const uint8_t phases[] = {0, 1, 2, 1};
        return (throwing ? CYC_PROTO_THROW_RUN0 : firing ? CYC_PROTO_FIRE_RUN0 : CYC_PROTO_RUN0) +
            phases[ram(0x5A0) & 3];
    }
    return throwing ? CYC_PROTO_THROW_IDLE : firing ? CYC_PROTO_FIRE_IDLE0 :
        CYC_PROTO_IDLE0 + ((ram(0x95) >> 3) & 3);
}

void mm3_proto_draw_begin(void) { for (int i = 0; i < 2; i++) memset(&s_states[i].building, 0, sizeof S.building); mm3_charge_draw_begin(); }
void mm3_proto_draw_latch(void)
{
    mm3_charge_draw_latch();
    for (int i = 0; i < 2; i++) { s_menus[i].shown = s_menus[i].building; s_states[i].shown = s_states[i].building; }
    /* Menus also DMA OAM, without running the stage's entity drawing pass. */
    for (int slot = 0; slot < 64; slot++) if (S.shown.mask & (1ull << slot))
        if (memcmp(S.shown.oam + slot * 4, cyc_cpu_ram() + 0x200 + slot * 4, 4)) {
            S.shown.mask = 0; break;
        }
}

static int pose_begin(uint16_t address)
{
    (void)address;
    mm3_charge_pose_begin();
    if (!s_on || ram(0x96) != 0) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    BodyFrame *f = &S.building;
    int pose = body_pose(r.a);
    f->replace = (mm3_proto_selected() || S.teleport) && pose >= 0;
    f->pose = (uint8_t)(pose < 0 ? 0 : pose);
    f->x = ram(0x13); f->y = ram(0x12);
    f->right = (ram(0x31) & 1) != 0;
    if (ram(0x30) == 3 && !ram(0x32)) f->right = ram(0x5A0) & 1;
    f->behind = (ram(0x580) & 0x20) != 0;
    f->weapon = ram(0xA0);
    f->charge = (uint8_t)mm3_charge_counter();
    f->clip = ram(0x22) == 8 && (ram(0xF9) == 0x15 || ram(0xF9) == 0x1A) ? 0xB0 : 240;
    if (S.teleport) f->y -= (S.teleport <= 16 ? S.teleport - 1 : 32 - S.teleport) * 16;
    return 0;
}

static int part_emitted(uint16_t address)
{
    (void)address;
    mm3_coop_primary_part();
    mm3_charge_part_emitted();
    if (!s_on || ram(0x96) != 0 || !S.building.replace) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    S.building.mask |= 1ull << (r.x / 4);
    return 0;
}

static int pose_done(uint16_t address)
{
    (void)address;
    mm3_coop_primary_done();
    mm3_charge_pose_done();
    if (!s_on || ram(0x96) != 0) return 0;
    for (int slot = 0; slot < 64; slot++) if (S.building.mask & (1ull << slot))
        memcpy(S.building.oam + slot * 4, cyc_cpu_ram() + 0x200 + slot * 4, 4);
    return 0;
}

typedef struct { uint32_t *out; int anchor; } Paint;
static uint32_t personal_color(int entry)
{ return mm3_coop_enabled() ? cyc_render_color_value((uint8_t)mm3_coop_read(mm3_coop_seat(), 0x630 + entry - 16)) : cyc_render_color(entry); }
static uint32_t color(uint32_t c, int weapon, int charge)
{
    if (weapon) {
        unsigned r = c >> 16 & 255, g = c >> 8 & 255, b = c & 255;
        if (!(c & 0xFFFFFFu)) return personal_color(17);
        if (r == g && g == b && r > 32 && r < 240) return personal_color(18);
        if (r > 64 && r > g + b) return personal_color(19);
    }
    if (!weapon && charge >= 32) {
        static const uint8_t full_phase[] = {0, 1, 2, 1};
        int phase = charge >= 92 ? full_phase[(charge >> 1) & 3] : (charge >> 1) & 1;
        unsigned r = c >> 16 & 255, g = c >> 8 & 255, b = c & 255;
        if (!(c & 0xFFFFFFu)) {
            if (phase == 1) c = cyc_render_color_value(0x04);
            else if (phase == 2) c = cyc_render_color_value(0x18);
        } else if (phase == 2) {
            if (r > 64 && r > g + b) c = cyc_render_color_value(0x28);
            else if (r == g && g == b && r > 32 && r < 240) c = cyc_render_color_value(0x39);
        }
    }
    return c;
}
void mm3_proto_paint_portrait(uint32_t *out, int width, int left, int top, int weapon)
{
    if (!s_on || !s_loaded) return;
    for (int y = 0; y < 16; y++) for (int x = 0; x < 16; x++) {
        uint32_t c = s_atlas.portrait[y * 16 + x];
        int dx = left + x, dy = top + y;
        if (c && dx >= 0 && dx < width && dy >= 0 && dy < 240) out[dy * width + dx] = color(c, weapon, 0);
    }
}

static int menu_begin(uint16_t address)
{
    (void)address;
    memset(&M.building, 0, sizeof M.building);
    M.building.selected = (uint8_t)mm3_proto_selected();
    M.building.weapon = ram(0xA0);
    M.building.y = (int16_t)(ram(0x51) + 9); /* native head OAM Y=8+menu scroll, physical Y+1 */
    return 0;
}
static int menu_part(uint16_t address)
{
    (void)address;
    if (!M.building.selected || ram(0xB4)) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    if (r.x > 12 || (r.x & 3)) return 0; /* keep the native E-Tank sprites */
    static const uint8_t attrs[] = {2, 0x42, 1, 0x41};
    int slot = r.x / 4, y = ram(0x51) + (slot < 2 ? 8 : 16);
    if (y >= 240) return 0;
    const uint8_t expected[] = {(uint8_t)y, slot < 2 ? 0xF3 : 0xF4, attrs[slot], (uint8_t)(0xD0 + (slot & 1) * 8)};
    if (memcmp(cyc_cpu_ram() + 0x200 + r.x, expected, 4)) return 0;
    M.building.mask |= (uint8_t)(1u << slot);
    memcpy(M.building.oam + r.x, expected, 4);
    return 0;
}
static int menu_ready(void)
{
    if (!s_on || !s_loaded || ram(0xF8) != 1 || !M.shown.selected || !M.shown.mask) return 0;
    for (int i = 0; i < 4; i++) if (M.shown.mask & (1u << i))
        if (memcmp(M.shown.oam + i * 4, cyc_render_oam() + i * 4, 4)) return 0;
    return 1;
}
static int menu_place(int slot, uint32_t *out)
{
    if (slot >= 4 || !(M.shown.mask & (1u << slot)) || !menu_ready()) return -1;
    for (int i = 0; i < slot; i++) if (M.shown.mask & (1u << i)) return 0;
    for (int y = 0; y < 16; y++) for (int x = 0; x < 16; x++) {
        uint32_t c = s_atlas.portrait[y * 16 + x];
        int py = M.shown.y + y;
        if (!c || py < 0 || py >= 240 || !(cyc_render_line_mask(py) & 0x10)) continue;
        out[py * 256 + 0xD0 + x] = color(c, M.shown.weapon, 0);
    }
    return 0;
}

uint64_t mm3_proto_private_mask(void)
{ return s_on && s_loaded && S.shown.replace ? S.shown.mask : 0; }
void mm3_proto_paint_private(uint32_t *out, int width, int origin, const uint8_t *opaque)
{
    BodyFrame *f = &S.shown;
    if (!mm3_proto_private_mask()) return;
    const CycProtoPose *p = &s_atlas.poses[f->pose];
    for (int sy = 0; sy < p->height; sy++) for (int sx = 0; sx < p->width; sx++) {
        int index = p->pixels[sy * 32 + sx];
        if (!index) continue;
        int dx = origin + f->x + (f->right ? p->origin_x - sx - 1 : sx - p->origin_x);
        int dy = f->y + 1 + p->top_y + sy;
        if (dx < 0 || dx >= width || dy < 0 || dy >= f->clip) continue;
        if (!(cyc_render_line_mask(dy) & 0x10) || (dx < 8 && !(cyc_render_line_mask(dy) & 4))) continue;
        if (f->behind && opaque && opaque[dy * width + dx]) continue;
        out[dy * width + dx] = color(s_atlas.colors[index - 1], f->weapon, f->charge);
    }
}
static int place(int slot, int x, int y, int *out_x, void *context)
{
    (void)y;
    Paint *paint = (Paint *)context;
    *out_x = x;
    int charge = mm3_charge_place(slot, paint->out);
    if (charge >= 0) return charge;
    int portrait = menu_place(slot, paint->out);
    if (portrait >= 0) return portrait;
    if (paint->anchor < 0 || !(S.shown.mask & (1ull << slot))) return 1;
    if (slot == paint->anchor) mm3_proto_paint_private(paint->out, 256, 0, cyc_frame_bg_opaque());
    return 0;
}

int mm3_proto_native_picture(uint32_t *out)
{
    BodyFrame *f = &S.shown;
    int proto = s_on && s_loaded && ram(0xF8) != 1 && f->replace && f->mask;
    int charge = mm3_charge_draw_ready();
    int menu = menu_ready();
    if (!proto && !charge && !menu) return 0;
    const uint8_t *oam = cyc_render_oam();
    int first = 64;
    for (int slot = 0; proto && slot < 64; slot++) if (f->mask & (1ull << slot)) {
        if (memcmp(f->oam + slot * 4, oam + slot * 4, 4)) { proto = 0; break; }
        if (slot < first) first = slot;
    }
    if (!cyc_render_background(out)) return 0;
    Paint paint = {out, proto ? first : -1};
    cyc_render_sprites(out, 256, 240, 0, cyc_frame_bg_opaque(), place, &paint);
    return 1;
}
uint64_t mm3_proto_picture_mask(void)
{
    BodyFrame *f = &S.shown;
    if (!s_on || !s_loaded || ram(0xF8) == 1 || !f->replace) return 0;
    const uint8_t *oam = cyc_render_oam();
    for (int slot = 0; slot < 64; slot++) if ((f->mask & (1ull << slot)) && memcmp(f->oam+slot*4,oam+slot*4,4)) return 0;
    return f->mask;
}
int mm3_proto_place_sprite(int slot, uint64_t body, uint32_t *out, int width, int origin, const uint8_t *opaque)
{
    int charge = mm3_charge_private_place(slot,out,width,origin,opaque,cyc_render_oam());
    if (charge >= 0) return charge;
    if (!(body & (1ull << slot))) return 1;
    if (!(body & ((1ull << slot)-1))) mm3_proto_paint_private(out,width,origin,opaque);
    return 0;
}

static int damage(uint16_t address)
{
    (void)address;
    if (!mm3_proto_selected() || !s_real) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    int hp = ram(0xA2) & 31, amount = cyc_mod_peek((uint16_t)(0xA000 + r.y)) * 2;
    if (amount > 255) amount = 255;
    int result = hp - amount;
    r.a = (uint8_t)result;
    r.p = (uint8_t)((r.p & ~0xC3) | (result >= 0) | (!r.a ? 2 : 0) | (r.a & 0x80) |
        (((hp ^ amount) & (hp ^ r.a) & 0x80) ? 0x40 : 0));
    cyc_mod_set_regs(&r); S.doubled++;
    return 0;
}

static int shot_limit(uint16_t address)
{
    (void)address;
    int weapon = ram(0xA0);
    if (!mm3_proto_selected() || !s_real || (weapon && weapon != 7 && weapon != 9 && weapon != 11)) return 0;
    int count = 0;
    for (int slot = 1; slot < 16; slot++)
        count += (ram(0x300 + slot) & 0x80) &&
            (ram(0x320 + slot) == 1 || (ram(0x320 + slot) == 0x0F && ram(0x5C0 + slot) == 0x18)) &&
            !(S.reflected & (1u << slot));
    if (count < 2) return 0;
    CycModRegs r; cyc_mod_regs(&r); r.y = 0; r.p &= (uint8_t)~1u; cyc_mod_set_regs(&r);
    S.limited++; return 1;
}

static int muzzle(uint16_t address)
{
    (void)address;
    int weapon = ram(0xA0), state = ram(0x30);
    if (!mm3_proto_selected() || (weapon && weapon != 7 && weapon != 9 && weapon != 11) ||
        (state != 0 && state != 1 && state != 3 && state != 5)) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    if (r.y < 1 || r.y > 3) return 0;
    /* The native initializer has just copied X and Y; only the cannon anchor
     * changes. Physics, facing, sound, animation and shot bookkeeping follow. */
    int y = mm3_proto_muzzle_y(0);
    if (ram(0x3E0) || y < 0 || y >= 240) poke(0x300 + r.y, ram(0x300 + r.y) & ~0x80u);
    else poke(0x3C0 + r.y, y);
    int x = ram(0x360 + r.y) + ram(0x380 + r.y) * 256 + 1;
    poke(0x360 + r.y, x); poke(0x380 + r.y, x >> 8);
    return 0;
}

static int shield(uint16_t address)
{
    (void)address;
    mm3_coop_contact();
    if (!shield_up()) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    int slot = r.x, routine = ram(0x320 + slot);
    if (slot < 16 || slot >= 32) return 0;
    int snakey_bullet = routine == 0x8F && ram(0x5C0 + slot) == 0x73;
    if (!snakey_bullet && routine != 0x0F && routine != 0x36 && routine != 0x43 && routine != 0x0C) return 0;
    int shape = ram(0x480 + slot) & 31;
    /* These are combined player/attack collision extents, not attack-only radii. */
    if (cyc_mod_peek((uint16_t)(0xFB3B + shape)) > 20 || cyc_mod_peek((uint16_t)(0xFB5B + shape)) > 16) return 0;
    int dx = (ram(0x380 + slot) * 256 + ram(0x360 + slot)) - (ram(0x380) * 256 + ram(0x360));
    int dy = (int)ram(0x3C0 + slot) - ram(0x3C0);
    int front = (ram(0x31) & 1) ? dx : -dx;
    if (dy < -20 || dy > 4 || front < 6 || front > 22) return 0;
    int target;
    for (target = 14; target <= 15; target++) if (!(ram(0x300 + target) & 0x80)) break;
    if (target <= 15 && cyc_mod_isolate_begin()) {
        uint8_t record[24];
        poke(0xA0, 0);
        CycModRegs call = r; call.y = (uint8_t)target;
        int ok = cyc_mod_call(0xD135, &call);
        if (ok) for (int field = 0; field < 24; field++) record[field] = cyc_mod_peek((uint16_t)(0x300 + field * 32 + target));
        cyc_mod_isolate_end();
        if (ok) {
            for (int field = 0; field < 24; field++) poke(0x300 + field * 32 + target, record[field]);
            poke(0x360 + target, ram(0x360 + slot)); poke(0x380 + target, ram(0x380 + slot));
            poke(0x3C0 + target, ram(0x3C0 + slot)); poke(0x3E0 + target, ram(0x3E0 + slot));
            S.reflected |= (uint16_t)(1u << target); S.reflections++;
        }
    }
    poke(0x300 + slot, 0); sound(0x19); S.blocks++;
    return 1;
}

static int reflected_hit(uint16_t address)
{
    CycModRegs r = {0}; cyc_mod_regs(&r);
    /* A reflected native call must finish before the enclosing co-op hit
     * scope restores its owner or starts another guest pass. */
    if (!(R.running && r.s == R.original.s)) mm3_coop_weapon_hit();
    cyc_mod_regs(&r);
    if (!s_on || cyc_mod_isolated()) return 0;
    if (R.running) {
        if (r.s != R.original.s) return 0;
        if (R.active) {
            int killed_boss = R.boss && !(ram(0x4E0+R.original.x) & 31);
            if (!killed_boss) for (int field = 0; field < 24; field++)
                poke(0x300 + field*32 + R.shot,ram(0x303 + field*32));
            for (int slot = 1; slot <= 3; slot++) for (int field = 0; field < 24; field++)
                poke(0x300 + field*32 + slot,R.weapons[slot-1][field]);
            if (killed_boss) {
                /* The native death owns all explosions and the refight's
                 * unique actors14/15. Do not resurrect cleared weapons. */
                for (int slot = 1; slot <= 3; slot++) poke(0x300+slot,0);
                if (ram(0x22) != 0x0F) { poke(0x30E,0); poke(0x30F,0); }
                S.reflected = R.remaining = 0;
            }
            poke(0xA0,R.weapon);
            if (ram(0x30) == R.state) poke(0x5C0,R.animation);
            for (unsigned i = 0; i < sizeof R.scratch; i++) poke(i,R.scratch[i]);
            cyc_mod_set_regs(&R.original); r = R.original; R.active = 0;
        }
        if (!R.remaining) { R.running = 0; return 0; }
    } else {
        if (!S.reflected || r.x < 16 || r.x >= 32 || r.s < 2) return 0;
        R.original = r; R.running = 1; R.remaining = S.reflected & 0xC000;
        R.weapon = ram(0xA0); R.animation = ram(0x5C0); R.state = ram(0x30);
        R.boss = (ram(0x300+r.x) & 0x40) != 0 && (ram(0x4E0+r.x) & 31) != 0;
        memcpy(R.scratch,cyc_cpu_ram(),sizeof R.scratch);
        for (int slot = 1; slot <= 3; slot++) for (int field = 0; field < 24; field++)
            R.weapons[slot-1][field] = ram(0x300 + field*32 + slot);
    }
    int shot;
    for (shot = 14; shot <= 15; shot++) if (R.remaining & (1u<<shot)) break;
    if (shot > 15) { R.running = 0; return 0; }
    R.remaining &= (uint16_t)~(1u<<shot); R.shot = (uint8_t)shot; R.active = 1;
    for (int field = 0; field < 24; field++) poke(0x303+field*32,ram(0x300+field*32+shot));
    poke(0x301,0); poke(0x302,0); poke(0xA0,0);
    if (ram(0x5C0) == 0xA3) poke(0x5C0,1);
    unsigned ret = address-1;
    poke(0x100+r.s,ret>>8); r.s--; poke(0x100+r.s,ret); r.s--;
    cyc_mod_set_regs(&r);
    return 0;
}

static int reflection_get(uint8_t *out, int cap)
{
    int count = mm3_coop_enabled() ? 2 : 1, size = count*(int)sizeof R;
    if (cap < size) return -1;
    for (int i = 0; i < count; i++) { memcpy(s_reflections[i].magic,"MR01",4); s_reflections[i].enabled = (uint8_t)s_on; }
    memcpy(out,s_reflections,size); return size;
}
static int reflection_valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    int count = mm3_coop_enabled() ? 2 : 1;
    if (!in || size != count*(int)sizeof R) return 0;
    for (int i = 0; i < count; i++) {
        Reflection n; memcpy(&n,in+i*sizeof n,sizeof n);
        if (memcmp(n.magic,"MR01",4) || n.enabled != s_on || n.running > 1 || n.active > 1 || n.boss > 1 ||
            (n.remaining & ~0xC000u) || (n.active && (!n.running || n.shot < 14 || n.shot > 15)) ||
            (n.running && (n.original.s < 2 || n.original.x < 16 || n.original.x >= 32 || n.weapon >= 12))) return 0;
    }
    return 1;
}
static int reflection_set(const uint8_t *in, int size)
{ if (!reflection_valid(in,size)) return 0; if (size) memcpy(s_reflections,in,size); else memset(s_reflections,0,sizeof s_reflections); return 1; }

static int state_get(uint8_t *out, int cap)
{
    int count = mm3_coop_enabled() ? 2 : 1, size = count * (int)sizeof S;
    if (cap < size) return -1;
    for (int i = 0; i < count; i++) { memcpy(s_states[i].magic, "MP02", 4); s_states[i].enabled = (uint8_t)s_on; s_states[i].real = (uint8_t)s_real; }
    memcpy(out, s_states, size); return size;
}
static int state_valid_one(const uint8_t *in, int len)
{
    if (!len) return !s_on;
    ProtoState next;
    if (!in || len != sizeof next) return 0;
    memcpy(&next, in, sizeof next);
    return !memcmp(next.magic, "MP02", 4) && next.enabled == s_on && next.real == s_real &&
        next.selected <= 1 && next.teleport <= 32 && next.shown.pose < CYC_PROTO_POSE_COUNT &&
        next.building.pose < CYC_PROTO_POSE_COUNT && next.shown.right <= 1 && next.building.right <= 1 &&
        next.building.behind <= 1 && next.shown.behind <= 1 && next.building.replace <= 1 && next.shown.replace <= 1 &&
        next.building.clip <= 240 && next.shown.clip <= 240 && next.building.charge < 100 && next.shown.charge < 100;
}
static int state_valid(const uint8_t *in, int len)
{
    if (!len) return !s_on;
    int count = mm3_coop_enabled() ? 2 : 1;
    if (!in || len != count * (int)sizeof S) return 0;
    for (int i = 0; i < count; i++) if (!state_valid_one(in + i * sizeof S, sizeof S)) return 0;
    return 1;
}
static int state_set(const uint8_t *in, int len)
{
    if (!state_valid(in, len)) return 0;
    if (len) memcpy(s_states, in, len); else memset(s_states, 0, sizeof s_states);
    return 1;
}
static int menu_state_get(uint8_t *out, int capacity)
{
    int count = mm3_coop_enabled() ? 2 : 1, size = count * (int)sizeof M;
    if (capacity < size) return -1;
    for (int i = 0; i < count; i++) { memcpy(s_menus[i].magic, "MM01", 4); s_menus[i].enabled = (uint8_t)s_on; }
    memcpy(out, s_menus, size); return size;
}
static int menu_valid_one(const uint8_t *in, int size)
{
    if (!size) return !s_on;
    MenuState next; if (!in || size != (int)sizeof next) return 0;
    memcpy(&next, in, sizeof next);
    return !memcmp(next.magic, "MM01", 4) && next.enabled == s_on &&
        !(next.building.mask & 0xF0) && !(next.shown.mask & 0xF0) && next.building.selected <= 1 && next.shown.selected <= 1 &&
        next.building.weapon < 12 && next.shown.weapon < 12;
}
static int menu_state_valid(const uint8_t *in, int size)
{
    if (!size) return !s_on;
    int count = mm3_coop_enabled() ? 2 : 1;
    if (!in || size != count * (int)sizeof M) return 0;
    for (int i = 0; i < count; i++) if (!menu_valid_one(in + i * sizeof M, sizeof M)) return 0;
    return 1;
}
static int menu_state_set(const uint8_t *in, int size)
{
    if (!menu_state_valid(in, size)) return 0;
    if (size) memcpy(s_menus, in, size); else memset(s_menus, 0, sizeof s_menus);
    return 1;
}
static void reset(void) { set_enabled(0); s_real = s_start = 1; }
static void activate(void)
{
    const char *package = "mega-man-3-usa.character.protoman";
    char value[16];
    s_real = !nes_mod_option_value(package, "protoman", "mode", value, sizeof value) || strcmp(value, "megaman");
    s_start = !nes_mod_option_value(package, "protoman", "start", value, sizeof value) || strcmp(value, "megaman");
    set_enabled(1);
}
bool mm3_proto_option(const char *name, const char *value)
{
    if (!strcmp(name, "--protoman")) {
        if (strcmp(value, "on") && strcmp(value, "off")) return false;
        set_enabled(!strcmp(value, "on")); return true;
    }
    if (!strcmp(name, "--proto-mode") || !strcmp(name, "--proto-start")) {
        if (strcmp(value, "megaman") && strcmp(value, "protoman")) return false;
        if (!strcmp(name, "--proto-mode")) s_real = !strcmp(value, "protoman");
        else s_start = !strcmp(value, "protoman");
        return true;
    }
    return false;
}
#ifdef CYC_WITH_SDL
static void tcp_proto(int id, const char *line)
{
    (void)line; char fields[256];
    snprintf(fields, sizeof fields,
        "\"enabled\":%s,\"selected\":%u,\"real_traits\":%s,\"teleport\":%u,\"pose\":%u,\"blocks\":%llu,\"reflected\":%llu,\"doubled\":%llu,\"limited\":%llu",
        s_on ? "true" : "false", S.selected, s_real ? "true" : "false", S.teleport, S.shown.pose,
        (unsigned long long)S.blocks, (unsigned long long)S.reflections,
        (unsigned long long)S.doubled, (unsigned long long)S.limited);
    cyc_tcp_ok(id, fields);
}
#endif
void mm3_proto_tcp_setup(void)
{
#ifdef CYC_WITH_SDL
    cyc_tcp_register("mm3_proto", "query character state and counters", tcp_proto);
#endif
}
NES_MOD_CONSTRUCTOR(register_mm3_proto)
{
    nes_mod_register_function_entry_plugin("mm3.proto.pose", 0xF1E4, pose_begin);
    nes_mod_register_function_entry_plugin("mm3.proto.part", 0xF279, part_emitted);
    nes_mod_register_function_entry_plugin("mm3.proto.pose-done", 0xF28F, pose_done);
    nes_mod_register_function_entry_plugin("mm3.proto.damage", 0x80DD, damage);
    nes_mod_register_function_entry_plugin("mm3.proto.shots", 0xD103, shot_limit);
    nes_mod_register_function_entry_plugin("mm3.proto.muzzle", 0xD17B, muzzle);
    nes_mod_register_function_entry_plugin("mm3.proto.shield", 0x8097, shield);
    nes_mod_register_function_entry_plugin("mm3.proto.reflected-hit", 0x8102, reflected_hit);
    nes_mod_register_function_entry_plugin("mm3.proto.menu-begin", 0xA30C, menu_begin);
    nes_mod_register_function_entry_plugin("mm3.proto.menu-part", 0xA341, menu_part);
    nes_mod_register_reset_callback(reset);
    nes_mod_register_activation_plugin("mega-man-3-usa.character.protoman", activate);
    nes_mod_register_savestate_hook("mm3.protoman", state_get, state_set);
    nes_mod_register_savestate_validator("mm3.protoman", state_valid);
    nes_mod_register_savestate_hook("mm3.proto-menu", menu_state_get, menu_state_set);
    nes_mod_register_savestate_validator("mm3.proto-menu", menu_state_valid);
    nes_mod_register_savestate_hook("mm3.reflection",reflection_get,reflection_set);
    nes_mod_register_savestate_validator("mm3.reflection",reflection_valid);
}
