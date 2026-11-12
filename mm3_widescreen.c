/*
 * mm3_widescreen.c - Mega Man 3 at 16:9 (and wider).
 *
 * The machine still draws 256x240; this compositor paints the wider picture.
 * MM3 streams only one tile column ahead of the camera into a single 32-column
 * nametable ring, so the margins cannot come from VRAM. They are decoded from
 * the stage's ROM tables instead, the same data the game's column streamer
 * ($E4F1) reads:
 *
 *   stage bank $22       $AA00[screen] layout id, $AA40[segment] scroll segments
 *   metatile bank        $C8B9[$22]: $AF00 + id*64 8x8 grid of 32x32 metatiles,
 *                        $B700 32x32 -> four 16x16, $BB00-$BE00 16x16 -> tiles,
 *                        $BF00 low bits palette
 *
 * Both banks are copied once per stage by running the ROM's own bank switch
 * ($FF6B) in an isolated call. Screens are numbered linearly; $AA40[k] gives
 * segment k's screen count (bits 0-4, +1) and whether it scrolls horizontally
 * (bit 5), so the margins stop at scroll locks (stage ends, boss doors,
 * vertical shafts) instead of showing screens the camera never reaches.
 *
 * Every picture is checked against what the PPU really showed: the decoded
 * tiles must match the nametable under the visible native area, which also
 * rejects menus, stage select, boss intros and anything else not drawn from
 * level data - those stay 4:3 (pillarboxed). The native picture stays
 * authoritative for its own 256 columns (sprites, live tile changes).
 */
#include "mm3_widescreen.h"
#include "mm3_proto.h"
#include "mm3_charge.h"
#include "mm3_coop.h"
#include "mm3_coop_menu.h"

#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_video.h"
#include "mod_function_hooks.h"
#include "mod_savestate.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STAGE_COUNT 23           /* entries of the metatile bank table $C8B9 */
#define MAX_SEGMENTS 64
#define MATCH_PERCENT 80
#define SEAM 248                 /* native columns from here: background from the level */

static int s_mode = NES_VIDEO_FIT;

/* Stage tables. */
static uint8_t s_stage_bank[0x2000], s_tile_bank[0x2000];   /* $A000-$BFFF */
static int s_stage = -1;
static int s_seg_count, s_seg_start[MAX_SEGMENTS], s_seg_len[MAX_SEGMENTS];
static bool s_seg_horizontal[MAX_SEGMENTS];

/* Last picture. */
static uint8_t s_opaque[CYC_VIDEO_MAX_WIDTH * 240];   /* background coverage of the canvas */
static bool s_win_valid;          /* native simulation geometry, independent of picture presentation */
static int s_view_left, s_cam, s_play_x0, s_screens[2], s_match, s_samples;
static unsigned long s_composed, s_fallback;
static const char *s_reason = "not composed";

/* Developer check (mm3_ws {check:true}): decoded vs captured background. */
static bool s_check;
static long s_check_bad = -1, s_check_total;
static int s_check_x, s_check_y;
static uint32_t s_check_want, s_check_got;
static uint32_t s_bg[256 * 240];
static uint32_t s_sprites[256 * 240];

static uint8_t ram(uint16_t a) { return cyc_cpu_ram()[a & 0x7FF]; }

/* ---- stage data ---- */

static bool copy_bank(uint8_t bank, uint8_t *out)
{
    CycModRegs r;
    cyc_mod_regs(&r);
    cyc_mod_poke(0xF5, bank);
    cyc_mod_poke(0xF7, 0);       /* no queued sound pass at the end of $FF6B */
    if (!cyc_mod_call(0xFF6B, &r)) return false;
    for (int i = 0; i < 0x2000; i++) out[i] = cyc_mod_peek((uint16_t)(0xA000 + i));
    return true;
}

static void load_segments(void)
{
    int start = 0;
    s_seg_count = 0;
    for (int k = 0; k < MAX_SEGMENTS && start < 256; k++) {
        uint8_t v = s_stage_bank[0x0A40 + k];
        s_seg_start[k] = start;
        s_seg_len[k] = (v & 31) + 1;
        s_seg_horizontal[k] = (v & 0x20) != 0;
        start += s_seg_len[k];
        s_seg_count = k + 1;
    }
}

static void ensure_stage(void)
{
    int stage = ram(0x22);
    if (stage == s_stage || stage >= STAGE_COUNT) return;
    uint8_t tiles = cyc_mod_peek((uint16_t)(0xC8B9 + stage));
    if (!cyc_mod_isolate_begin()) return;
    bool ok = copy_bank((uint8_t)stage, s_stage_bank) && copy_bank(tiles, s_tile_bank);
    cyc_mod_isolate_end();
    if (!ok) return;
    s_stage = stage;
    s_win_valid = false;
    load_segments();
}

/* The world x range [*left, *right) the camera can show around screen s. */
static void screen_range(int s, int *left, int *right)
{
    *left = s * 256; *right = *left + 256;
    for (int k = 0; k < s_seg_count; k++) {
        if (s < s_seg_start[k] || s >= s_seg_start[k] + s_seg_len[k]) continue;
        if (s_seg_horizontal[k]) {
            *left = s_seg_start[k] * 256;
            *right = (s_seg_start[k] + s_seg_len[k]) * 256;
        }
        return;
    }
}

/* The segment(s) the native view at cam spans: one, or two while a door
 * scroll carries the camera from one segment into the next. */
static void view_range(int cam, int *left, int *right)
{
    screen_range(cam >> 8, left, right);
    if (cam & 255) {
        int l2, r2;
        screen_range((cam >> 8) + 1, &l2, &r2);
        if (l2 < *left) *left = l2;
        if (r2 > *right) *right = r2;
    }
}
int mm3_ws_room_limits(int *left, int *right)
{
    if (!left || !right || s_stage != ram(0x22)) return 0;
    view_range(ram(0xF9)*256+ram(0xFC),left,right);
    return *right-*left >= 256;
}

/* Background tile and palette at world tile column wc, tile row r (0-29). */
static void level_tile(int wc, int r, uint8_t *tile, uint8_t *palette)
{
    int screen = (wc >> 5) & 0xFF, c = wc & 31;
    const uint8_t *m = s_tile_bank;
    uint8_t layout = s_stage_bank[0x0A00 + screen];
    uint8_t m32 = m[0x0F00 + layout * 64 + (r >> 2) * 8 + (c >> 2)];
    uint8_t m16 = m[0x1700 + m32 * 4 + ((r >> 1) & 1) * 2 + ((c >> 1) & 1)];
    *tile = m[(r & 1 ? 0x1D00 : 0x1B00) + (c & 1) * 0x100 + m16];
    *palette = m[0x1F00 + m16] & 3;
}

