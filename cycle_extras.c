/* Cycle-host enhancements and an optional frame-pacing observer. */
#include "cyc_core.h"
#include "cyc_host_extras.h"
#include "cyc_mod.h"
#include "cyc_trace.h"
#include "cyc_video.h"
#include "mm3_widescreen.h"
#include "mm3_mods.h"
#include "mm3_charge.h"
#include "mm3_coop.h"
#include "mm3_world.h"
#include "mm3_proto.h"
#include "mm3_net.h"
#ifdef CYC_WITH_SDL
#include "cyc_tcp.h"
#endif
#ifdef CYC_WITH_RECOMP_UI
#include "recomp_runtime_ui.h"
#endif
#include <stdlib.h>
#include <string.h>

static FILE *stats;
static unsigned frame, nmi, busy, complete;
static uint64_t start_cycles;
static uint8_t previous_busy;
static int reduce_slowdown = 1;
Mm3Settings mm3_host_settings(void)
{
    Mm3Settings c={mm3_coop_enabled(),mm3_coop_independent(),mm3_coop_character(0),mm3_coop_wait_both(),
        mm3_proto_available(),mm3_proto_real(),mm3_proto_start(),mm3_weapons_enabled(),
        mm3_charge_available(),mm3_charge_sound(),mm3_charge_flash(),mm3_ws_mode()!=NES_VIDEO_STOCK,(int)cyc_extra_scanlines(),mm3_ws_no_flicker()};
    return c;
}
int mm3_host_apply_settings(Mm3Settings c,int local_seat)
{
    if (mm3_net_locked()) return 0;
    if (!mm3_charge_configure(c.charge,c.sound,c.flash)) return 0;
    if (!mm3_proto_option("--proto-mode",c.real?"protoman":"megaman") ||
        !mm3_proto_option("--proto-start",c.start?"protoman":"megaman") ||
        !mm3_proto_option("--protoman",c.proto?"on":"off") || mm3_proto_available()!=c.proto) return 0;
    int view=mm3_coop_view_mode();
    if (!mm3_coop_option("--coop-p1",c.roster?"protoman":"megaman") ||
        !mm3_coop_option("--coop-wait-both",c.wait_both?"on":"off") ||
        !mm3_coop_option("--coop",c.coop?"on":"off") ||
        !mm3_mods_option("--weapon-cycle",c.weapons?"on":"off")) return 0;
    if (!c.independent) view=0;else if (!view) view=local_seat==1?3:2;
    static const char *views[]={"shared","split","p1","p2"};
    if (!mm3_coop_option("--coop-view",views[view])) return 0;
    int mode=c.wide ? (mm3_ws_mode()==NES_VIDEO_STOCK?NES_VIDEO_FIT:mm3_ws_mode()) : NES_VIDEO_STOCK;
    if (!mm3_ws_set_mode(mode) || !mm3_ws_set_no_flicker(c.flicker) || !cyc_set_extra_scanlines((unsigned)c.lines)) return 0;
    reduce_slowdown=c.lines!=0;return 1;
}

static void power_on(void *ctx)
{
    (void)ctx;
    cyc_set_extra_scanlines(reduce_slowdown ? 128u : 0u);
    mm3_ws_power_on();
    mm3_coop_power_on();
    mm3_mods_power_on();
    mm3_world_power_on();
}

static void load_setting(void *ctx, const char *key, const char *value)
{
    (void)ctx;
    if (!strcmp(key, "ReduceSlowdown")) {
        if (mm3_net_locked()) return;
        if (!strcmp(value, "0")) reduce_slowdown = 0;
        else if (!strcmp(value, "1")) reduce_slowdown = 1;
    }
    if (!strcmp(key, "Widescreen") && !mm3_net_locked()) mm3_ws_set_mode_name(value);
    if (!strcmp(key, "NoSpriteFlicker") && (!strcmp(value,"0") || !strcmp(value,"1"))) mm3_ws_set_no_flicker(value[0]=='1');
}

