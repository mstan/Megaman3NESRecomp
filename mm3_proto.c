/* Playable character state; native actors, physics and animation remain authoritative. */
#include "mm3_proto.h"
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
    uint8_t pose, right, behind, weapon, replace, clip;
    uint8_t oam[256];
} BodyFrame;
typedef struct {
    char magic[4];
    uint8_t enabled, real, selected, teleport, invincible, reserved[3];
    uint16_t reflected;
    uint64_t blocks, reflections, doubled, limited;
    BodyFrame building, shown;
} ProtoState;
static ProtoState S;
static CycProtoAtlas s_atlas;
static int s_on, s_real = 1, s_start = 1, s_loaded;

static uint8_t ram(unsigned a) { return cyc_cpu_ram()[a & 0x7FF]; }
static void poke(unsigned a, unsigned v) { cyc_mod_poke((uint16_t)a, (uint8_t)v); }
int mm3_proto_available(void) { return s_on; }
int mm3_proto_selected(void) { return s_on && S.selected; }
int mm3_proto_teleporting(void) { return s_on && S.teleport; }

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
    static const char *ids[] = {"mm3.proto.pose", "mm3.proto.part", "mm3.proto.pose-done", "mm3.proto.damage",
        "mm3.proto.shots", "mm3.proto.shield", "mm3.proto.reflected-hit"};
    for (unsigned i = 0; i < sizeof ids / sizeof ids[0]; i++) nes_mod_set_function_hook_enabled(ids[i], s_on);
    mm3_mods_refresh_hooks(); mm3_ws_refresh_policy();
    nes_mod_set_local_only("Mega Man 3 Proto Man", s_on);
}

void mm3_proto_power_on(void)
{
    memset(&S, 0, sizeof S);
    S.selected = s_on && s_start;
    set_enabled(s_on);
}

int mm3_proto_dispatch(void)
{
    if (!s_on) return 0;
    int state = ram(0x30);
    /* Native slide geometry must clear before changing the body's presentation. */
    if (!S.teleport && (ram(0x14) & 0x20) && (ram(0xA2) & 31) &&
        !ram(0x50) && !ram(0x3D) && ram(0xF8) != 1 && (state == 0 || state == 1 || state == 3 || state == 5)) {
        S.teleport = 1; S.invincible = ram(0x39);
        poke(0x32, 0); poke(0xB5, 0); sound(0x34);
    }
    if (!S.teleport) return 0;
    poke(0x39, 2);
    return 1;
}