/* ---- objects beyond the native view ----
 *
 * MM3 keeps an object only while it is inside the 256 px screen: the
 * per-object draw ($F06B) deletes a world object whose X minus the camera
 * leaves 0-255 (a few flagged ones get 72 px), and the spawner ($9C00) adds
 * stage enemies exactly at the screen edges. OAM X is 8 bits, so nothing the
 * PPU draws can be outside the native picture either.
 *
 * spawn_edges ($9C11, after the spawner computed its edges into $00-$03)
 * moves those edges out to the picture's visible window. object_draw ($F06B)
 * keeps a world object that is outside the native view but inside that
 * window: it runs the game's own draw for it in an isolated call with the
 * camera moved so the object sits mid-screen, keeps the sprites it wrote
 * (drawn into the margins by the compositor) and copies back only the
 * object's own state the routine advances (animation counters; deletion when
 * its animation ends), then returns as the routine's RTS would. */

#define OBJECT_PAD 16                 /* object centre this far past the window still lives */
#define MAX_WIDE_SPRITES 256
#define SLOT_ARRAYS 24                /* per-object arrays $0300, $0320, ... $05E0 */

/* Sprites of one object-draw pass ($F034 bumps $95, then draws every slot).
 * A pass's OAM reaches the screen at the next NMI that does its OAM DMA (the
 * NMI skips it while the main loop is still busy: a slowdown frame), so
 * capture into one buffer and show the one latched at that NMI - swapping
 * per video frame showed an empty buffer on slowdown frames and margin
 * enemies blinked out while still able to hurt. */
typedef struct { int16_t x; uint8_t y, tile, attr, after, after_body, reserved; } WideSprite;
static WideSprite s_wide[2][MAX_WIDE_SPRITES];
static int s_wide_n[2], s_wide_cur, s_wide_shown = 1;
static int s_win_left, s_win_right;   /* logical simulation view, clipped to native room segments */
typedef struct {
    char magic[4]; uint8_t count, reserved[3];
    int32_t left[2], right[2];
    uint64_t spawned, full, failed;
    uint8_t seen[256];
} ViewRects;
static ViewRects s_rects;
typedef struct {
    uint8_t x,y,tile,attr,pattern[16],palette[4];
} PanelHud;
typedef struct {
    uint8_t active,native_scene,stage,hud_count[2],reserved[3];
    int16_t left[2],camera;
    uint8_t tiles[2][30][33],palettes[2][30][33];
    uint64_t hud_mask;
    uint8_t oam[256];
    PanelHud hud[2][21];
} PanelFrame;
static PanelFrame s_panel_build,s_panel_frame;
static uint32_t s_panel_picture[2][256*240];
static uint8_t s_panel_opaque[256*240];
static void panels_build(void);
static unsigned long s_kept, s_spawn_widened;
static int s_restored;
typedef struct {
    char magic[4];
    int16_t count[2];
    uint8_t current, shown, valid, reserved;
    int32_t left, right;
    WideSprite sprites[2][MAX_WIDE_SPRITES];
} WideState;
static int wide_get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof(WideState)) return -1;
    WideState n = {0}; memcpy(n.magic,"MW03",4);
    for (int i = 0; i < 2; i++) n.count[i] = (int16_t)s_wide_n[i];
    n.current = (uint8_t)s_wide_cur; n.shown = (uint8_t)s_wide_shown; n.valid = s_win_valid;
    n.left = s_win_left; n.right = s_win_right; memcpy(n.sprites,s_wide,sizeof s_wide);
    memcpy(out,&n,sizeof n); return sizeof n;
}
static int wide_valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    WideState n; if (!in || size != (int)sizeof n) return 0; memcpy(&n,in,size);
    if (memcmp(n.magic,"MW03",4) || n.current > 1 || n.shown > 1 || n.valid > 1 || n.reserved ||
        n.left < 0 || n.right > 65536 || n.right < n.left || (n.valid && n.right == n.left)) return 0;
    for (int f = 0; f < 2; f++) {
        if (n.count[f] < 0 || n.count[f] > MAX_WIDE_SPRITES) return 0;
        for (int i = 0; i < n.count[f]; i++) if (n.sprites[f][i].after > 63 || n.sprites[f][i].after_body > 1 || n.sprites[f][i].reserved) return 0;
    }
    return 1;
}
static int wide_set(const uint8_t *in, int size)
{
    if (!wide_valid(in,size)) return 0;
    s_restored = size != 0;
    if (!size) { memset(s_wide,0,sizeof s_wide); s_wide_n[0] = s_wide_n[1] = 0; s_win_valid = false; return 1; }
    WideState n; memcpy(&n,in,size); memcpy(s_wide,n.sprites,sizeof s_wide);
    for (int i = 0; i < 2; i++) s_wide_n[i] = n.count[i];
    s_wide_cur = n.current; s_wide_shown = n.shown; s_win_valid = n.valid != 0;
    s_win_left = n.left; s_win_right = n.right; return 1;
}

static const char *const HOOK_SPAWN = "mm3.widescreen.spawn-edges";
static const char *const HOOK_DRAW = "mm3.widescreen.object-draw";
static const char *const HOOK_NMI = "mm3.widescreen.nmi";
static const char *const HOOK_PASS = "mm3.widescreen.draw-pass";
static const char *const HOOK_SPAWN_FILTER = "mm3.widescreen.spawn-filter";
static void simulation_window(void);

/* The draw-all routine ($F034) starts a pass: capture into the buffer that is
 * not on screen. Its counter $95 is not a reliable pass key - other routines
 * store to it, a repeated value kept the buffer and moving margin sprites
 * left trails - so the pass is the routine's own entry. */
static int begin_pass(uint16_t addr)
{
    (void)addr;
    if (s_wide_cur == s_wide_shown) s_wide_cur ^= 1;
    s_wide_n[s_wide_cur] = 0;
    mm3_coop_before_draw();
    simulation_window();
    mm3_coop_picture_begin();
    mm3_proto_draw_begin();
    mm3_coop_draw();
    panels_build();
    return 0;
}