static void save_settings(void *ctx, FILE *f)
{
    (void)ctx;
    reduce_slowdown = cyc_extra_scanlines() != 0;
    fprintf(f, "ReduceSlowdown = %d\n", reduce_slowdown);
    fprintf(f, "NoSpriteFlicker = %d\n", mm3_ws_no_flicker());
    mm3_ws_save_setting(f);
}

#ifdef CYC_WITH_RECOMP_UI
static int get_value(void *ctx, const RecompRuntimeUiItem *item, int *out)
{
    (void)ctx;
    if (!strcmp(item->key, "mm3.coop_view")) { *out = mm3_coop_view_mode(); return 1; }
    if (!strcmp(item->key, "mm3.widescreen")) { *out = mm3_ws_mode(); return 1; }
    if (!strcmp(item->key, "mm3.no_flicker")) { *out = mm3_ws_no_flicker(); return 1; }
    if (strcmp(item->key, "mm3.reduce_slowdown")) return 0;
    *out = cyc_extra_scanlines() != 0;
    return 1;
}

static int set_value(void *ctx, const RecompRuntimeUiItem *item, int value)
{
    (void)ctx;
    if (!strcmp(item->key, "mm3.coop_view")) {
        static const char *views[] = {"shared", "split", "p1", "p2"};
        return value >= 0 && value < 4 && mm3_coop_option("--coop-view", views[value]);
    }
    if (!strcmp(item->key, "mm3.widescreen")) return mm3_ws_set_mode(value);
    if (!strcmp(item->key, "mm3.no_flicker")) return mm3_ws_set_no_flicker(value);
    if (strcmp(item->key, "mm3.reduce_slowdown") || (value != 0 && value != 1)) return 0;
    if (mm3_net_locked()) return 0;
    if (!cyc_set_extra_scanlines(value ? 128u : 0u)) return 0;
    reduce_slowdown = value;
    return 1;
}

static const char *const widescreen_choices[] = {"Off (4:3)", "16:9", "21:9", "32:9", "Fit window"};
static const char *const coop_view_choices[] = {"Shared screen", "Independent split screen", "Player one", "Player two"};
static const RecompRuntimeUiItem menu_items[] = {
    {.key = "mm3.no_flicker", .section = "Game", .label = "Remove sprite flicker",
     .description = "Draw enemies without the original sprite budget. Turn off for original sprite allocation.",
     .type = RECOMP_RUNTIME_UI_BOOL, .minimum = 0, .maximum = 1, .step = 1},
    {.key = "mm3.reduce_slowdown", .section = "Game", .label = "Reduce slowdown",
     .description = "Keep gameplay smooth in enemy-heavy scenes. Turn off for original NES timing.",
     .type = RECOMP_RUNTIME_UI_BOOL, .minimum = 0, .maximum = 1, .step = 1},
    {.key = "mm3.widescreen", .section = "Display", .label = "Widescreen (aspect ratio)",
     .description = "Show more of each stage at the sides. Menus and cutscenes stay 4:3.",
     .type = RECOMP_RUNTIME_UI_CHOICE, .minimum = NES_VIDEO_STOCK, .maximum = NES_VIDEO_FIT, .step = 1,
     .choices = widescreen_choices, .choice_count = 5},
    {.key = "mm3.coop_view", .section = "Display", .label = "Two-player view",
     .description = "Choose a shared screen or either independent player view. Online matches keep their agreed shared or independent simulation.",
     .type = RECOMP_RUNTIME_UI_CHOICE, .minimum = 0, .maximum = 3, .step = 1,
     .choices = coop_view_choices, .choice_count = 4}
};
static int menu_enabled(void *ctx, const RecompRuntimeUiItem *item)
{
    (void)ctx;
    if (!strcmp(item->key,"mm3.coop_view")) return mm3_coop_enabled();
    return !mm3_net_locked();
}
#ifdef CYC_HOST_EXTRAS_HAS_NETPLAY_VALUE_POLICY
static bool netplay_menu_value_allowed(void *ctx, const RecompRuntimeUiItem *item, int value)
{
    (void)ctx;
    return !strcmp(item->key,"mm3.coop_view") && mm3_net_locked() && mm3_coop_independent() && value >= 1 && value <= 3;
}
#endif
static const RecompRuntimeUiCallbacks menu_callbacks = {.get_value = get_value, .set_value = set_value, .is_enabled = menu_enabled};
#endif

