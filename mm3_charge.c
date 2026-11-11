/* MM4 charge constants/art/sound from a verified, runtime-only local donor.
 * Native MM3 actors retain movement, collision, enemy/boss deaths and cleanup. */
#include "mm3_charge.h"
#include "mm3_mods.h"
#include "mm3_proto.h"
#include "mm3_widescreen.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_mm4_audio.h"
#include "cyc_mm4_charge_data.h"
#include "cyc_mm4_donor.h"
#include "mod_function_hooks.h"
#include "mod_runtime.h"
#include "mod_savestate.h"
#ifdef CYC_WITH_SDL
#include "cyc_tcp.h"
#endif
#include <stdio.h>
#include <string.h>

enum { HALF_AT = 0x20, FULL_AT = 0x5C, LOOP_AT = 0x64, MAX_PARTS = 8 };
typedef CycMm4ChargeSprite Sprite;
typedef CycMm4ChargeAnimation Animation;
typedef struct { uint8_t kind, age, right, animation, frame, tick; } Shot;
typedef struct { uint64_t mask; int16_t x, y; uint8_t sprite, right, behind, charge; uint8_t oam[256]; } Picture;
typedef struct {
    char magic[4];
    uint8_t enabled, counter, pending, flashing, keep_slot, keep_flag, keep, reserved;
    uint64_t half, full, passed, destroyed, cancelled, refused;
    Shot shots[4];
    Picture building[4], shown[4];
} Charge;
static Charge C;
static int s_on, s_requested, s_sound = 1, s_flash_enabled = 1;
static char s_donor_path[2048];
static CycMm4ChargeData s_data;
#define s_sprites s_data.sprites
#define s_animations s_data.animations
#define s_speed s_data.speed
#define s_tiles s_data.tiles
#define s_flash s_data.flash
#define TILE_IDS cyc_mm4_charge_tile_ids
static const uint8_t s_normal[3] = {0x0F, 0x2C, 0x11}; /* native USA menu, bank02:A641 */
static uint8_t ram(unsigned a) { return cyc_cpu_ram()[a & 0x7FF]; }
static void poke(unsigned a, unsigned v) { cyc_mod_poke((uint16_t)a, (uint8_t)v); }
int mm3_charge_available(void) { return s_on; }
int mm3_charge_counter(void) { return s_on ? C.counter : 0; }
static int load_art(void) { return cyc_mm4_charge_data_load(&s_data); }
static void palette(int counter)
{
    if (!C.flashing && counter < HALF_AT) return;
    int index = ((counter >> 3) & 0xFC) | ((counter >> 1) & 3);
    for (int k = 0; k < 3; k++) {
        uint8_t c = counter >= HALF_AT && s_flash_enabled ? s_flash[k][index] : s_normal[k];
        poke(0x611 + k, c); poke(0x631 + k, c);
    }
    poke(0x18, 3); C.flashing = counter >= HALF_AT && s_flash_enabled;
}
void mm3_charge_cancel(void)
{
    if (!s_on) return;
    int activity = C.counter || C.pending || cyc_mm4_audio_owned_channels();
    if (C.counter || C.pending) C.cancelled++;
    C.counter = C.pending = 0;
    for (int slot = 1; slot <= 3; slot++) if (C.shots[slot].kind) {
        poke(0x300 + slot, 0); memset(&C.shots[slot], 0, sizeof C.shots[slot]); activity = 1;
    }
    if (activity) cyc_mm4_audio_reset();
    if (ram(0xA0)) C.flashing = 0; else palette(0);
}
static int full_alive(void)
{
    for (int i = 1; i <= 3; i++) if (C.shots[i].kind == 2 && (ram(0x300 + i) & 0x80) &&
        (ram(0x320 + i) == 1 || ram(0x320 + i) == 0x0F)) return 1;
    return 0;
}
static void fire(int counter)
{
    if (counter < HALF_AT) return;
    int live = 0, slot = 0;
    for (int i = 1; i <= 3; i++) {
        if (ram(0x300 + i) & 0x80) live++; else slot = i;
    }
    int y = mm3_proto_muzzle_y(-1);
    if (!slot || full_alive() || live >= mm3_proto_shot_limit() || ram(0x3E0) || y < 0 || y >= 240) { C.refused++; return; }
    uint8_t actor[24], animation[3], timer, parity;
    CycModRegs r; cyc_mod_regs(&r); r.x = 0;
    if (!cyc_mod_isolate_begin()) return;
    int ok = cyc_mod_call(0xD103, &r) && (r.p & 1) && r.y == slot;
    if (ok) {
        for (int f = 0; f < 24; f++) actor[f] = ram(0x300 + f * 32 + slot);
        animation[0] = ram(0x5A0); animation[1] = ram(0x5C0); animation[2] = ram(0x5E0);
        timer = ram(0x32); parity = ram(0x3B);
    }
    cyc_mod_isolate_end();
    if (!ok) { C.refused++; return; }
    for (int f = 0; f < 24; f++) poke(0x300 + f * 32 + slot, actor[f]);
    poke(0x5A0, animation[0]); poke(0x5C0, animation[1]); poke(0x5E0, animation[2]);
    poke(0x32, timer); poke(0x3B, parity);
    int right = (ram(0x31) & 1) != 0;
    int x = ram(0x380) * 256 + ram(0x360) + (right ? 16 : -15);
    poke(0x360 + slot, x); poke(0x380 + slot, x >> 8);
    poke(0x3C0 + slot, y);
    Shot *sh = &C.shots[slot]; memset(sh, 0, sizeof *sh);
    sh->kind = counter >= FULL_AT ? 2 : 1; sh->right = right; sh->animation = sh->kind == 2 ? 0 : 2;
    sh->age = sh->tick = 1;
    poke(0x420 + slot, sh->kind == 2 ? s_speed[0] : 4);
    poke(0x400 + slot, sh->kind == 2 ? 0 : 0x33);
    if (sh->kind == 2) C.full++; else C.half++;
    if (s_sound) cyc_mm4_audio_play(sh->kind == 2 ? 0x3D : 0x21);
}
void mm3_charge_dispatch(void)
{
    if (!s_on) return;
    int state = ram(0x30), held = ram(0x16) & 0x40;
    for (int i = 1; i <= 3; i++) {
        Shot *sh = &C.shots[i];
        if (!sh->kind) continue;
        /* Native armor changes Buster AI to its harmless ricochet routine. The
         * same live shot keeps MM4 art and the full-shot occupancy rule. */
        if (!(ram(0x300 + i) & 0x80) || (ram(0x320 + i) != 1 && ram(0x320 + i) != 0x0F)) {
            memset(sh, 0, sizeof *sh); continue;
        }
        if (sh->kind == 2 && !sh->animation) {
            int frame = sh->frame > 5 ? 5 : sh->frame;
            poke(0x420 + i, s_speed[frame]); poke(0x400 + i, 0);
            if (frame == 5) { sh->animation = 1; sh->frame = sh->tick = 0; }
        } else if (sh->kind == 1) { poke(0x420 + i, 4); poke(0x400 + i, 0x33); }
        Animation *a = &s_animations[sh->animation];
        if (sh->tick++ == a->duration) { sh->tick = 0; sh->frame = sh->frame == a->last ? 0 : sh->frame + 1; }
        if (sh->age < 255) sh->age++;
    }
    if (ram(0xA0) || !(ram(0xA2) & 31) || mm3_proto_teleporting() || state == 4 || state == 7 || state >= 0x0C) {
        mm3_charge_cancel(); return;
    }
    if (state > 3 && state != 5) return; /* hurt and scripted states freeze the charge */
    if (C.counter && held) {
        if (++C.counter >= LOOP_AT) C.counter = FULL_AT;
        palette(C.counter);
        if (s_sound && C.counter == 0x32) cyc_mm4_audio_play(0x22);
        if (s_sound && C.counter == FULL_AT && C.shots[0].tick == LOOP_AT - 1) cyc_mm4_audio_play(0x27);
    } else if (C.counter) {
        int counter = C.counter; C.counter = 0; palette(0);
        if (state == 2) C.pending = counter; else fire(counter);
    } else if ((ram(0x14) & 0x40) && state != 2) C.counter = 1;
    C.shots[0].tick = C.counter; /* previous counter for the donor's looping sound edge */
    if (C.pending && state != 2) { fire(C.pending); C.pending = 0; }
    if (full_alive()) poke(0x14, ram(0x14) & ~0x40u);
}