/* NMI ($C000): the OAM DMA happens unless the update flags are busy
 * (C015-C019); then the pass just captured is what the screen shows. */
static int nmi_latch(uint16_t addr)
{
    (void)addr;
    if (ram(0xEE) | ram(0x9A)) return 0;
    s_wide_shown = s_wide_cur;
    s_panel_frame = s_panel_build;
    memcpy(s_panel_frame.oam,cyc_cpu_ram()+0x200,sizeof s_panel_frame.oam);
    /* This hook precedes the actual DMA: choose its captured owner directly.
     * The physical-OAM fingerprint is only valid after the native copy. */
    int owner = mm3_coop_latch();
    int previous = mm3_coop_present_player(owner);
    mm3_proto_draw_latch();
    mm3_coop_present_end(previous);
    return 0;
}

static void simulation_window(void)
{
    s_win_valid = false; s_rects.count = 0;
    int independent = mm3_coop_independent();
    int width = cyc_video_width();
    if ((mm3_coop_enabled() && !mm3_coop_scene_active()) ||
        (!independent && (s_mode == NES_VIDEO_STOCK || width <= 256 || width > CYC_VIDEO_MAX_WIDTH)) || ram(0x22) >= STAGE_COUNT) return;
    ensure_stage();
    if (s_stage != ram(0x22)) return;
    int views[2];
    if (independent && mm3_coop_view_rects(views)) {
        s_rects.count = 2;
        for (int i = 0; i < 2; i++) { s_rects.left[i] = views[i]; s_rects.right[i] = views[i]+256; }
        s_win_left = views[0] < views[1] ? views[0] : views[1];
        s_win_right = views[0] > views[1] ? views[0]+256 : views[1]+256;
        s_win_valid = true; return;
    }
    if (independent) return;
    int camera = ram(0xF9)*256 + ram(0xFC), left, right;
    view_range(camera,&left,&right);
    int view = camera - (width-256)/2;
    s_win_left = left > view ? left : view;
    s_win_right = right < view+width ? right : view+width;
    s_win_valid = s_win_left < s_win_right;
    if (s_win_valid) { s_rects.count = 1; s_rects.left[0] = s_win_left; s_rects.right[0] = s_win_right; }
}
static int in_views(int x, int radius)
{
    for (int i = 0; i < s_rects.count; i++) if (x+radius >= s_rects.left[i] && x-radius < s_rects.right[i]) return 1;
    return 0;
}
static int spawn_filter(uint16_t address)
{
    (void)address;
    if (!mm3_coop_independent() || !mm3_coop_scene_active() || !s_win_valid || s_stage != ram(0x22) || cyc_mod_isolated()) return 0;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    int x = s_stage_bank[0xB00+r.y]*256+s_stage_bank[0xC00+r.y];
    return !in_views(x,24) || s_rects.seen[r.y];
}
static void independent_spawns(void)
{
    /* Native cursors keep their original rectangle. Revisit the complete
     * authored list so a skipped gap entry can enter either view later. */
    for (int id = 0; id < 256; id++) {
        int page = s_stage_bank[0xB00+id]; if (page == 0xFF) break;
        int x = page*256+s_stage_bank[0xC00+id], y = s_stage_bank[0xD00+id];
        if (y >= 240 || !in_views(x,24)) { s_rects.seen[id] = 0; continue; }
        if (s_rects.seen[id]) continue;
        int duplicate = 0, free_slot = 0;
        for (int slot = 16; slot < 32; slot++) {
            /* Retail $9C80 also checks inactive records. A dead identifier
             * stays reserved until another native constructor reuses it. */
            if (ram(0x4C0+slot) == id) duplicate = 1;
            if (!ram(0x300+slot)) free_slot = 1;
        }
        if (duplicate || (ram(0x150+id/8) & cyc_mod_peek((uint16_t)(0xDEC2+(id&7))))) { s_rects.seen[id] = 1; continue; }
        if (!free_slot) { s_rects.full++; continue; }
        CycModRegs r = {0}; cyc_mod_regs(&r); r.y = (uint8_t)id;
        if (!cyc_mod_isolate_begin()) { s_rects.failed++; continue; }
        mm3_coop_spawn_project(mm3_coop_nearest(x,y));
        cyc_mod_poke(0xF7,0);
        int ok = cyc_mod_call(0x9C80,&r), found = -1;
        uint8_t fields[SLOT_ARRAYS];
        for (int slot = 16; ok && slot < 32; slot++) if ((ram(0x300+slot)&0x80) && ram(0x4C0+slot) == id) { found = slot; break; }
        if (found >= 0) for (int f = 0; f < SLOT_ARRAYS; f++) fields[f] = ram(0x300+f*32+found);
        cyc_mod_isolate_end();
        if (!ok) s_rects.failed++;
        else if (found >= 0) {
            for (int f = 0; f < SLOT_ARRAYS; f++) cyc_mod_poke((uint16_t)(0x300+f*32+found),fields[f]);
            s_rects.spawned++; s_rects.seen[id] = 1;
        }
    }
}

static int spawn_edges(uint16_t addr)
{
    (void)addr;
    simulation_window();
    if (!s_win_valid) return 0;
    if (mm3_coop_independent()) { independent_spawns(); return 0; }
    int left = cyc_mod_peek(0x00) | cyc_mod_peek(0x01) << 8;
    int right = cyc_mod_peek(0x02) | cyc_mod_peek(0x03) << 8;
    int wl = s_win_left < 0 ? 0 : s_win_left, wr = s_win_right - 1 > 0xFFFF ? 0xFFFF : s_win_right - 1;
    if (wl < left) { cyc_mod_poke(0x00, (uint8_t)wl); cyc_mod_poke(0x01, (uint8_t)(wl >> 8)); }
    if (wr > right) { cyc_mod_poke(0x02, (uint8_t)wr); cyc_mod_poke(0x03, (uint8_t)(wr >> 8)); }
    if (wl < left || wr > right) s_spawn_widened++;
    return 0;
}