#ifdef CYC_WITH_SDL
static void tcp_slowdown(int id, const char *line)
{
    bool enabled;
    if (cyc_tcp_bool(line, "enabled", &enabled)) {
        if (mm3_net_locked()) { cyc_tcp_err(id,"timing is fixed for this match");return; }
        if (!cyc_set_extra_scanlines(enabled ? 128u : 0u)) {
            cyc_tcp_err(id, "CPU budget enhancement unavailable"); return;
        }
        reduce_slowdown = enabled;
    }
    char fields[96];
    snprintf(fields, sizeof(fields), "\"enabled\":%s,\"extra_scanlines\":%u",
             cyc_extra_scanlines() ? "true" : "false", cyc_extra_scanlines());
    cyc_tcp_ok(id, fields);
}

static void tcp_widescreen(int id, const char *line)
{
    char mode[16];
    if (cyc_tcp_str(line, "mode", mode, sizeof(mode)) && !mm3_ws_set_mode_name(mode)) {
        cyc_tcp_err(id, "mode: off, 16:9, 21:9, 32:9 or fit"); return;
    }
    bool check;
    if (cyc_tcp_bool(line, "check", &check)) mm3_ws_set_check(check);
    bool no_flicker;
    if (cyc_tcp_bool(line,"no_flicker",&no_flicker) && !mm3_ws_set_no_flicker(no_flicker)) {
        cyc_tcp_err(id,"sprite allocation is fixed for this match"); return;
    }
    char fields[768];
    mm3_ws_describe(fields, sizeof(fields));
    cyc_tcp_ok(id, fields);
}

/* Test driving only (refill health on a scripted route): a CPU RAM store. */
static void tcp_poke(int id, const char *line)
{
    if (mm3_net_locked()) { cyc_tcp_err(id,"gameplay stores are unavailable during a match");return; }
    long addr, value;
    if (!cyc_tcp_long(line, "addr", &addr) || !cyc_tcp_long(line, "value", &value) ||
        addr < 0 || addr > 0x7FF || value < 0 || value > 255 || !cyc_mod_poke((uint16_t)addr, (uint8_t)value)) {
        cyc_tcp_err(id, "addr 0-0x7FF and value 0-255 required"); return;
    }
    cyc_tcp_ok(id, NULL);
}

static void tcp_setup(void *ctx)
{
    (void)ctx;
    cyc_tcp_register("mm3_poke", "store a CPU RAM byte: addr, value (test driving)", tcp_poke);
    cyc_tcp_register("mm3_slowdown", "query/set {enabled: bool} slowdown reduction", tcp_slowdown);
    cyc_tcp_register("mm3_ws", "widescreen state; set {mode: off|16:9|21:9|32:9|fit, no_flicker: bool}", tcp_widescreen);
    mm3_mods_tcp_setup();
    mm3_coop_tcp_setup();
}
#endif

static void observe(const CycTraceCycle *c)
{
    if (c->dma) return;
    if (c->kind == 'R' && c->addr == 0xFFFA) {
        const uint8_t *ram = cyc_cpu_ram();
        nmi++;
        /* Verified in the ROM: C015/C017/C019 skip presentation when the
         * update flag EE or the secondary busy flag 9A is nonzero. */
        if (ram[0xEE] || ram[0x9A]) busy++;
    }
    if (c->kind == 'W' && c->addr == 0xEE) {
        if (previous_busy && !c->value) complete++;
        previous_busy = c->value;
    }
}

static void close_stats(void) { if (stats) fclose(stats); stats = NULL; }