void mm3_proto_frame_end(void)
{
    for (int slot = 1; slot < 16; slot++)
        if (!(ram(0x300 + slot) & 0x80) || ram(0x320 + slot) != 1)
            S.reflected &= (uint16_t)~(1u << slot);
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

void mm3_proto_draw_begin(void) { memset(&S.building, 0, sizeof S.building); }
void mm3_proto_draw_latch(void)
{
    S.shown = S.building;
    /* Menus also DMA OAM, without running the stage's entity drawing pass. */
    for (int slot = 0; slot < 64; slot++) if (S.shown.mask & (1ull << slot))
        if (memcmp(S.shown.oam + slot * 4, cyc_cpu_ram() + 0x200 + slot * 4, 4)) {
            S.shown.mask = 0; break;
        }
}

static int pose_begin(uint16_t address)
{
    (void)address;
    if (!s_on || ram(0x96) != 0) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    BodyFrame *f = &S.building;
    int pose = body_pose(r.a);
    f->replace = (S.selected || S.teleport) && pose >= 0;
    f->pose = (uint8_t)(pose < 0 ? 0 : pose);
    f->x = ram(0x13); f->y = ram(0x12);
    f->right = (ram(0x31) & 1) != 0;
    if (ram(0x30) == 3 && !ram(0x32)) f->right = ram(0x5A0) & 1;
    f->behind = (ram(0x580) & 0x20) != 0;
    f->weapon = ram(0xA0);
    f->clip = ram(0x22) == 8 && (ram(0xF9) == 0x15 || ram(0xF9) == 0x1A) ? 0xB0 : 240;
    if (S.teleport) f->y -= (S.teleport <= 16 ? S.teleport - 1 : 32 - S.teleport) * 16;
    return 0;
}

static int part_emitted(uint16_t address)
{
    (void)address;
    if (!s_on || ram(0x96) != 0 || !S.building.replace) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    S.building.mask |= 1ull << (r.x / 4);
    return 0;
}

static int pose_done(uint16_t address)
{
    (void)address;
    if (!s_on || ram(0x96) != 0) return 0;
    for (int slot = 0; slot < 64; slot++) if (S.building.mask & (1ull << slot))
        memcpy(S.building.oam + slot * 4, cyc_cpu_ram() + 0x200 + slot * 4, 4);
    return 0;
}

typedef struct { uint32_t *out; int anchor; } Paint;
static uint32_t color(uint32_t c, int weapon)
{
    if (weapon) {
        unsigned r = c >> 16 & 255, g = c >> 8 & 255, b = c & 255;
        if (!(c & 0xFFFFFFu)) return cyc_render_color(17);
        if (r == g && g == b && r > 32 && r < 240) return cyc_render_color(18);
        if (r > 64 && r > g + b) return cyc_render_color(19);
    }
    return c;
}

static int place(int slot, int x, int y, int *out_x, void *context)
{
    (void)y;
    Paint *paint = (Paint *)context;
    BodyFrame *f = &S.shown;
    *out_x = x;
    if (!(f->mask & (1ull << slot))) return 1;
    if (slot != paint->anchor) return 0;
    const CycProtoPose *p = &s_atlas.poses[f->pose];
    const uint8_t *opaque = cyc_frame_bg_opaque();
    for (int sy = 0; sy < p->height; sy++) for (int sx = 0; sx < p->width; sx++) {
        int index = p->pixels[sy * 32 + sx];
        if (!index) continue;
        int dx = f->x + (f->right ? p->origin_x - sx - 1 : sx - p->origin_x);
        int dy = f->y + p->top_y + sy;
        if (dx < 0 || dx >= 256 || dy < 0 || dy >= f->clip) continue;
        if (!(cyc_render_line_mask(dy) & 0x10) || (dx < 8 && !(cyc_render_line_mask(dy) & 4))) continue;
        if (f->behind && opaque[dy * 256 + dx]) continue;
        paint->out[dy * 256 + dx] = color(s_atlas.colors[index - 1], f->weapon);
    }
    return 0;
}

int mm3_proto_native_picture(uint32_t *out)
{
    BodyFrame *f = &S.shown;
    if (!s_on || !s_loaded || !f->replace || !f->mask) return 0;
    const uint8_t *oam = cyc_render_oam();
    int first = 64;
    for (int slot = 0; slot < 64; slot++) if (f->mask & (1ull << slot)) {
        if (memcmp(f->oam + slot * 4, oam + slot * 4, 4)) return 0;
        if (slot < first) first = slot;
    }
    if (!cyc_render_background(out)) return 0;
    Paint paint = {out, first};
    cyc_render_sprites(out, 256, 240, 0, cyc_frame_bg_opaque(), place, &paint);
    return 1;
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
        count += (ram(0x300 + slot) & 0x80) && ram(0x320 + slot) == 1 && !(S.reflected & (1u << slot));
    if (count < 2) return 0;
    S.limited++; return 1;
}

static int shield(uint16_t address)
{
    (void)address;
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
    (void)address;
    if (!s_on || !S.reflected) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    int enemy = r.x;
    if (enemy < 16 || enemy >= 32) return 0;
    /* Retail collision visits slots 1..3. Project each extra reflected shot
     * through that exact native path, with its own Buster damage identity.
     * Commit only the target, that shot and native sound requests; never the
     * temporary player, bank, stack, camera or other personal weapon slots. */
    for (int shot = 14; shot <= 15; shot++) if (S.reflected & (1u << shot)) {
        uint8_t actor[24], projectile[24], audio[9];
        if (!cyc_mod_isolate_begin()) continue;
        for (int field = 0; field < 24; field++) poke(0x303 + field * 32, ram(0x300 + field * 32 + shot));
        poke(0x301, 0); poke(0x302, 0); poke(0xA0, 0);
        if (ram(0x5C0) == 0xA3) poke(0x5C0, 1);
        CycModRegs call = r;
        int ok = cyc_mod_call(0x8102, &call);
        if (ok) {
            for (int field = 0; field < 24; field++) {
                actor[field] = ram(0x300 + field * 32 + enemy);
                projectile[field] = ram(0x303 + field * 32);
            }
            audio[0] = ram(0xDA);
            for (int i = 0; i < 8; i++) audio[i + 1] = ram(0xDC + i);
        }
        cyc_mod_isolate_end();
        if (!ok) continue;
        for (int field = 0; field < 24; field++) {
            poke(0x300 + field * 32 + enemy, actor[field]);
            poke(0x300 + field * 32 + shot, projectile[field]);
        }
        poke(0xDA, audio[0]);
        for (int i = 0; i < 8; i++) poke(0xDC + i, audio[i + 1]);
    }
    return 0;
}

static int state_get(uint8_t *out, int cap)
{
    if (cap < sizeof S) return -1;
    memcpy(S.magic, "MP01", 4); S.enabled = (uint8_t)s_on; S.real = (uint8_t)s_real;
    memcpy(out, &S, sizeof S); return sizeof S;
}
static int state_valid(const uint8_t *in, int len)
{
    if (!len) return !s_on;
    ProtoState next;
    if (!in || len != sizeof next) return 0;
    memcpy(&next, in, sizeof next);
    return !memcmp(next.magic, "MP01", 4) && next.enabled == s_on && next.real == s_real &&
        next.selected <= 1 && next.teleport <= 32 && next.shown.pose < CYC_PROTO_POSE_COUNT &&
        next.building.pose < CYC_PROTO_POSE_COUNT && next.shown.right <= 1 && next.building.right <= 1;
}
static int state_set(const uint8_t *in, int len)
{
    if (!state_valid(in, len)) return 0;
    if (len) memcpy(&S, in, sizeof S); else memset(&S, 0, sizeof S);
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
    nes_mod_register_function_entry_plugin("mm3.proto.shield", 0x8097, shield);
    nes_mod_register_function_entry_plugin("mm3.proto.reflected-hit", 0x8102, reflected_hit);
    nes_mod_register_reset_callback(reset);
    nes_mod_register_activation_plugin("mega-man-3-usa.character.protoman", activate);
    nes_mod_register_savestate_hook("mm3.protoman", state_get, state_set);
    nes_mod_register_savestate_validator("mm3.protoman", state_valid);
}