static int object_draw(uint16_t addr)
{
    (void)addr;
    mm3_coop_primary_begin();
    CycModRegs r;
    cyc_mod_regs(&r);
    int x = r.x;
    if (mm3_coop_independent() && mm3_coop_scene_active() && x < 16) return 1;
    if (!s_win_valid || s_stage != ram(0x22)) return 0;
    if (x == 0 || x >= 0x20) return 0;                       /* Mega Man stays native */
    if (!(ram((uint16_t)(0x580 + x)) & 0x10) || ram((uint16_t)(0x3E0 + x))) return 0;
    int ox = ram((uint16_t)(0x380 + x)) << 8 | ram((uint16_t)(0x360 + x));
    int cam = ram(0xF9) << 8 | ram(0xFC), dx = ox - cam;
    int independent = mm3_coop_independent();
    int pad = independent ? 32 : OBJECT_PAD;
    if (independent && !in_views(ox,ram(0x580+x)&8 ? 72 : pad)) {
        cyc_mod_poke((uint16_t)(0x300+x),0); cyc_mod_poke((uint16_t)(0x4C0+x),0xFF); return 1;
    }
    if (dx >= 0 && dx < 256 && (!independent || in_views(ox,pad))) return 0;
    if (!independent && (ox < s_win_left - OBJECT_PAD || ox >= s_win_right + OBJECT_PAD)) return 0;

    int shifted = ox - 128 < 0 ? 0 : ox - 128;
    if (independent && !in_views(ox,pad)) {
        int chosen = 0;
        if (abs(ox-(s_rects.left[1]+128)) < abs(ox-(s_rects.left[0]+128))) chosen = 1;
        shifted = s_rects.left[chosen]; /* native72px hysteresis without a drawn flag */
    }
    /* The object's whole record: 24 arrays of 32 slots, $0300-$05FF. The
     * draw advances more than animation - e.g. the hit-flash timer in $04E0,
     * without which an enemy hit in the margin stayed invulnerable. */
    uint8_t keep[SLOT_ARRAYS];
    WideSprite *buf = s_wide[s_wide_cur];
    int n = s_wide_n[s_wide_cur];
    int after = ram(0x97) ? ram(0x97)/4-1 : 63;
    int after_body = mm3_coop_primary_seen();
    if (!cyc_mod_isolate_begin()) return 0;
    cyc_mod_poke(0xFC, (uint8_t)shifted); cyc_mod_poke(0xF9, (uint8_t)(shifted >> 8));
    cyc_mod_poke(0x97, 0x04);                                /* OAM from entry 1 (0 means full) */
    CycModRegs call = r;
    bool ok = cyc_mod_call(0xF06B, &call);
    if (ok) {
        int end = cyc_mod_peek(0x97);
        if (end == 0) end = 256;
        for (int i = 4; i < end && n < MAX_WIDE_SPRITES; i += 4) {
            uint8_t y = cyc_mod_peek((uint16_t)(0x200 + i));
            if (y >= 0xEF) continue;
            buf[n++] = (WideSprite){(int16_t)(cyc_mod_peek((uint16_t)(0x203 + i)) + shifted - cam), y,
                                    cyc_mod_peek((uint16_t)(0x201 + i)), cyc_mod_peek((uint16_t)(0x202 + i)),
                                    (uint8_t)after,(uint8_t)after_body,0};
        }
        for (int f = 0; f < SLOT_ARRAYS; f++) keep[f] = cyc_mod_peek((uint16_t)(0x300 + f * 0x20 + x));
    }
    cyc_mod_isolate_end();
    if (!ok) return 0;
    for (int f = 0; f < SLOT_ARRAYS; f++) {
        uint16_t a = (uint16_t)(0x300 + f * 0x20 + x);
        if (ram(a) != keep[f]) cyc_mod_poke(a, keep[f]);
    }
    s_wide_n[s_wide_cur] = n;
    s_kept++;
    return 1;
}

static void paint_wide_sprite(uint32_t *out, int width, int play_x0, const uint8_t *opaque, const WideSprite *sp)
{
        int cx = play_x0 + sp->x, y = sp->y + 1, line = y < 240 ? y : 239;
        if (cx <= -8 || cx >= width) return;
        uint8_t a = sp->attr;
        unsigned flags = (a & 0x40 ? CYC_TILE_HFLIP : 0) | (a & 0x80 ? CYC_TILE_VFLIP : 0) | (a & 0x20 ? CYC_TILE_BEHIND : 0);
        int palette = (a & 3) + 4;
        if (!cyc_render_line_sprite16(line)) {
            cyc_render_tile(out, width, 240, cx, y, (uint16_t)(cyc_render_line_sprite_table(line) + sp->tile * 16),
                            palette, flags, opaque, NULL);
        } else {
            uint16_t table = sp->tile & 1 ? 0x1000 : 0;
            int top = sp->tile & 0xFE, bottom = top + 1;
            if (a & 0x80) { int t = top; top = bottom; bottom = t; }
            cyc_render_tile(out, width, 240, cx, y, (uint16_t)(table + top * 16), palette, flags, opaque, NULL);
            cyc_render_tile(out, width, 240, cx, y + 8, (uint16_t)(table + bottom * 16), palette, flags, opaque, NULL);
        }
}
static void draw_wide_sprites(uint32_t *out, int width, int play_x0, const uint8_t *opaque)
{
    for (int i = s_wide_n[s_wide_shown]-1; i >= 0; i--) paint_wide_sprite(out,width,play_x0,opaque,&s_wide[s_wide_shown][i]);
}

static int rects_get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof s_rects) return -1;
    memcpy(s_rects.magic,"VR01",4); memcpy(out,&s_rects,sizeof s_rects); return sizeof s_rects;
}
static int rects_valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    ViewRects n; if (!in || size != (int)sizeof n) return 0; memcpy(&n,in,size);
    if (memcmp(n.magic,"VR01",4) || n.count > 2 || n.reserved[0] || n.reserved[1] || n.reserved[2]) return 0;
    for (int i = 0; i < n.count; i++) if (n.left[i] < 0 || n.right[i] > 65536 || n.left[i] >= n.right[i]) return 0;
    for (int i = 0; i < 256; i++) if (n.seen[i] > 1) return 0;
    return 1;
}
static int rects_set(const uint8_t *in, int size)
{ if (!rects_valid(in,size)) return 0; if (size) memcpy(&s_rects,in,size); else memset(&s_rects,0,sizeof s_rects); return 1; }
void mm3_ws_coop_reset(void)
{ s_rects.count = 0; memset(s_rects.seen,0,sizeof s_rects.seen); s_win_valid = false; }

