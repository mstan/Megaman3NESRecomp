/* Cycle-host enhancements and an optional frame-pacing observer. */
#include "cyc_core.h"
#include "cyc_host_extras.h"
#include "cyc_trace.h"
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

static void power_on(void *ctx)
{
    (void)ctx;
    cyc_set_extra_scanlines(reduce_slowdown ? 128u : 0u);
}

static void load_setting(void *ctx, const char *key, const char *value)
{
    (void)ctx;
    if (!strcmp(key, "ReduceSlowdown")) {
        if (!strcmp(value, "0")) reduce_slowdown = 0;
        else if (!strcmp(value, "1")) reduce_slowdown = 1;
    }
}

static void save_settings(void *ctx, FILE *f)
{
    (void)ctx;
    reduce_slowdown = cyc_extra_scanlines() != 0;
    fprintf(f, "ReduceSlowdown = %d\n", reduce_slowdown);
}

#ifdef CYC_WITH_RECOMP_UI
static int get_value(void *ctx, const RecompRuntimeUiItem *item, int *out)
{
    (void)ctx;
    if (strcmp(item->key, "mm3.reduce_slowdown")) return 0;
    *out = cyc_extra_scanlines() != 0;
    return 1;
}

static int set_value(void *ctx, const RecompRuntimeUiItem *item, int value)
{
    (void)ctx;
    if (strcmp(item->key, "mm3.reduce_slowdown") || (value != 0 && value != 1)) return 0;
    if (!cyc_set_extra_scanlines(value ? 128u : 0u)) return 0;
    reduce_slowdown = value;
    return 1;
}

static const RecompRuntimeUiItem menu_items[] = {
    {.key = "mm3.reduce_slowdown", .section = "Game", .label = "Reduce slowdown",
     .description = "Keep gameplay smooth in enemy-heavy scenes. Turn off for original NES timing.",
     .type = RECOMP_RUNTIME_UI_BOOL, .minimum = 0, .maximum = 1, .step = 1}
};
static const RecompRuntimeUiCallbacks menu_callbacks = {.get_value = get_value, .set_value = set_value};
#endif

#ifdef CYC_WITH_SDL
static void tcp_slowdown(int id, const char *line)
{
    bool enabled;
    if (cyc_tcp_bool(line, "enabled", &enabled)) {
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

static void tcp_setup(void *ctx)
{
    (void)ctx;
    cyc_tcp_register("mm3_slowdown", "query/set {enabled: bool} slowdown reduction", tcp_slowdown);
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
    if (!stats) return;
    nmi = busy = complete = 0;
    start_cycles = cyc_cycle_count();
    previous_busy = cyc_cpu_ram()[0xEE];
}

static void end(void *ctx)
{
    (void)ctx;
    if (!stats) return;
    const uint8_t *r = cyc_cpu_ram();
    fprintf(stats, "%u,%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u\n", frame++,
            (unsigned long long)(cyc_cycle_count() - start_cycles), nmi, busy, complete,
            r[0xEE], r[0x9A], r[0x31], r[0x22], r[0xA0], r[0xAE]);
}

const CycHostExtras *cyc_host_extras(void)
{
    static const CycHostOption options[] = {
        {"--mm3-frame-stats", true, "FILE: observe ROM update completion and busy NMIs"}
    };
    static const CycHostExtras extras = {
        .load_setting = load_setting, .save_settings = save_settings, .power_on = power_on,
        .frame_begin = begin, .frame_end = end,
        .options = options, .option_count = 1, .option = option,
#ifdef CYC_WITH_RECOMP_UI
        .menu_items = menu_items, .menu_item_count = 1, .menu_callbacks = &menu_callbacks,
#endif
#ifdef CYC_WITH_SDL
        .tcp_setup = tcp_setup,
#endif
    };
    return &extras;
}