static bool option(void *ctx, const char *name, const char *value)
{
    (void)ctx;
    mm3_net_note_option(name);
    if (mm3_mods_option(name, value)) return true;
    if (!strcmp(name, "--widescreen")) return mm3_ws_set_mode_name(value);
    if (!strcmp(name, "--no-flicker")) return (!strcmp(value,"on") || !strcmp(value,"off")) && mm3_ws_set_no_flicker(!strcmp(value,"on"));
    if (strcmp(name, "--mm3-frame-stats")) return false;
    stats = fopen(value, "w");
    if (!stats) return false;
    fputs("sample,cycles,nmi,busy_nmi,completed_updates,update_busy,secondary_busy,mode,x,y,level\n", stats);
    cyc_trace_enabled = true;
    cyc_trace_cycle_hook = observe;
    atexit(close_stats);
    return true;
}

static void begin(void *ctx)
{
    (void)ctx;
    mm3_coop_frame_begin();
    if (!stats) return;
    nmi = busy = complete = 0;
    start_cycles = cyc_cycle_count();
    previous_busy = cyc_cpu_ram()[0xEE];
}

static void end(void *ctx)
{
    (void)ctx;
    mm3_ws_frame_end();
    mm3_mods_frame_end();
    if (!stats) return;
    const uint8_t *r = cyc_cpu_ram();
    fprintf(stats, "%u,%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u\n", frame++,
            (unsigned long long)(cyc_cycle_count() - start_cycles), nmi, busy, complete,
            r[0xEE], r[0x9A], r[0x31], r[0x22], r[0xA0], r[0xAE]);
}

static void state_loaded(void *ctx)
{
    (void)ctx;
    mm3_ws_state_loaded();
}

static void input(void *ctx, uint8_t buttons[2])
{
    (void)ctx;
    mm3_mods_input(buttons);
}
static void audio_mix(void *ctx, int16_t *samples, size_t count)
{
    (void)ctx; mm3_charge_audio_mix(samples, count);
}

const CycHostExtras *cyc_host_extras(void)
{
    static const CycHostOption options[] = {
        {"--mm3-frame-stats", true, "FILE: observe ROM update completion and busy NMIs"},
        {"--widescreen", true, "off|16:9|21:9|32:9|fit: presented width (default fit)"},
        {"--no-flicker", true, "on|off: remove the native enemy sprite budget (default on)"},
        {"--weapon-cycle", true, "on|off: L/R cycles acquired weapons and Rush helpers"},
        {"--protoman", true, "on|off: enable character selection and solo Select exchange"},
        {"--proto-mode", true, "protoman|megaman: character traits or normal-stat reskin"},
        {"--proto-start", true, "protoman|megaman: starting solo character"},
        {"--charge", true, "on|off: optional MM4 charged Mega Buster"},
        {"--mm4-donor", true, "FILE: verified local Mega Man 4 (USA) source image"},
        {"--coop", true, "on|off: simultaneous native players"},
        {"--coop-p1", true, "megaman|protoman: complementary co-op roster"},
        {"--coop-view", true, "shared|split|p1|p2: co-op view"},
        {"--coop-wait-both", true, "on|off: both active players meet at room exits"},
        {"--coop-test-poke", true, "FRAME:SEAT:HEXADDR:HEXVALUE: bounded personal QA precondition"}
    };
    static const CycHostExtras extras = {
        .load_setting = load_setting, .save_settings = save_settings, .power_on = power_on,
        .frame_begin = begin, .frame_end = end, .state_loaded = state_loaded,
        .options = options, .option_count = sizeof options / sizeof options[0], .option = option,
        .input = input, .input_profile = &mm3_input_profile,
        .audio_rate = 48000, .audio_mix = audio_mix,
#ifdef CYC_WITH_RECOMP_UI
        .menu_items = menu_items, .menu_item_count = sizeof menu_items / sizeof menu_items[0], .menu_callbacks = &menu_callbacks,
#ifdef CYC_HOST_EXTRAS_HAS_NETPLAY_VALUE_POLICY
        .menu_netplay_value_allowed = netplay_menu_value_allowed,
#endif
#endif
#ifdef CYC_WITH_SDL
        .tcp_setup = tcp_setup,
#endif
    };
    return &extras;
}