static int hud_part(uint16_t address)
{
    (void)address;
    if (mm3_coop_independent() && !cyc_mod_isolated()) {
        CycModRegs r = {0}; cyc_mod_regs(&r);
        s_panel_build.hud_mask |= 1ull << (r.x/4);
    }
    return 0;
}
static void panel_hud(int seat)
{
    if (!cyc_mod_isolate_begin()) return;
    for (int a = 0xA0; a <= 0xAD; a++) cyc_mod_poke((uint16_t)a,(uint8_t)mm3_coop_read(seat,a));
    cyc_mod_poke(0xB1,(uint8_t)mm3_coop_read(seat,0xB1));
    cyc_mod_poke(0xEB,(uint8_t)mm3_coop_read(seat,0xEB));
    cyc_mod_poke(0x97,4); cyc_mod_poke(0xF7,0);
    CycModRegs r = {0}; cyc_mod_regs(&r);
    int ok = cyc_mod_call(0xFF45,&r) && cyc_mod_call(0xF298,&r);
    if (ok) {
        int end = ram(0x97); if (!end) end = 256;
        for (int at = 4; at < end && s_panel_build.hud_count[seat] < 21; at += 4) {
            PanelHud *p = &s_panel_build.hud[seat][s_panel_build.hud_count[seat]++];
            p->x = ram(0x203+at); p->y = ram(0x200+at); p->tile = ram(0x201+at); p->attr = ram(0x202+at);
            unsigned pattern = (ram(0xFF)&8 ? 0x1000 : 0)+p->tile*16;
            for (int b = 0; b < 16; b++) p->pattern[b] = cyc_render_chr((uint16_t)(pattern+b));
            for (int c = 0; c < 4; c++) p->palette[c] = (uint8_t)(c ?
                mm3_coop_read(seat,0x630+(p->attr&3)*4+c)&63 : ram(0x630+(p->attr&3)*4));
        }
    }
    cyc_mod_isolate_end();
}
static void panels_build(void)
{
    memset(&s_panel_build,0,sizeof s_panel_build);
    if (!mm3_coop_independent() || !mm3_coop_scene_active() || s_stage != ram(0x22)) return;
    int left[2]; if (!mm3_coop_view_rects(left)) return;
    s_panel_build.active = 1; s_panel_build.native_scene = (uint8_t)mm3_coop_view_locked();
    s_panel_build.stage = ram(0x22); s_panel_build.camera = (int16_t)(ram(0xF9)*256+ram(0xFC));
    for (int seat = 0; seat < 2; seat++) {
        s_panel_build.left[seat] = (int16_t)left[seat];
        for (int y = 0; y < 30; y++) for (int x = 0; x < 33; x++)
            level_tile(((left[seat]&~7)+x*8)/8,y,&s_panel_build.tiles[seat][y][x],&s_panel_build.palettes[seat][y][x]);
        panel_hud(seat);
    }
}
typedef struct { char magic[4]; PanelFrame build,shown; } PanelState;
static int panels_get(uint8_t *out,int cap)
{
    if (cap < (int)sizeof(PanelState)) return -1;
    PanelState n = {0}; memcpy(n.magic,"VP01",4); n.build = s_panel_build; n.shown = s_panel_frame;
    memcpy(out,&n,sizeof n); return sizeof n;
}
static int panels_valid(const uint8_t *in,int size)
{
    if (!size) return 1;
    PanelState n; if (!in || size != (int)sizeof n) return 0; memcpy(&n,in,size);
    if (memcmp(n.magic,"VP01",4)) return 0;
    const PanelFrame *f[] = {&n.build,&n.shown};
    for (int k = 0; k < 2; k++) {
        if (f[k]->active > 1 || f[k]->native_scene > 1 || (f[k]->active && f[k]->stage >= STAGE_COUNT)) return 0;
        for (int seat = 0; seat < 2; seat++) {
            if (f[k]->hud_count[seat] > 21 || (f[k]->active && f[k]->left[seat] < 0)) return 0;
            for (int y = 0; y < 30; y++) for (int x = 0; x < 33; x++) if (f[k]->palettes[seat][y][x] > 3) return 0;
            for (int h = 0; h < f[k]->hud_count[seat]; h++) for (int c = 0; c < 4; c++) if (f[k]->hud[seat][h].palette[c] > 63) return 0;
        }
    }
    return 1;
}
static int panels_set(const uint8_t *in,int size)
{
    if (!panels_valid(in,size)) return 0;
    if (size) { PanelState n; memcpy(&n,in,size); s_panel_build = n.build; s_panel_frame = n.shown; }
    else { memset(&s_panel_build,0,sizeof s_panel_build); memset(&s_panel_frame,0,sizeof s_panel_frame); }
    return 1;
}

#if defined(_MSC_VER)
#pragma section(".CRT$XCU", read)
static void __cdecl register_hooks(void);
__declspec(allocate(".CRT$XCU")) void (__cdecl *mm3_ws_register_hooks)(void) = register_hooks;
#pragma comment(linker, "/include:mm3_ws_register_hooks")
static void __cdecl register_hooks(void)
#else
static void register_hooks(void) __attribute__((constructor));
static void register_hooks(void)
#endif
{
    /* Before the host validates hook sites (cyc_session_start). */
    if (!nes_mod_register_function_entry_plugin(HOOK_SPAWN, 0x9C11, spawn_edges) ||
        !nes_mod_register_function_entry_plugin(HOOK_DRAW, 0xF06B, object_draw) ||
        !nes_mod_register_function_entry_plugin(HOOK_NMI, 0xC000, nmi_latch) ||
        !nes_mod_register_function_entry_plugin(HOOK_PASS, 0xF034, begin_pass) ||
        !nes_mod_register_function_entry_plugin("mm3.view.hud-part",0xF2FF,hud_part) ||
        !nes_mod_register_function_entry_plugin(HOOK_SPAWN_FILTER, 0x9C80, spawn_filter))
        fprintf(stderr, "[mm3 widescreen] cannot register hooks\n");
    nes_mod_register_savestate_hook("mm3.widescreen",wide_get,wide_set);
    nes_mod_register_savestate_validator("mm3.widescreen",wide_valid);
    nes_mod_register_savestate_hook("mm3.view-rects",rects_get,rects_set);
    nes_mod_register_savestate_validator("mm3.view-rects",rects_valid);
    nes_mod_register_savestate_hook("mm3.view-panels",panels_get,panels_set);
    nes_mod_register_savestate_validator("mm3.view-panels",panels_valid);
}