static int scale_damage(uint16_t address)
{
    (void)address;
    if (!s_on || ram(0xA0)) return 0;
    int slot = ram(0x10);
    if (slot < 1 || slot > 3 || C.shots[slot].kind != 2) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    int hp = ram(0x4E0 + r.x), ptr = ram(0) | ram(1) << 8;
    int damage = cyc_mod_peek((uint16_t)(ptr + r.y)) * 3;
    if (damage > 255) damage = 255;
    int result = hp - damage;
    r.a = (uint8_t)result;
    r.p = (uint8_t)((r.p & ~0xC3) | (result >= 0) | (!r.a ? 2 : 0) | (r.a & 0x80) |
        (((hp ^ damage) & (hp ^ r.a) & 0x80) ? 0x40 : 0));
    cyc_mod_set_regs(&r);
    C.keep = hp < damage; C.keep_slot = slot; C.keep_flag = ram(0x300 + slot);
    return 0;
}
static int preserve_killing_shot(uint16_t address)
{
    (void)address;
    int slot = ram(0x10);
    if (!s_on || ram(0xA0) || slot < 1 || slot > 3 || C.shots[slot].kind != 2) return 0;
    CycModRegs r; cyc_mod_regs(&r);
    if (C.keep && C.keep_slot == slot) { r.a = C.keep_flag; cyc_mod_set_regs(&r); C.passed++; }
    else C.destroyed++;
    C.keep = 0;
    return 0;
}

