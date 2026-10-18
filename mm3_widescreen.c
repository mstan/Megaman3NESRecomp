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

#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_video.h"

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define STAGE_COUNT 23           /* entries of the metatile bank table $C8B9 */
#define MAX_SEGMENTS 64
#define MAX_EASE 8               /* px per picture the anchored view may move */
#define MATCH_PERCENT 80
#define SEAM 248                 /* native columns from here: background from the level */

static int s_mode = NES_VIDEO_16_9;

/* Stage tables. */
static uint8_t s_stage_bank[0x2000], s_tile_bank[0x2000];   /* $A000-$BFFF */
static int s_stage = -1;
static int s_seg_count, s_seg_start[MAX_SEGMENTS], s_seg_len[MAX_SEGMENTS];
static bool s_seg_horizontal[MAX_SEGMENTS];

/* Last picture. */
static bool s_have_view;
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
    s_have_view = false;
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

/* ---- picture ---- */

static uint32_t level_pixel(int wx, int row, uint16_t table, const uint32_t colors[16])
{
    uint8_t tile, pal;
    level_tile(wx >> 3, row >> 3, &tile, &pal);
    uint16_t p = (uint16_t)(table + tile * 16 + (row & 7));
    int bit = 7 - (wx & 7);
    int pixel = ((cyc_render_chr(p) >> bit) & 1) | (((cyc_render_chr((uint16_t)(p + 8)) >> bit) & 1) << 1);
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
    s_have_view = false;
    s_fallback++;
    return 0;
}

static int render(uint32_t *out, int width, int height, int native_x0, const uint32_t *native, void *user)
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

    /* The view: centred on the native picture, but kept inside the segment so
     * nothing past a scroll lock shows; eased so a door push or segment change
     * slides instead of jumping. */
    int left, right;
    screen_range(s, &left, &right);
    if (cam < left) left = cam;
    if (cam + 256 > right) right = cam + 256;
    int target = cam - (width - 256) / 2;
    if (right - left <= width) target = left - (width - (right - left)) / 2;
    else if (target < left) target = left;
    else if (target > right - width) target = right - width;
    int view = target;
    if (s_have_view && abs(target - s_view_left) <= 256) {
        if (target > s_view_left + MAX_EASE) view = s_view_left + MAX_EASE;
        else if (target < s_view_left - MAX_EASE) view = s_view_left - MAX_EASE;
    }
    if (view > cam) view = cam;
    if (view < cam - (width - 256)) view = cam - (width - 256);
    int play_x0 = cam - view;

    uint32_t colors[16];
    for (int i = 0; i < 16; i++) colors[i] = cyc_render_color(i & 3 ? i : 0);
    /* The native picture's last 8 columns show the ring slot the game is
     * streaming into, with attributes up to a tile late: invisible at 4:3, a
     * wrong-coloured strip at the seam once the level continues beside it.
     * There the background comes from the level and only the sprites from the
     * frame. */
    memset(s_sprites, 0, sizeof s_sprites);
    cyc_render_sprites(s_sprites, 256, 240, 0, cyc_frame_bg_opaque(), NULL, NULL);
    for (int y = 0; y < height; y++) {
        int sl, sr, screen = screens[l.part[y]], row = l.fine_y[y];
        screen_range(screen, &sl, &sr);
        uint16_t table = cyc_render_line_bg_table(y);
        bool clip_left = !(cyc_render_line_mask(y) & 2);
        uint32_t *line = out + y * width;
        for (int x = 0; x < width; x++) {
            int nx = x - play_x0;
            if (nx >= (clip_left ? 8 : 0) && nx < SEAM) { line[x] = native[y * 256 + nx]; continue; }
            if (nx >= SEAM && nx < 256 && (s_sprites[y * 256 + nx] >> 24)) { line[x] = s_sprites[y * 256 + nx]; continue; }
            int wx = screen * 256 + (cam & 255) + nx;
            line[x] = wx < sl || wx >= sr ? 0xFF000000u : level_pixel(wx, row, table, colors);
        }
    }
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
                uint32_t got = level_pixel(screen * 256 + (cam & 255) + nx, l.fine_y[y], table, colors);
                if (got != want && !s_check_bad++) {
                    s_check_x = nx; s_check_y = y; s_check_want = want; s_check_got = got;
                }
                s_check_total++;
            }
        }
    }
    cyc_render_set_native_origin(play_x0);
    s_have_view = true;
    s_view_left = view; s_cam = cam; s_play_x0 = play_x0;
    s_screens[0] = screens[0]; s_screens[1] = screens[1];
    s_reason = "composed";
    s_composed++;
    return 1;
}

/* ---- host ---- */

void mm3_ws_power_on(void)
{
    s_stage = -1;
    s_have_view = false;
    cyc_render_set_compositor(render, NULL);
    cyc_video_set_mode(s_mode);
}

void mm3_ws_frame_end(void) { if (s_mode != NES_VIDEO_STOCK) ensure_stage(); }

void mm3_ws_state_loaded(void) { s_stage = -1; s_have_view = false; ensure_stage(); }

bool mm3_ws_set_mode(int mode)
{
    if (mode < NES_VIDEO_STOCK || mode >= NES_VIDEO_MODE_COUNT) return false;
    s_mode = mode;
    s_have_view = false;
    cyc_video_set_mode(mode);
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
    cyc_render_capture_background(enabled);
}

void mm3_ws_save_setting(FILE *f) { fprintf(f, "Widescreen = %s\n", nes_video_geometry_name(s_mode)); }

void mm3_ws_describe(char *out, size_t n)
{
    snprintf(out, n,
             "\"mode\":\"%s\",\"width\":%d,\"stage\":%d,\"segments\":%d,\"reason\":\"%s\","
             "\"cam\":%d,\"view_left\":%d,\"play_x0\":%d,\"screens\":[%d,%d],"
             "\"match\":%d,\"samples\":%d,\"composed\":%lu,\"fallback\":%lu,"
             "\"check_bad\":%ld,\"check_total\":%ld,\"check_first\":[%d,%d,\"%08X\",\"%08X\"]",
             nes_video_geometry_name(s_mode), cyc_video_width(), s_stage, s_seg_count, s_reason,
             s_cam, s_view_left, s_play_x0, s_screens[0], s_screens[1],
             s_match, s_samples, s_composed, s_fallback, s_check_bad, s_check_total,
             s_check_x, s_check_y, (unsigned)s_check_want, (unsigned)s_check_got);
}