static void enable_hooks(bool on)
{
    nes_mod_set_function_hook_enabled(HOOK_SPAWN, on);
    nes_mod_set_function_hook_enabled(HOOK_DRAW, on);
    nes_mod_set_function_hook_enabled(HOOK_NMI, on);
    nes_mod_set_function_hook_enabled(HOOK_PASS, on);
    nes_mod_set_function_hook_enabled(HOOK_SPAWN_FILTER, on && mm3_coop_independent());
    nes_mod_set_function_hook_enabled("mm3.view.hud-part",on && mm3_coop_independent());
    if (!on) s_win_valid = false;
}

/* ---- picture ---- */

static uint32_t level_pixel(int wx, int row, uint16_t table, const uint32_t colors[16], uint8_t *opaque)
{
    uint8_t tile, pal;
    level_tile(wx >> 3, row >> 3, &tile, &pal);
    uint16_t p = (uint16_t)(table + tile * 16 + (row & 7));
    int bit = 7 - (wx & 7);
    int pixel = ((cyc_render_chr(p) >> bit) & 1) | (((cyc_render_chr((uint16_t)(p + 8)) >> bit) & 1) << 1);
    if (opaque) *opaque = pixel != 0;
    return colors[pixel ? pal * 4 + pixel : 0];
}

typedef struct {
    int fine_y[240];     /* row within its screen, per line */
    int part[240];       /* 0: upper screen, 1: lower (vertical transitions) */
} Lines;

static uint8_t nametable_tile(int line, int native_x)
{
    int x = (cyc_render_line_scroll_x(line) + native_x) & 511;
    int y = cyc_render_line_scroll_y(line);
    uint16_t a = (uint16_t)(0x2000 + ((x >> 8) & 1) * 0x400 + (y >= 240 ? 0x800 : 0) +
                            ((y % 240) >> 3) * 32 + ((x & 255) >> 3));
    return cyc_render_nametable(a);
}

/* How many sampled native tiles the decoder predicts, with screens[part]. */
static int score(const Lines *l, int cam, const int screens[2], int *samples)
{
    int hit = 0, n = 0;
    for (int y = 4; y < 240; y += 8) {
        if (!(cyc_render_line_mask(y) & 8)) continue;
        for (int x = 8; x < 256; x += 8) {
            int wx = screens[l->part[y]] * 256 + (cam & 255) + x;
            uint8_t tile, pal;
            level_tile(wx >> 3, l->fine_y[y] >> 3, &tile, &pal);
            hit += tile == nametable_tile(y, x);
            n++;
        }
    }
    *samples = n;
    return hit;
}

static int fallback(const char *why)
{
    s_reason = why;
    s_fallback++;
    return 0;
}

static int render_world(uint32_t *out, int width, int height, int native_x0, const uint32_t *native, void *user)
{
    (void)native_x0; (void)user;
    if (s_stage < 0 || s_stage != ram(0x22)) return fallback("no stage tables");
    if (!(cyc_render_line_mask(120) & 8)) return fallback("background off");

    /* One horizontal scroll for the whole picture (no split), its phase from
     * what the PPU drew; the RAM camera is already the next frame's. */
    int sx = cyc_render_line_scroll_x(120) & 255;
    for (int y = 0; y < 240; y += 8)
        if ((cyc_render_line_mask(y) & 8) && (cyc_render_line_scroll_x(y) & 255) != sx)
            return fallback("split scroll");
    int ram_cam = ram(0xF9) * 256 + ram(0xFC);
    int cam = ram_cam + (((sx - (ram_cam & 255)) + 128) & 255) - 128;

    /* Rows: a vertical transition shows the bottom of one screen above the
     * top of the next; the captured Y wraps where the lower one starts. */
    Lines l;
    int part = 0, previous = -1;
    for (int y = 0; y < 240; y++) {
        int fy = cyc_render_line_scroll_y(y) % 240;
        if (previous >= 0 && fy < previous) part = 1;
        l.fine_y[y] = fy; l.part[y] = part; previous = fy;
    }
    int s = cam >> 8, best = -1, samples = 0;
    int candidates[4][2] = {{s, s}, {s - 1, s}, {s, s + 1}, {s + 1, s}};
    int count = part ? 4 : 1;
    if (part) candidates[0][1] = s - 1;      /* also try the screen above being s */
    int screens[2] = {s, s};
    for (int i = 0; i < count; i++) {
        int n, hit = score(&l, cam, candidates[i], &n);
        if (hit > best) { best = hit; samples = n; screens[0] = candidates[i][0]; screens[1] = candidates[i][1]; }
    }
    s_match = best; s_samples = samples;
    if (samples == 0 || best * 100 < samples * MATCH_PERCENT) return fallback("not level background");

    /* The native picture never moves: it stays centred, so screen-space
     * sprites (the energy bars) stay put and leaving a room built for 4:3
     * does not slide the picture. What the margins show is clipped to the
     * scroll segment(s) the native view spans - two during a door scroll -
     * and is black past a scroll lock. */
    int play_x0 = (width - 256) / 2, view = cam - play_x0;
    int left, right;
    view_range(cam, &left, &right);

    uint32_t colors[16];
    for (int i = 0; i < 16; i++) colors[i] = cyc_render_color(i & 3 ? i : 0);
    /* The native picture's last 8 columns show the ring slot the game is
     * streaming into, with attributes up to a tile late: invisible at 4:3, a
     * wrong-coloured strip at the seam once the level continues beside it.
     * There the background comes from the level and only the sprites from the
     * frame. */
    memset(s_sprites, 0, sizeof s_sprites);
    cyc_render_sprites(s_sprites, 256, 240, 0, cyc_frame_bg_opaque(), NULL, NULL);
    const uint8_t *native_opaque = cyc_frame_bg_opaque();
    for (int y = 0; y < height; y++) {
        int sl = left, sr = right, screen = screens[l.part[y]], row = l.fine_y[y];
        if (screens[0] != screens[1]) screen_range(screen, &sl, &sr);   /* vertical transition: each part's own */
        uint16_t table = cyc_render_line_bg_table(y);
        bool clip_left = !(cyc_render_line_mask(y) & 2);
        uint32_t *line = out + y * width;
        uint8_t *opaque = s_opaque + y * width;
        for (int x = 0; x < width; x++) {
            int nx = x - play_x0;
            opaque[x] = 0;
            if (nx >= (clip_left ? 8 : 0) && nx < SEAM) {
                line[x] = native[y * 256 + nx];
                opaque[x] = native_opaque[y * 256 + nx];
                continue;
            }
            int wx = screen * 256 + (cam & 255) + nx;
            line[x] = wx < sl || wx >= sr ? 0xFF000000u : level_pixel(wx, row, table, colors, &opaque[x]);
            if (!mm3_coop_enabled() && nx >= SEAM && nx < 256 && (s_sprites[y * 256 + nx] >> 24)) line[x] = s_sprites[y * 256 + nx];
        }
    }
    if (!mm3_coop_enabled()) draw_wide_sprites(out, width, play_x0, s_opaque);
    if (s_check && cyc_render_background(s_bg)) {
        /* The decoder's own picture of the native area against the PPU's
         * background-only capture: palettes, CHR banks and fine scroll. */
        s_check_bad = s_check_total = 0;
        for (int y = 0; y < 240; y++) {
            if (!(cyc_render_line_mask(y) & 8)) continue;
            uint16_t table = cyc_render_line_bg_table(y);
            int screen = screens[l.part[y]];
            for (int nx = 8; nx < SEAM; nx++) {
                uint32_t want = s_bg[y * 256 + nx];
                uint32_t got = level_pixel(screen * 256 + (cam & 255) + nx, l.fine_y[y], table, colors, NULL);
                if (got != want && !s_check_bad++) {
                    s_check_x = nx; s_check_y = y; s_check_want = want; s_check_got = got;
                }
                s_check_total++;
            }
        }
    }
    cyc_render_set_native_origin(play_x0);
    s_view_left = view; s_cam = cam; s_play_x0 = play_x0;
    s_screens[0] = screens[0]; s_screens[1] = screens[1];
    s_reason = "composed";
    s_composed++;
    return 1;
}