void mm3_charge_draw_begin(void) { memset(C.building, 0, sizeof C.building); }
void mm3_charge_draw_latch(void) { memcpy(C.shown, C.building, sizeof C.shown); }
void mm3_charge_pose_begin(void)
{
    int slot = ram(0x96);
    if (!s_on || slot < 1 || slot > 3 || !C.shots[slot].kind) return;
    Shot *sh = &C.shots[slot]; Picture *p = &C.building[slot];
    p->x = ram(0x13); p->y = ram(0x12); p->right = sh->right;
    p->behind = (ram(0x580 + slot) & 0x20) != 0;
    p->charge = C.counter;
    p->sprite = s_animations[sh->animation].sprite[sh->frame] - 0x31;
}
void mm3_charge_part_emitted(void)
{
    int slot = ram(0x96);
    if (!s_on || slot < 1 || slot > 3 || !C.shots[slot].kind) return;
    CycModRegs r; cyc_mod_regs(&r); C.building[slot].mask |= 1ull << (r.x / 4);
}
void mm3_charge_pose_done(void)
{
    int slot = ram(0x96);
    if (!s_on || slot < 1 || slot > 3 || !C.shots[slot].kind) return;
    Picture *p = &C.building[slot];
    for (int i = 0; i < 64; i++) if (p->mask & (1ull << i)) memcpy(p->oam + i * 4, cyc_cpu_ram() + 0x200 + i * 4, 4);
}
static int picture_ready(const Picture *p)
{
    if (!p->mask || p->sprite >= 7) return 0;
    for (int i = 0; i < 64; i++) if (p->mask & (1ull << i))
        if (memcmp(p->oam + i * 4, cyc_render_oam() + i * 4, 4)) return 0;
    return 1;
}
int mm3_charge_draw_ready(void)
{
    if (!s_on) return 0;
    for (int i = 1; i <= 3; i++) if (picture_ready(&C.shown[i])) return 1;
    return 0;
}
int mm3_charge_place(int oam_slot, uint32_t *out)
{
    if (!s_on) return -1;
    for (int slot = 1; slot <= 3; slot++) {
        Picture *p = &C.shown[slot];
        if (!(p->mask & (1ull << oam_slot)) || !picture_ready(p)) continue;
        for (int i = 0; i < oam_slot; i++) if (p->mask & (1ull << i)) return 0;
        Sprite *s = &s_sprites[p->sprite];
        for (int part = 0; part < s->count; part++) {
            int tile = 0; while (tile < 6 && TILE_IDS[tile] != s->tile[part]) tile++;
            if (tile == 6) continue;
            unsigned attr = s->attr[part] ^ (p->right ? 0x40 : 0);
            for (int sy = 0; sy < 8; sy++) for (int sx = 0; sx < 8; sx++) {
                int row = attr & 0x80 ? 7 - sy : sy, bit = attr & 0x40 ? sx : 7 - sx;
                int index = ((s_tiles[tile][row] >> bit) & 1) | (((s_tiles[tile][row + 8] >> bit) & 1) << 1);
                if (!index) continue;
                int x = p->x + s->x[p->right][part] + sx, y = p->y + 1 + s->y[p->right][part] + sy;
                if (x < 0 || x >= 256 || y < 0 || y >= 240) continue;
                if (!(cyc_render_line_mask(y) & 0x10) || (x < 8 && !(cyc_render_line_mask(y) & 4))) continue;
                if ((p->behind || (attr & 0x20)) && cyc_frame_bg_opaque()[y * 256 + x]) continue;
                uint8_t color = s_data.palette[attr & 1][index];
                if (!(attr & 1) && p->charge >= HALF_AT && s_flash_enabled) {
                    int phase = ((p->charge >> 3) & 0xFC) | ((p->charge >> 1) & 3);
                    color = s_flash[index - 1][phase];
                }
                out[y * 256 + x] = cyc_render_color_value(color);
            }
        }
        return 0;
    }
    return -1;
}
static int set_enabled(int requested, const char *path)
{
    s_requested = requested;
    if (requested) {
        char why[160];
        if (!cyc_mm4_donor_load(path, why, sizeof why) || !load_art()) {
            fprintf(stderr, "[Mods] Charged Mega Buster: %s\n", why[0] ? why : "unexpected charge data"); return 0;
        }
    }
    s_on = requested; cyc_mm4_audio_configure(s_on && s_sound, 1); cyc_mm4_audio_reset();
    nes_mod_set_function_hook_enabled("mm3.charge.damage", s_on);
    nes_mod_set_function_hook_enabled("mm3.charge.pierce", s_on);
    mm3_mods_refresh_hooks(); mm3_proto_refresh_hooks(); mm3_ws_refresh_policy();
    nes_mod_set_local_only("Mega Man 3 charged Mega Buster", s_on);
    return 1;
}
void mm3_charge_power_on(void) { memset(&C, 0, sizeof C); if (s_requested) set_enabled(1, s_donor_path[0] ? s_donor_path : nes_mod_external_rom_path("mega-man-3-usa.backport.mm4", "charge", "mm4-usa")); }
void mm3_charge_frame_end(void) { if (s_on) cyc_mm4_audio_frame_end(); }
void mm3_charge_audio_mix(int16_t *out, size_t n) { if (s_on) cyc_mm4_audio_mix(out, n); }
bool mm3_charge_option(const char *name, const char *value)
{
    if (!strcmp(name, "--mm4-donor")) { if (strlen(value) >= sizeof s_donor_path) return false; strcpy(s_donor_path, value); return !s_requested || set_enabled(1, value); }
    if (strcmp(name, "--charge")) return false;
    if (strcmp(value, "on") && strcmp(value, "off")) return false;
    s_requested = !strcmp(value, "on");
    if (!s_requested) return set_enabled(0, NULL);
    if (!s_donor_path[0]) return true;
    return set_enabled(1, s_donor_path);
}
static void reset(void) { set_enabled(0, NULL); s_donor_path[0] = 0; s_sound = s_flash_enabled = 1; }
static void activate(void)
{
    s_sound = nes_mod_get_option_int("mega-man-3-usa.backport.mm4", "charge", "sound", 1);
    s_flash_enabled = nes_mod_get_option_int("mega-man-3-usa.backport.mm4", "charge", "flash", 1);
    set_enabled(1, nes_mod_external_rom_path("mega-man-3-usa.backport.mm4", "charge", "mm4-usa"));
}
static int state_get(uint8_t *out, int capacity)
{
    if (capacity < (int)sizeof C) return -1;
    memcpy(C.magic, "MC01", 4); C.enabled = s_on;
    memcpy(out, &C, sizeof C); return sizeof C;
}
static int state_valid(const uint8_t *in, int n)
{
    if (!n) return !s_on;
    Charge next; if (!in || n != sizeof next) return 0; memcpy(&next, in, n);
    if (memcmp(next.magic, "MC01", 4) || next.enabled != s_on || next.counter >= LOOP_AT || next.pending >= LOOP_AT || next.flashing > 1 || next.keep > 1 || next.keep_slot > 3) return 0;
    for (int i = 1; i <= 3; i++) {
        const Shot *sh = &next.shots[i];
        if (sh->kind > 2 || sh->right > 1 || sh->animation > 2 ||
            (sh->kind && sh->frame > s_animations[sh->animation].last) ||
            next.building[i].sprite >= 7 || next.shown[i].sprite >= 7 ||
            next.building[i].right > 1 || next.shown[i].right > 1 ||
            next.building[i].behind > 1 || next.shown[i].behind > 1 ||
            next.building[i].charge >= LOOP_AT || next.shown[i].charge >= LOOP_AT) return 0;
    }
    return 1;
}
static int state_set(const uint8_t *in, int n) { if (!state_valid(in, n)) return 0; if (n) memcpy(&C, in, n); else memset(&C, 0, sizeof C); return 1; }
#ifdef CYC_WITH_SDL
static void tcp(int id, const char *line)
{
    (void)line; char b[256];
    snprintf(b, sizeof b, "\"enabled\":%s,\"counter\":%u,\"pending\":%u,\"half\":%llu,\"full\":%llu,\"pass\":%llu,\"destroyed\":%llu,\"refused\":%llu,\"shots\":[%u,%u,%u]", s_on ? "true" : "false", C.counter, C.pending, (unsigned long long)C.half, (unsigned long long)C.full, (unsigned long long)C.passed, (unsigned long long)C.destroyed, (unsigned long long)C.refused, C.shots[1].kind, C.shots[2].kind, C.shots[3].kind);
    cyc_tcp_ok(id, b);
}
#endif
void mm3_charge_tcp_setup(void) {
#ifdef CYC_WITH_SDL
    cyc_tcp_register("mm3_charge", "query native charged Buster state", tcp);
#endif
}
NES_MOD_CONSTRUCTOR(register_mm3_charge)
{
    nes_mod_register_function_entry_plugin("mm3.charge.damage", 0x81C9, scale_damage);
    nes_mod_register_function_entry_plugin("mm3.charge.pierce", 0x8239, preserve_killing_shot);
    nes_mod_register_reset_callback(reset);
    nes_mod_register_activation_plugin("mega-man-3-usa.backport.charge", activate);
    nes_mod_register_savestate_hook("mm3.charge", state_get, state_set);
    nes_mod_register_savestate_validator("mm3.charge", state_valid);
    nes_mod_register_savestate_hook("mm3.charge-audio", cyc_mm4_audio_state_get, cyc_mm4_audio_state_set);
    nes_mod_register_savestate_validator("mm3.charge-audio", cyc_mm4_audio_state_valid);
}