/* ---- host ---- */

static uint32_t s_character_picture[256 * 240];
typedef struct {
    uint32_t *out;
    const uint8_t *opaque;
    uint64_t body,skip;
    int width, origin, guest, wide;
} SpritePaint;
static void paint_events(SpritePaint *p, int slot)
{
    while (p->wide >= 0 && s_wide[s_wide_shown][p->wide].after >= slot) {
        const WideSprite *w = &s_wide[s_wide_shown][p->wide--];
        if (p->guest >= 0 && (p->guest > w->after || (p->guest == w->after && !w->after_body))) {
            mm3_coop_paint(p->out,p->width,p->origin,p->opaque); p->guest = -1;
        }
        paint_wide_sprite(p->out,p->width,p->origin,p->opaque,w);
    }
    if (p->guest >= slot && p->guest >= 0) {
        mm3_coop_paint(p->out,p->width,p->origin,p->opaque); p->guest = -1;
    }
}
static int sprite_place(int slot, int x, int y, int *out_x, void *user)
{
    (void)y; SpritePaint *p = (SpritePaint *)user;
    paint_events(p,slot); *out_x = p->origin + x;
    if (p->skip & (1ull << slot)) return 0;
    if (mm3_coop_independent()) return 1; /* both personal packets are private */
    return mm3_proto_place_sprite(slot,p->body,p->out,p->width,p->origin,p->opaque);
}
static void combined_sprites(uint32_t *out, int width, int origin, const uint8_t *opaque, int wide)
{
    uint64_t skip = 0;
    if (mm3_coop_independent() && s_panel_frame.active) {
        const uint8_t *oam = cyc_render_oam();
        for (int i = 0; i < 64; i++) if ((s_panel_frame.hud_mask&(1ull<<i)) &&
            !memcmp(oam+i*4,s_panel_frame.oam+i*4,4)) skip |= 1ull<<i;
    }
    SpritePaint p = {out,opaque,mm3_proto_picture_mask(),skip,width,origin,mm3_coop_insert_slot(),wide ? s_wide_n[s_wide_shown]-1 : -1};
    cyc_render_sprites(out,width,240,origin,opaque,sprite_place,&p);
    paint_events(&p,-1);
}
static void panel_hud_paint(uint32_t *out,int seat)
{
    for (int i = s_panel_frame.hud_count[seat]-1; i >= 0; i--) {
        const PanelHud *p = &s_panel_frame.hud[seat][i];
        for (int y = 0; y < 8; y++) for (int x = 0; x < 8; x++) {
            int py = p->y+1+y,px = p->x+x;
            if (py >= 240 || px >= 256 || !(cyc_render_line_mask(py)&16)) continue;
            int row = p->attr&128 ? 7-y : y,bit = p->attr&64 ? x : 7-x;
            int v = ((p->pattern[row]>>bit)&1)|(((p->pattern[row+8]>>bit)&1)<<1);
            if (v && (!(p->attr&32) || !s_panel_opaque[py*256+px]))
                out[py*256+px] = cyc_render_color_value(p->palette[v]);
        }
    }
}
static void panel_scene(uint32_t *out,int seat)
{
    const uint8_t *native_opaque = cyc_frame_bg_opaque();
    int phase = s_panel_frame.left[seat]&7;
    for (int y = 0; y < 240; y++) for (int x = 0; x < 256; x++) {
        int at = y*256+x;
        if (s_panel_frame.native_scene) {
            out[at] = s_character_picture[at]; s_panel_opaque[at] = native_opaque[at]; continue;
        }
        int row = cyc_render_line_scroll_y(y)%240,cell = (phase+x)/8;
        int tile = s_panel_frame.tiles[seat][row/8][cell],a = cyc_render_line_bg_table(y)+tile*16+(row&7);
        int bit = 7-((phase+x)&7),v = ((cyc_render_chr((uint16_t)a)>>bit)&1)|(((cyc_render_chr((uint16_t)(a+8))>>bit)&1)<<1);
        if (!(cyc_render_line_mask(y)&8)) v = 0;
        out[at] = cyc_render_color(v ? s_panel_frame.palettes[seat][row/8][cell]*4+v : 0);
        s_panel_opaque[at] = (uint8_t)(v!=0);
    }
    if (!mm3_coop_menu_active()) {
        int origin = s_panel_frame.native_scene ? 0 : s_panel_frame.camera-s_panel_frame.left[seat];
        combined_sprites(out,256,origin,s_panel_opaque,1);
        panel_hud_paint(out,seat);
    }
}
static int panels(uint32_t *out,int width,int height)
{
    int mode = mm3_coop_view_mode();
    if (!mm3_coop_independent() || !mm3_coop_scene_active() || !s_panel_frame.active || height != 240 ||
        width != (mode==1 ? 512 : 256) || !cyc_render_background(s_character_picture)) return 0;
    if (mode == 1) {
        for (int seat = 0; seat < 2; seat++) panel_scene(s_panel_picture[seat],seat);
        for (int y = 0; y < 240; y++) for (int seat = 0; seat < 2; seat++)
            memcpy(out+y*width+seat*256,s_panel_picture[seat]+y*256,256*sizeof *out);
    } else panel_scene(out,mode==3);
    cyc_render_set_native_origin(0); return 1;
}
static int compose(uint32_t *out, int width, int height, int native_x0, const uint32_t *native, void *user)
{
    if (panels(out,width,height)) return 1;
    if (mm3_coop_enabled()) {
        if (!cyc_render_background(s_character_picture)) return 0;
        if (width == 256) {
            memcpy(out,s_character_picture,sizeof s_character_picture);
            if (!mm3_coop_menu_active()) combined_sprites(out,width,0,cyc_frame_bg_opaque(),0); return 1;
        }
        if (render_world(out,width,height,native_x0,s_character_picture,user)) {
            if (!mm3_coop_menu_active()) combined_sprites(out,width,cyc_render_native_origin(width),s_opaque,1); return 1;
        }
        if (!mm3_coop_menu_active()) combined_sprites(s_character_picture,256,0,cyc_frame_bg_opaque(),0);
        int left = (width-256)/2;
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) out[y*width+x] = 0xFF000000u;
            memcpy(out+y*width+left,s_character_picture+y*256,256*sizeof *out);
        }
        cyc_render_set_native_origin(left); return 1;
    }
    int changed = mm3_proto_native_picture(s_character_picture);
    if (changed) native = s_character_picture;
    if (width == 256) {
        if (changed || mm3_coop_enabled()) memcpy(out, native, 256 * 240 * sizeof *out);
        return mm3_coop_paint(out, width, 0, cyc_frame_bg_opaque()) || changed;
    }
    if (render_world(out, width, height, native_x0, native, user)) {
        mm3_coop_paint(out, width, cyc_render_native_origin(width), s_opaque); return 1;
    }
    if (!changed && !mm3_coop_enabled()) return 0;
    int left = (width - 256) / 2;
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) out[y * width + x] = 0xFF000000u;
        memcpy(out + y * width + left, native + y * 256, 256 * sizeof *out);
    }
    cyc_render_set_native_origin(left);
    return mm3_coop_paint(out, width, left, NULL) || changed;
}
static int render(uint32_t *out, int width, int height, int native_x0, const uint32_t *native, void *user)
{
    int previous = mm3_coop_present_begin();
    int result = compose(out, width, height, native_x0, native, user);
    result = mm3_coop_menu_draw(out, width) || result;
    mm3_coop_present_end(previous);
    return result;
}

void mm3_ws_refresh_policy(void)
{
    int characters = mm3_proto_available() || mm3_charge_available();
    enable_hooks(s_mode != NES_VIDEO_STOCK || characters);
    cyc_render_set_stock_compositing(characters);
    cyc_render_capture_background(s_check || characters);
}

void mm3_ws_power_on(void)
{
    s_stage = -1;
    s_win_valid = false;
    s_wide_n[0] = s_wide_n[1] = 0;
    memset(s_wide,0,sizeof s_wide); s_wide_cur = 0; s_wide_shown = 1;
    memset(&s_rects,0,sizeof s_rects);
    memset(&s_panel_build,0,sizeof s_panel_build); memset(&s_panel_frame,0,sizeof s_panel_frame);
    s_win_left = s_win_right = 0; s_restored = 0;
    cyc_render_set_compositor(render, NULL);
    cyc_video_set_mode(s_mode);
    mm3_ws_refresh_policy();
}

void mm3_ws_frame_end(void)
{
    if (s_mode == NES_VIDEO_STOCK && !mm3_coop_independent()) return;
    ensure_stage();
}

void mm3_ws_state_loaded(void)
{
    bool restored_window = s_restored && s_win_valid;
    s_stage = -1;
    s_win_valid = false;
    if (!s_restored) s_wide_n[0] = s_wide_n[1] = 0;
    if (s_mode != NES_VIDEO_STOCK || mm3_coop_independent()) ensure_stage();
    s_win_valid = restored_window; s_restored = 0;
}

bool mm3_ws_set_mode(int mode)
{
    if (mode < NES_VIDEO_STOCK || mode >= NES_VIDEO_MODE_COUNT) return false;
    s_mode = mode;
    cyc_video_set_mode(mode);
    if (mm3_coop_independent()) mm3_coop_view_policy();
    mm3_ws_refresh_policy();
    return true;
}

bool mm3_ws_set_mode_name(const char *name)
{
    int mode;
    return nes_video_geometry_parse(name, &mode) && mm3_ws_set_mode(mode);
}

int mm3_ws_mode(void) { return s_mode; }

void mm3_ws_set_check(bool enabled)
{
    s_check = enabled;
    s_check_bad = -1; s_check_total = 0;
    cyc_render_capture_background(enabled || mm3_proto_available() || mm3_charge_available());
}

void mm3_ws_save_setting(FILE *f) { fprintf(f, "Widescreen = %s\n", nes_video_geometry_name(s_mode)); }

void mm3_ws_describe(char *out, size_t n)
{
    snprintf(out, n,
             "\"mode\":\"%s\",\"width\":%d,\"stage\":%d,\"segments\":%d,\"reason\":\"%s\","
             "\"cam\":%d,\"view_left\":%d,\"play_x0\":%d,\"screens\":[%d,%d],"
             "\"match\":%d,\"samples\":%d,\"composed\":%lu,\"fallback\":%lu,"
             "\"check_bad\":%ld,\"check_total\":%ld,\"check_first\":[%d,%d,\"%08X\",\"%08X\"],"
             "\"window\":[%d,%d,%s],\"wide_sprites\":%d,\"kept\":%lu,\"spawn_widened\":%lu",
             nes_video_geometry_name(s_mode), cyc_video_width(), s_stage, s_seg_count, s_reason,
             s_cam, s_view_left, s_play_x0, s_screens[0], s_screens[1],
             s_match, s_samples, s_composed, s_fallback, s_check_bad, s_check_total,
             s_check_x, s_check_y, (unsigned)s_check_want, (unsigned)s_check_got,
             s_win_left, s_win_right, s_win_valid ? "true" : "false", s_wide_n[s_wide_shown], s_kept, s_spawn_widened);
}
