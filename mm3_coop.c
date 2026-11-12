/* Two native controllers share one stage. Only named personal RAM is projected. */
#include "mm3_coop.h"
#include "mm3_mods.h"
#include "mm3_proto.h"
#include "mm3_charge.h"
#include "mm3_widescreen.h"
#include "mm3_coop_menu.h"
#include "mm3_world.h"
#include "mm3_net.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_render.h"
#include "cyc_ring.h"
#include "cyc_video.h"
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
enum { TELE_NONE, TELE_OUT, TELE_HIDDEN, TELE_IN, TELE_OPEN };
typedef struct {
    char magic[4];
    uint8_t enabled, withdrawn, advanced, hold[2], armed[2], previous[2], teleport[2];
    int16_t floor[2];
    uint8_t restarting, revive;
    int8_t checkpoint;
    uint64_t withdrawals[2], rejoins[2];
} Lifecycle;
static Lifecycle L;
typedef struct {
    char magic[4];
    uint64_t mask;
    uint8_t building[256], shown[256], cursor, seen, valid;
    int8_t insert;
    uint8_t building_owner, shown_owner;
} Priority;
static Priority P;
/* These are the original camera coroutine's entry/return boundaries. Follow
 * only its native motion; health, inventory and character state stay personal. */
typedef struct {
    char magic[4];
    uint8_t active, priming, stack, banks[2], scratch[16];
    uint16_t entry;
    CycModRegs original;
    uint64_t horizontal, vertical;
} Transition;
static Transition T;
typedef struct {
    char magic[4];
    uint8_t enabled,waiting,resume,flag[2],direction[2],page[2];
} ExitWait;
static ExitWait E;
static uint8_t s_checkpoints[23][8];
static int s_checkpoint_tables;
static int s_on, s_roster, s_view, s_wait_both, s_inside, s_projectiles;
static unsigned s_count;
static uint16_t s_address[PERSONAL], s_index[2048];
static struct { uint32_t frame; uint16_t address; uint8_t seat, value; } s_pokes[32];
static int s_poke_count;
int mm3_coop_test_pokes(void) { return s_poke_count; }
static uint8_t ram(unsigned a) { return cyc_cpu_ram()[a & 2047]; }
static void poke(unsigned a, unsigned v) { cyc_mod_poke((uint16_t)a, (uint8_t)v); }
static void controls(Player *p);
int mm3_coop_enabled(void) { return s_on; }
int mm3_coop_scene_active(void) { return s_on && C.initialized; }
int mm3_coop_independent(void) { return s_on && s_view != 0; }
int mm3_coop_view_mode(void) { return s_view; }
int mm3_coop_wait_both(void) { return s_wait_both; }
int mm3_coop_view_locked(void) { return T.active || ram(0x50) || !(ram(0x2A)&0x20); }
void mm3_coop_view_policy(void)
{
    cyc_video_override_width(mm3_coop_independent() ? (s_view == 1 ? 512 : 256) : 0);
    mm3_ws_view_changed();
}
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
    /* Native Spark Shock associates each of its two personal projectiles
     * with a shared target slot. Append the fields to the existing domain. */
    s_address[s_count++] = 0x5B;s_address[s_count++] = 0x5C;
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
static int available(int seat) { return !(L.withdrawn & (1u << seat)) && (mm3_coop_read(seat, 0xA2) & 31) && mm3_coop_read(seat, 0x30) != 0x0E; }
static int alive(int seat) { return !(E.waiting & (1u<<seat)) && available(seat); }
static int simulation_read(int seat, unsigned a)
{ return seat == C.current ? ram(a) : mm3_coop_read(seat,a); }
static int simulation_available(int seat)
{ return !(L.withdrawn & (1u<<seat)) && (simulation_read(seat,0xA2)&31) && simulation_read(seat,0x30) != 0x0E; }
static int simulation_alive(int seat)
{ return !(E.waiting & (1u<<seat)) && simulation_available(seat); }
static void wait_finish(int resume)
{
    unsigned waiting = E.waiting;
    for (int seat = 0; seat < 2; seat++) if (waiting & (1u<<seat)) {
        C.players[seat].ram[s_index[0x300]-1] = E.flag[seat];
        if (C.current == seat) poke(0x300,E.flag[seat]);
    }
    E.waiting = 0;E.resume = resume ? (uint8_t)waiting : 0;
}
static void change_anchor(int seat)
{
    if (C.anchor == seat) return;
    capture(&C.players[C.anchor]);
    C.anchor = C.current = (uint8_t)seat;project(&C.players[seat]);
    controls(&C.players[seat]);C.handoffs++;
}
int mm3_coop_nearest(int x, int y)
{
    int chosen = C.anchor, best = 0x7FFFFFFF;
    if (!s_on || !C.initialized) return chosen;
    for (int seat = 0; seat < 2; seat++) if (simulation_alive(seat)) {
        int distance = abs(x-simulation_read(seat,0x360)-simulation_read(seat,0x380)*256) + abs(y-simulation_read(seat,0x3C0));
        if (distance < best) { best = distance; chosen = seat; }
    }
    return chosen;
}
int mm3_coop_spawn_project(int seat)
{
    if (!cyc_mod_isolated() || !s_on || !C.initialized || seat < 0 || seat > 1) return 0;
    if (seat != C.current) project_combat(&C.players[seat]);
    poke(0x27,ram(0x360)); return 1;
}
int mm3_coop_view_rects(int left[2])
{
    if (!mm3_coop_independent() || !C.initialized || C.stage != ram(0x22)) return 0;
    int camera = ram(0xF9)*256+ram(0xFC), lo,hi;
    int unlocked = !T.active && !ram(0x50) && (ram(0x2A)&0x20) && mm3_ws_room_limits(&lo,&hi);
    for (int seat = 0; seat < 2; seat++) {
        int who = simulation_alive(seat) ? seat : C.anchor;
        left[seat] = camera;
        if (unlocked) {
            int x = simulation_read(who,0x360)+simulation_read(who,0x380)*256;
            left[seat] = x-128;
            if (left[seat] < lo) left[seat] = lo;
            if (left[seat]+256 > hi) left[seat] = hi-256;
        }
    }
    return 2;
}
static void follow_partner(void)
{
    if (!T.active || !alive(C.anchor ^ 1)) return;
    static const uint16_t fields[] = {
        0x30,0x31,0x33,0x34,0x35,0x36,0x37,0x38,0x3A,0x41,0x43,0x44,0x5D,
        0x300,0x340,0x360,0x380,0x3A0,0x3C0,0x3E0,0x400,0x420,0x440,0x460,
        0x480,0x4A0,0x500,0x580,0x5A0,0x5C0
    };
    Player *p = &C.players[C.anchor ^ 1];
    for (unsigned i = 0; i < sizeof fields / sizeof *fields; i++) p->ram[s_index[fields[i]]-1] = ram(fields[i]);
    unsigned i = s_index[0x5E0]-1;
    p->ram[i] = (uint8_t)((p->ram[i] & 0x80) | (ram(0x5E0) & 0x7F));
}
static void victory_follow(void)
{
    if (T.active == 2) return;
    wait_finish(0);
    capture(&C.players[C.anchor]);
    for (int seat = 0; seat < 2; seat++) {
        C.current = (uint8_t)seat; project(&C.players[seat]); mm3_charge_cancel();
        for (int slot = 1; slot < 16; slot++) poke(0x300+slot,0);
        poke(0x5B,0);poke(0x5C,0);poke(0x32,0); poke(0xB5,0); capture(&C.players[seat]);
    }
    C.current = C.anchor; project(&C.players[C.anchor]); T.active = 2; T.priming = 0;
    follow_partner();
}
static int source_camera(int next)
{
    int old = ram(0xF9)*256+ram(0xFC);
    if (next == old) return 1;
    int cursor = ram(0x29)*32+ram(0x24)+next/8-old/8;
    int base = ram(0xF9)-ram(0x2D);
    /* Finish the picture already drawn before replacing the PPU's backing
     * ring. The next native draw and NMI publish the new camera together. */
    int width,height;cyc_render_present(&width,&height);
    if (!mm3_ws_rebase_camera(next)) { C.failures++; return 0; }
    poke(0x24,cursor&31);poke(0x29,(unsigned)cursor>>5);
    poke(0xF9,next>>8);poke(0xFC,next);poke(0x25,next);
    poke(0x2D,(next>>8)-base);poke(0x27,ram(0x360));
    /* Pending packets address the previous physical ring. Native camera and
     * room coroutines resume with the new ring and retain their own gates. */
    poke(0x19,0);poke(0x1A,0);
    return 1;
}
/* Only select which existing controller asks the native camera to proceed.
 * Door enemies, boss gates, events and room progression remain cartridge code. */
static int exit_request(int seat,int lo,int hi,int *camera)
{
    if (!simulation_alive(seat) || L.teleport[seat] || simulation_read(seat,0x30) >= 0x0C) return 0;
    int x = simulation_read(seat,0x360)+simulation_read(seat,0x380)*256;
    if (x < lo || x >= hi) return 0;
    int next = x-128;
    if (next < lo) next = lo;
    if (next+256 > hi) next = hi-256;
    *camera = next;
    int page = x>>8,room = ram(0x2B);
    if ((ram(0x2A)&0x20) && page == (hi-1)/256 && (x&255) >= 0xE5 &&
        (cyc_mod_peek((uint16_t)(0xAA41+room))&0xE0) == 0x20) {
        *camera = hi-256;return 1;
    }
    int y = simulation_read(seat,0x3C0),direction = 0;
    if (y >= 0xE8 && !(simulation_read(seat,0x3E0)&0x80)) direction = 0x40;
    else if (y < 9 && simulation_read(seat,0x30) == 3) direction = 0x80;
    if (!direction || (next&255)) return 0;
    /* The original link validator is finite: its mapper/RAM writes stay
     * inside this scope. The real camera repeats it before actual scrolling. */
    CycModRegs r = {0};cyc_mod_regs(&r);
    int base = ram(0xF9)-ram(0x2D);
    if (!cyc_mod_isolate_begin()) { C.failures++;return 0; }
    if (seat != C.current) project(&C.players[seat]);
    poke(0xF9,next>>8);poke(0xFC,0);poke(0x2D,(next>>8)-base);poke(0x10,direction);
    int ok = cyc_mod_call(0xE3C7,&r);
    cyc_mod_isolate_end();
    if (!ok) { C.failures++;return 0; }
    return r.p&1 ? direction : 0;
}
static void personal_write(int seat,unsigned a,unsigned value)
{
    C.players[seat].ram[s_index[a]-1] = (uint8_t)value;
    if (seat == C.current) poke(a,value);
}
static void wait_hold(int seat,int direction)
{
    if (direction == 1) personal_write(seat,0x360,0xE8);
    else {
        personal_write(seat,0x3C0,direction == 0x80 ? 24 : 216);
        personal_write(seat,0x3E0,0);personal_write(seat,0x30,1);
        personal_write(seat,0x420,0);personal_write(seat,0x440,0);personal_write(seat,0x460,0);
    }
}
static void wait_hide(int seat,int direction,int camera)
{
    int previous = C.current;
    C.current = (uint8_t)seat;project(&C.players[seat]);mm3_charge_cancel();
    E.flag[seat] = ram(0x300);E.direction[seat] = (uint8_t)direction;E.page[seat] = (uint8_t)(camera>>8);
    for (int slot = 1; slot < 16; slot++) poke(0x300+slot,0);
    poke(0x5B,0);poke(0x5C,0);poke(0x300,0);poke(0x32,0);poke(0xB5,0);capture(&C.players[seat]);
    E.waiting |= (uint8_t)(1u<<seat);
    C.current = (uint8_t)previous;project(&C.players[previous]);
}
static int before_camera(uint16_t address)
{
    (void)address;
    if (!s_on || !C.initialized || s_inside || C.scope || C.ai || T.active ||
        cyc_mod_isolated() || ram(0x50) || ram(0xF8) || ram(0xFA) || ram(0xFD) || !simulation_alive(C.anchor)) return 0;
    int lo,hi;
    if (!mm3_ws_room_limits(&lo,&hi)) return 0;
    capture(&C.players[C.anchor]);
    if (E.resume) {
        int seat = E.resume&1 ? 0 : 1;
        E.resume = 0;change_anchor(seat);source_camera(E.page[seat]*256);return 0;
    }
    int entry[2] = {0,0},request[2],allowed[2] = {0,0},blocked = 0;
    request[0] = exit_request(0,lo,hi,&entry[0]);request[1] = exit_request(1,lo,hi,&entry[1]);
    /* Inspect both controllers before changing either. A horizontal waiter
     * must not starve a partner's valid vertical request elsewhere in a room. */
    int order[2] = {C.anchor^1,C.anchor};
    for (int i = 0; i < 2; i++) {
        int seat = order[i],peer = seat^1,direction = request[seat];
        if (!direction) continue;
        int matching = (request[peer] == direction && entry[peer] == entry[seat]) ||
            ((E.waiting&(1u<<peer)) && E.direction[peer] == direction && E.page[peer] == entry[seat]/256);
        if (!s_wait_both || !simulation_available(peer) || matching) {
            if (matching) wait_finish(0);
            allowed[seat] = 1;
        } else {
            blocked = 1;
            if (direction == 1 || E.waiting) wait_hold(seat,direction);
            else wait_hide(seat,direction,entry[seat]);
        }
    }
    if (!alive(C.anchor) && alive(C.anchor^1)) change_anchor(C.anchor^1);
    int lead = allowed[C.anchor] ? C.anchor : allowed[C.anchor^1] ? C.anchor^1 : -1;
    if (lead >= 0) {
        change_anchor(lead);source_camera(entry[lead]);return 0;
    }
    if (!(ram(0x2A)&0x20)) return blocked;
    int old = ram(0xF9)*256+ram(0xFC),x = ram(0x360)+ram(0x380)*256;
    if (x >= old && x < old+256) return blocked;
    int next = x-128;
    if (next < lo) next = lo;
    if (next+256 > hi) next = hi-256;
    source_camera(next);return blocked;
}
static int transition_begin(uint16_t address)
{
    if (!s_on || !C.initialized || s_inside || C.scope || C.ai || cyc_mod_isolated() || T.active) return 0;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (r.s < 6) { C.failures++; return 0; }
    wait_finish(0);
    capture(&C.players[C.anchor]);
    for (int seat = 0; seat < 2; seat++) {
        C.current = (uint8_t)seat; project(&C.players[seat]); mm3_charge_cancel();
        for (int slot = 1; slot < 16; slot++) poke(0x300+slot,0);
        poke(0x5B,0);poke(0x5C,0);poke(0x32,0); poke(0xB5,0); capture(&C.players[seat]);
    }
    C.current = C.anchor; project(&C.players[C.anchor]);
    T.active = 1; T.priming = 1; T.entry = address; T.stack = r.s; T.original = r;
    T.banks[0] = ram(0xF4); T.banks[1] = ram(0xF5);
    memcpy(T.scratch,cyc_cpu_ram(),sizeof T.scratch);
    if (address == 0xE2A5) T.horizontal++; else T.vertical++;
    follow_partner();
    /* The native shutter waits reuse old OAM. Publish the paired entry pose
     * before them, then restore the native PRG mapping and entry temporaries.
     * Real RTS frames keep this continuation in the ordinary machine state. */
    for (int i = 0; i < 256; i += 4) poke(0x200+i,0xF8);
    poke(0x97,4);
    const uint16_t calls[] = {0xF034,0xFF6B,address};
    uint8_t sp = (uint8_t)(r.s-6);
    for (int i = 0; i < 3; i++) {
        unsigned next = calls[i]-1;
        poke(0x100+(uint8_t)(sp+1+i*2),next); poke(0x100+(uint8_t)(sp+2+i*2),next>>8);
    }
    r.s = sp; cyc_mod_set_regs(&r); return 1;
}
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
static int checkpoint(void)
{
    if (!s_checkpoint_tables) {
        size_t size = cyc_mod_copy_cart_payload(NULL,0); uint8_t *bytes = (uint8_t *)malloc(size);
        if (!bytes || size < 0x40000 || cyc_mod_copy_cart_payload(bytes,size) != size) {
            free(bytes); s_checkpoint_tables = -1; C.failures++; return -1;
        }
        for (int stage = 0; stage < 23; stage++) memcpy(s_checkpoints[stage],bytes + stage*8192 + 0xAF8,8);
        free(bytes); s_checkpoint_tables = 1;
    }
    if (s_checkpoint_tables < 0 || ram(0x22) >= 23) return -1;
    int index = -1;
    for (int i = 0; i < 8 && s_checkpoints[ram(0x22)][i] != 0xFF; i++) {
        if (ram(0x6F) < s_checkpoints[ram(0x22)][i]) break;
        index = i;
    }
    return index;
}
static void initialize(void)
{
    memset(&E,0,sizeof E);
    int retain = L.restarting;
    uint8_t ammo[2][11];
    if (retain) for (int seat = 0; seat < 2; seat++) for (int a = 0; a < 11; a++)
        ammo[seat][a] = C.players[seat].ram[s_index[0xA3 + a] - 1];
    memset(&L, 0, sizeof L);
    L.checkpoint = (int8_t)checkpoint();
    mm3_charge_new_team();
    if (retain && !mm3_mods_equip(0,0)) C.failures++;
    capture(&C.players[C.anchor]);
    uint8_t held = C.players[C.anchor ^ 1].held, previous = C.players[C.anchor ^ 1].previous;
    C.players[C.anchor ^ 1] = C.players[C.anchor];
    Player *p = &C.players[C.anchor ^ 1];
    p->held = held; p->previous = previous;
    for (unsigned slot = 1; slot < 16; slot++) p->ram[s_index[0x300 + slot] - 1] = 0;
    if (retain) {
        for (int seat = 0; seat < 2; seat++) for (int a = 0; a < 11; a++)
            C.players[seat].ram[s_index[0xA3 + a] - 1] = ammo[seat][a];
        project(&C.players[C.anchor]);
    }
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
                !strncmp(h->id,"mm3.world.",10) ||
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
    int terrain = ram(0x22)==2 || ram(0x22)==9;
    if (!cyc_mod_isolate_begin()) return 0;
    mm3_world_private_begin();
    uint8_t world[24][16],bits[64],queue[128],dirty=0;
    int ok = isolated_hooks(1);
    if (ok && pool) {
        int left[2];
        if (mm3_coop_independent() && mm3_coop_view_rects(left)) {
            poke(0xFC,left[C.current]);poke(0xF9,left[C.current]>>8);
        }
        poke(0xF4, 0x1C); poke(0xF5, 0x1D);
        ok = cyc_mod_call(0xFF6B, r);
    }
    if (ok) { s_projectiles = pool; ok = cyc_mod_call(routine, r); s_projectiles = 0; }
    if (ok) {
        for(int f=0;f<24;f++)for(int slot=16;slot<32;slot++)world[f][slot-16]=ram(0x300+f*32+slot);
        if (terrain) memcpy(bits,cyc_cpu_ram()+0x110,sizeof bits);
        memcpy(queue,cyc_cpu_ram()+0x780,sizeof queue);dirty=ram(0x19);
        for (unsigned i = 0; i < s_count; i++) result[i] = ram(s_address[i]);
        next = ram(0xDA); memcpy(sounds, cyc_cpu_ram() + 0xDC, sizeof sounds);
    }
    isolated_hooks(0); cyc_mod_isolate_end();
    mm3_world_private_end(ok);
    if (ok) {
        for(int f=0;f<24;f++)for(int slot=16;slot<32;slot++) {
            unsigned a=0x300+f*32+slot;if(ram(a)!=world[f][slot-16])poke(a,world[f][slot-16]);
        }
        /* Only Gemini assigns this low stack-page region to terrain. */
        for(unsigned i=0;terrain && i<sizeof bits;i++)if(ram(0x110+i)!=bits[i])poke(0x110+i,bits[i]);
        for(unsigned i=0;i<sizeof queue;i++)if(ram(0x780+i)!=queue[i])poke(0x780+i,queue[i]);
        if(ram(0x19)!=dirty)poke(0x19,dirty);
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
    if (!s_on || !C.initialized || s_inside || C.scope || C.ai || cyc_mod_isolated() || r.x < 16 || r.x >= 32) return 0;
    int freezer = -1;
    for (int seat = 0; seat < 2; seat++) if (simulation_read(seat,0x5B) == r.x || simulation_read(seat,0x5C) == r.x) {
        freezer = seat;break;
    }
    if (freezer < 0 && (!(ram(0x300+r.x)&0x80) || ram(0x320+r.x) >= 0xA0)) return 0;
    unsigned routine = ram(0x320+r.x);
    /* These actors start the one shared HP-bar script on the native anchor.
     * A nearest-player projection would put that script in an isolated guest
     * controller, where its global fill writes are intentionally discarded. */
    if (freezer < 0 && ((routine >= 0x58 && routine <= 0x5F) || (routine >= 0x90 && routine <= 0x97))) return 0;
    capture_combat(&C.players[C.current]);
    int target_x = ram(0x360 + r.x) + ram(0x380 + r.x) * 256, target_y = ram(0x3C0 + r.x);
    int chosen = C.current, best = 0x7FFFFFFF;
    for (int seat = 0; seat < 2; seat++) if (alive(seat)) {
        int distance = abs(target_x - mm3_coop_read(seat, 0x360) - mm3_coop_read(seat, 0x380) * 256) +
            abs(target_y - mm3_coop_read(seat, 0x3C0));
        if (distance < best) { best = distance; chosen = seat; }
    }
    if (freezer >= 0) chosen = freezer;
    C.ai = freezer >= 0 ? 2 : 1; C.ai_owner = C.current; C.ai_stack = r.s; C.ai_x = ram(0x27);
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
    return r.a == 0xF2 && (ram(0x30) == 0x0E || ram(0x3D) == 0x0E) && available(C.current ^ 1);
}
int mm3_coop_dispatch(void)
{
    if (!s_on || s_inside || C.scope || C.ai || cyc_mod_isolated()) return 0;
    addresses();
    if (ram(0xF8) == 1 || ram(0x50) ||
        (ram(0x30) >= 0x0C && !(C.initialized && ram(0x30) == 0x0E && available(C.anchor^1))) ||
        (!C.initialized && ram(0x30) == 4)) return 0;
    if (!C.initialized || C.stage != ram(0x22)) initialize();
    if (ram(0x30) == 9) {
        C.players[C.anchor^1].previous = C.players[C.anchor^1].held;
        return 0;
    }
    L.advanced = 1;
    capture(&C.players[C.anchor]);
    if (!s_wait_both && E.waiting) wait_finish(1);
    /* Preserve the parked ladder/fall pose until the real native camera can
     * consume it. A released Up button must not detach an orphan survivor. */
    if (E.resume&(1u<<C.anchor)) return 1;
    int guest = C.anchor ^ 1;
    if ((E.waiting|E.resume)&(1u<<guest)) return 0;
    CycModRegs original = {0}, r; cyc_mod_regs(&original); r = original;
    uint8_t input[4] = {ram(0x14),ram(0x15),ram(0x16),ram(0x17)}, scratch[16];
    memcpy(scratch, cyc_cpu_ram(), sizeof scratch);
    s_inside = 1; C.current = (uint8_t)guest; project(&C.players[guest]); controls(&C.players[guest]);
    int teleport = L.teleport[guest];
    if (teleport) { poke(0x14, 0); poke(0x16, 0); poke(0x39, 2); }
    else mm3_mods_personal_dispatch();
    int ok = 1;
    if (teleport == TELE_IN) {
        int y = ram(0x3C0) + 16;
        if (y >= L.floor[guest]) {
            y = L.floor[guest]; L.teleport[guest] = TELE_OPEN;
            poke(0x5A0, 0); poke(0x5E0, 0); sound(0x34);
        }
        poke(0x3C0, y);
    } else if (teleport != TELE_HIDDEN) ok = native_call(0xCD34, &r, 0);
    if (ok && teleport == TELE_OUT && ram(0x3E0)) {
        L.teleport[guest] = TELE_HIDDEN; poke(0x300, 0);
    } else if (ok && teleport == TELE_OPEN && !ram(0x30)) {
        if (L.withdrawn & (1u << guest)) L.rejoins[guest]++;
        L.teleport[guest] = TELE_NONE; L.withdrawn &= (uint8_t)~(1u << guest);
        poke(0x39, 60); C.players[guest].previous = C.players[guest].held;
    }
    if (ok && ram(0x3D)) {
        poke(0x30, ram(0x3D)); poke(0x3D, 0);
        if (ram(0x30) == 0x0E) { if (!alive(C.anchor)) sound(0xF2); sound(0x17); }
    }
    if (ok && teleport != TELE_HIDDEN) ok = native_call(0x800C, &r, 1);
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
        int victory = T.active != 2 && kind == 2 && ram(0x30) == 0x0C && (ram(0x5A) & 0x80) && !(ram(0xB2) & 31);
        capture_combat(&C.players[C.current]); C.contacts[C.current]++;
        int guest = C.current;
        C.current = C.scope_owner;
        if (C.ai && C.current != C.anchor) project_combat(&C.players[C.current]);
        else project(&C.players[C.current]);
        if (victory) {
            /* The real guest hit ran the one native boss-death routine. Let
             * the native main player own its subsequent victory coroutine. */
            static const uint16_t script[] = {0x30,0x32,0x500,0x520,0x5A0,0x5C0,0x5E0};
            for (unsigned i = 0; i < sizeof script / sizeof *script; i++) poke(script[i],mm3_coop_read(guest,script[i]));
            victory_follow();
        }
        if (kind == 2 && C.ai == 2 && C.original.pc == 0x8083 && !(ram(0x4E0+C.original.x)&31)) {
            /* A partner's real native hit killed the frozen target. Release
             * only the shocks bound to it, so its native death AI can run. */
            for (int seat = 0; seat < 2; seat++) for (int slot = 1; slot <= 2; slot++)
                if (mm3_coop_read(seat,0x5A+slot) == C.original.x) {
                    personal_write(seat,0x5A+slot,0);personal_write(seat,0x300+slot,0);
                }
        }
        for (unsigned i = 0; i < sizeof C.scratch; i++) poke(i, C.scratch[i]);
        cyc_mod_set_regs(&C.original); C.scope = 0; return;
    }
    if (r.x < 16 || r.x >= 32 || !alive(C.current ^ 1)) return;
    /* Refights create their unique victory/orb actors in personal slots. They
     * need explicit one-owner transfer before this shared call can admit them. */
    if (kind == 2 && ram(0x320 + r.x) >= 0xA0 && ram(0x22) == 0x0F) return;
    /* Nearest-player AI borrows personal combat RAM without taking native
     * presentation ownership. Its collision must preserve that distinction. */
    if (C.ai && C.current != C.anchor) capture_combat(&C.players[C.current]);
    else capture(&C.players[C.current]);
    C.scope_owner = C.current; C.original = r;
    memcpy(C.scratch, cyc_cpu_ram(), sizeof C.scratch);
    C.current ^= 1; project_combat(&C.players[C.current]); C.scope = (uint8_t)kind;
    unsigned ret = entry - 1;
    poke(0x100 + r.s, ret >> 8); r.s--;
    poke(0x100 + r.s, ret); r.s--;
    cyc_mod_set_regs(&r);
}
void mm3_coop_contact(void) { collision(1, 0x8097); }
void mm3_coop_weapon_hit(void) { collision(2, 0x8102); }
static int frozen_weapon_hit(uint16_t address)
{
    if (!s_on || !C.initialized || s_inside || cyc_mod_isolated() || C.ai != 2) return 0;
    CycModRegs r = {0};cyc_mod_regs(&r);
    if (C.scope) {
        if (C.scope == 2 && C.original.pc == address && r.s == C.original.s) collision(2,address);
        return 0;
    }
    if (r.s < 4 || !alive(C.current^1)) return 0;
    /* The cartridge's frozen-actor branch omits ordinary weapon damage.
     * Keep its native Spark recheck, then run the partner's original damage
     * call on the real clock, returning to this exact contact boundary. */
    collision(2,address);
    if (C.scope != 2) return 0;
    cyc_mod_regs(&r);
    unsigned target = 0x8102-1;
    poke(0x100+r.s,target>>8);r.s--;poke(0x100+r.s,target);r.s--;
    cyc_mod_set_regs(&r);return 1;
}
void mm3_coop_input(uint8_t buttons[2])
{
    /* MM3 stores A at bit7 and Right at bit0, exactly the host seat format. */
    for (int i = 0; i < 2; i++) C.players[i].held = nes_input_seat(i + 1);
    if (s_on) {
        buttons[0] = C.initialized && (alive(0) || alive(1)) ? nes_input_seat(C.anchor + 1) :
            nes_input_seat(1) | nes_input_seat(2);
        buttons[1] = 0;
    }
    mm3_coop_menu_input(buttons);
}
static int safe_rejoin(int peer, int *x, int *y)
{
    static const int offsets[] = {24,-24,0,8,-8,16,-16,32,-32};
    if (!alive(peer) || L.teleport[peer] || mm3_coop_read(peer,0x30) || mm3_coop_read(peer,0x3E0)) return 0;
    int yy = mm3_coop_read(peer,0x3C0), base = mm3_coop_read(peer,0x360) + mm3_coop_read(peer,0x380)*256;
    if (yy < 16 || yy > 222 || !cyc_mod_isolate_begin()) return 0;
    int found = 0; project(&C.players[peer]);
    CycModRegs r = {0}; cyc_mod_regs(&r); r.x = 0;
    for (unsigned i = 0; i < sizeof offsets / sizeof offsets[0] && !found; i++) {
        int xx = base + offsets[i]; if (xx < 8 || xx > 65527) continue;
        poke(0x360,xx); poke(0x380,xx >> 8); poke(0x3C0,yy);
        r.x = 0; r.y = 0;
        int ok = cyc_mod_call(0xE8D6,&r) && ram(0x42) == 0x10 && ram(0x43) == 0x10 && ram(0x44) == 0x10;
        r.x = 0; r.y = 1;
        ok = ok && cyc_mod_call(0xE8D6,&r) && !(ram(0x10) & 0xF0);
        /* Check the middle of the standing body as well as its native head. */
        poke(0x3C0,yy + 12); r.x = 0; r.y = 1;
        ok = ok && cyc_mod_call(0xE8D6,&r) && !(ram(0x10) & 0xF0);
        if (ok) { *x = xx; *y = yy; found = 1; }
    }
    cyc_mod_isolate_end(); return found;
}
static void transport(int seat, int arrival, int x, int y, int heal)
{
    int previous = C.current; capture(&C.players[previous]);
    C.current = (uint8_t)seat; project(&C.players[seat]); mm3_charge_cancel();
    if (heal) {
        uint8_t freeze[2] = {ram(0x5B),ram(0x5C)};
        if (!mm3_mods_equip(0,0)) C.failures++;
        poke(0x5B,freeze[0]); poke(0x5C,freeze[1]); poke(0xA2,0x9C);
        poke(0x3C,0); poke(0x3F,0);
    }
    for (int slot = 1; slot < 16; slot++) poke(0x300 + slot,0);
    poke(0x5B,0);poke(0x5C,0);
    poke(0x32,0); poke(0x33,0); poke(0x36,0); poke(0x37,0); poke(0x38,0);
    poke(0x3D,0); poke(0xB5,0); poke(0x39,2); poke(0x500,0);
    poke(0x5C0,0x13); poke(0x5E0,0); poke(0x440,0xFF); poke(0x460,0xFF);
    if (arrival) {
        poke(0x300,0x80); poke(0x30,4); poke(0x5A0,0);
        poke(0x360,x); poke(0x380,x >> 8); poke(0x3C0,y < 36 ? y - 16 : 20); poke(0x3E0,0);
        L.floor[seat] = (int16_t)y; L.teleport[seat] = TELE_IN;
    } else {
        /* The original DBE1 beam animation and acceleration run in a private
         * call. Its stage-clear writes are outside the personal commit. */
        poke(0x300,0x81); poke(0x30,0x0D); poke(0x5A0,4);
        L.teleport[seat] = TELE_OUT; L.withdrawn |= (uint8_t)(1u << seat);
        L.withdrawals[seat]++; sound(0x34);
    }
    C.players[seat].previous = C.players[seat].held; capture(&C.players[seat]);
    C.current = (uint8_t)previous; project(&C.players[previous]);
}
static void select_tick(void)
{
    int gameplay = L.advanced && !T.active && !mm3_coop_menu_active() && !ram(0x50) && ram(0xF8) != 1;
    L.advanced = 0;
    for (int seat = 0; seat < 2; seat++) {
        int held = (C.players[seat].held & 0x20) != 0, fresh = held && !L.previous[seat];
        L.previous[seat] = (uint8_t)held;
        if (!held) { L.armed[seat] = 1; L.hold[seat] = 0; }
        if (!gameplay || L.teleport[seat] == TELE_OUT || L.teleport[seat] >= TELE_IN || !alive(seat ^ 1) || L.teleport[seat ^ 1]) {
            L.hold[seat] = 0; continue;
        }
        unsigned state = mm3_coop_read(seat,0x30), peer_state = mm3_coop_read(seat ^ 1,0x30);
        if (peer_state >= 6 || ram(0x5A) || mm3_coop_read(seat ^ 1,0x3D)) { L.hold[seat] = 0; continue; }
        if (L.withdrawn & (1u << seat)) {
            int x,y;
            if (fresh && L.armed[seat] && safe_rejoin(seat ^ 1,&x,&y)) transport(seat,1,x,y,0);
        } else if (!alive(seat) || state >= 6 || mm3_coop_read(seat,0x3D)) L.hold[seat] = 0;
        else if (held && L.armed[seat] && ++L.hold[seat] >= 90) {
            transport(seat,0,0,0,0); L.hold[seat] = 0; L.armed[seat] = 0;
        }
    }
    if (gameplay && !ram(0x5A)) {
        int next = checkpoint();
        if (next > L.checkpoint) {
            L.checkpoint = (int8_t)next;
            for (int seat = 0; seat < 2; seat++) if (!(L.withdrawn & (1u << seat)) && !available(seat)) L.revive |= (uint8_t)(1u << seat);
        }
        for (int seat = 0; seat < 2; seat++) if ((L.revive & (1u << seat)) && !L.teleport[seat]) {
            int x,y;
            if (safe_rejoin(seat ^ 1,&x,&y)) { transport(seat,1,x,y,1); L.revive &= (uint8_t)~(1u << seat); }
        }
    }
}
void mm3_coop_frame_end(void)
{
    if (!s_on || !C.initialized || C.scope || C.ai || mm3_coop_menu_checking()) return;
    capture(&C.players[C.anchor]);
    if (E.waiting && !available(E.waiting&1 ? 1 : 0)) wait_finish(1);
    if (ram(0x30) == 0x0C && (ram(0x5A) & 0x80) && !(ram(0xB2) & 31)) victory_follow();
    select_tick();
    if (!alive(C.anchor) && alive(C.anchor ^ 1)) {
        change_anchor(C.anchor^1);
        poke(0x14, 0); poke(0x16, C.players[C.anchor].held);
    }
    poke(0x15, 0); poke(0x17, 0); poke(0x98, 0);
    for (int i = 0; i < 2; i++) C.players[i].previous = C.players[i].held;
}
void mm3_coop_frame_begin(void)
{
    L.advanced = 0;
    if (!s_on) return;
    if (C.initialized && !C.scope && C.stage != ram(0x22)) {
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
    if (s_on && T.active && !cyc_mod_isolated()) follow_partner();
    if (!s_on || !C.initialized || !C.ai || C.draw || C.current == C.anchor || cyc_mod_isolated()) return;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    capture_combat(&C.players[C.current]); C.draw = 1; C.draw_owner = C.current; C.draw_stack = r.s;
    C.current = C.anchor; project_combat(&C.players[C.anchor]);
}
static void after_return(void)
{
    if (!s_on || cyc_mod_isolated()) return;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (T.active) {
        if (T.priming == 1 && r.pc == 0xFF6B) {
            poke(0xF4,T.banks[0]); poke(0xF5,T.banks[1]); T.priming = 2;
        } else if (T.priming == 2 && r.pc == T.entry) {
            for (unsigned i = 0; i < sizeof T.scratch; i++) poke(i,T.scratch[i]);
            cyc_mod_set_regs(&T.original); T.priming = 0;
        } else if (T.active == 1 && !T.priming && r.s == (uint8_t)(T.stack+2)) {
            follow_partner(); T.active = 0;
        }
    }
    if (!C.draw) return;
    if (r.s != (uint8_t)(C.draw_stack + 2)) return;
    capture_combat(&C.players[C.anchor]); C.current = C.draw_owner; project_combat(&C.players[C.current]); C.draw = 0;
}
/* Graphics are captured through the native per-entity draw routine. */
static void draw_player(int guest)
{
    int camera = ram(0xF9) * 256 + ram(0xFC);
    if (L.teleport[guest] == TELE_HIDDEN || (E.waiting&(1u<<guest))) { C.players[guest].building.count = 0; return; }
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
void mm3_coop_draw(void)
{
    if (!s_on || !C.initialized || C.scope || (C.ai && !C.draw) || s_inside || ram(0xF8) == 1 ||
        (ram(0x30) >= 0x0C && T.active != 2 && !(ram(0x30) == 0x0E && alive(C.anchor^1)))) return;
    capture(&C.players[C.anchor]);
    /* Each independent view owns a native camera. Drawing actor0 against the
     * old common camera can deactivate a living player after a distant handoff. */
    if (mm3_coop_independent()) draw_player(C.anchor);
    draw_player(C.anchor^1);
}
int mm3_coop_latch(void)
{
    if (!s_on) return 0;
    for (int i = 0; i < 2; i++) C.players[i].shown = C.players[i].building;
    P.valid = P.seen; P.insert = (int8_t)P.cursor;
    P.shown_owner = P.building_owner;
    for (int slot = 0; slot < 64; slot++) if ((P.mask & (1ull << slot)) &&
        !memcmp(P.building + slot*4,cyc_cpu_ram() + 0x200 + slot*4,4)) P.insert = (int8_t)slot;
    memcpy(P.shown,cyc_cpu_ram() + 0x200,sizeof P.shown);
    return P.shown_owner;
}
void mm3_coop_picture_begin(void) { P.mask = 0; P.seen = 0; P.cursor = 0; P.building_owner = C.anchor; }
void mm3_coop_primary_begin(void)
{
    if (!s_on || !C.initialized || s_inside || cyc_mod_isolated()) return;
    CycModRegs r = {0}; cyc_mod_regs(&r);
    if (!r.x && ram(0x97)) { P.seen = 1; P.cursor = (uint8_t)(ram(0x97)/4 - 1); }
}
void mm3_coop_primary_part(void)
{
    if (!s_on || s_inside || ram(0x96)) return;
    CycModRegs r = {0}; cyc_mod_regs(&r); P.mask |= 1ull << (r.x/4);
}
void mm3_coop_primary_done(void)
{
    if (!s_on || s_inside || ram(0x96)) return;
    for (int i = 0; i < 64; i++) if (P.mask & (1ull << i)) memcpy(P.building+i*4,cyc_cpu_ram()+0x200+i*4,4);
}
int mm3_coop_primary_seen(void) { return P.seen; }
static int picture_owner(void)
{ return P.valid && !memcmp(P.shown,cyc_render_oam(),sizeof P.shown) ? P.shown_owner : C.anchor; }
int mm3_coop_insert_slot(void)
{
    int owner = picture_owner();
    int count = C.players[owner^1].shown.count || (mm3_ws_private_primary() && C.players[owner].shown.count);
    return s_on && C.initialized && P.valid && count &&
        !memcmp(P.shown,cyc_render_oam(),sizeof P.shown) ? P.insert : -1;
}
static int paint_player(uint32_t *out, int width, int origin, const uint8_t *opaque, int guest)
{
    if (!s_on || !C.initialized || ram(0xF8) == 1) return 0;
    int owner = C.current;
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
int mm3_coop_paint(uint32_t *out, int width, int origin, const uint8_t *opaque)
{
    int owner = picture_owner(), result = 0;
    if (mm3_ws_private_primary()) result = paint_player(out,width,origin,opaque,owner);
    return paint_player(out,width,origin,opaque,owner^1) || result;
}
int mm3_coop_present_begin(void) { int previous = C.current; if (s_on) C.current = (uint8_t)picture_owner(); return previous; }
void mm3_coop_present_end(int previous) { C.current = (uint8_t)previous; }
int mm3_coop_present_player(int seat) { int previous = C.current; if (seat >= 0 && seat < 2) C.current = (uint8_t)seat; return previous; }
int mm3_coop_menu_ready(int seat)
{
    if (!s_on || !C.initialized || T.active || C.ai || C.scope || seat < 0 || seat > 1 || !alive(seat) || ram(0x50)) return 0;
    unsigned state = mm3_coop_read(seat, 0x30), weapon = mm3_coop_read(seat, 0xA0);
    if (mm3_coop_menu_active() && state == 4) return 1;
    if (state >= 22 || (cyc_mod_peek((uint16_t)(0xCD1E + state)) & 0x80)) return 0;
    for (int slot = 1; slot <= 3; slot++) if ((mm3_coop_read(seat, 0x300 + slot) & 0x80) &&
        !(slot == 1 && (weapon == 7 || weapon == 9 || weapon == 11))) return 0;
    return 1;
}
void mm3_coop_menu_project(int seat)
{
    capture_combat(&C.players[C.current]); C.current = (uint8_t)seat; project_combat(&C.players[seat]); controls(&C.players[seat]);
}
void mm3_coop_menu_restore(void)
{
    capture_combat(&C.players[C.current]); C.current = C.anchor; project_combat(&C.players[C.anchor]); controls(&C.players[C.anchor]);
}
int mm3_coop_menu_equip(int seat, int weapon)
{
    if (!s_on || !C.initialized || !alive(seat)) return 0;
    int previous = C.current; capture(&C.players[previous]); C.current = (uint8_t)seat; project(&C.players[seat]);
    int ok = mm3_mods_equip(weapon, 0);
    if (ok) {
        mm3_charge_cancel(); poke(0x30, 4); poke(0x5C0, 0x13); poke(0x5A0, 1); poke(0x5E0, 0);
        capture(&C.players[seat]);
    }
    C.current = (uint8_t)previous; project(&C.players[previous]); return ok;
}
int mm3_coop_menu_tank(int seat)
{
    if (!s_on || !C.initialized || !alive(seat) || !ram(0xAF)) return 0;
    int stock = ram(0xAF) - 1; if ((stock & 15) == 15) stock -= 6; poke(0xAF, stock); return 1;
}
void mm3_coop_menu_heal(int seat)
{
    if (seat < 0 || seat > 1 || !C.initialized) return;
    Player *p = &C.players[seat]; unsigned i = s_index[0xA2] - 1; int hp = p->ram[i] & 31;
    if (hp < 28) { p->ram[i] = (uint8_t)(0x80 | (hp + 1)); if (C.current == seat) poke(0xA2, p->ram[i]); }
}
static int stage_entry(uint16_t address)
{
    (void)address;
    if (s_on && !cyc_mod_isolated()) {
        mm3_ws_coop_reset();
        memset(&E,0,sizeof E);
        C.anchor = C.current; C.initialized = C.ai = C.scope = C.draw = 0; T.active = T.priming = 0; mm3_coop_menu_cancel();
    }
    return 0;
}
static int retry_entry(uint16_t address)
{
    (void)address;
    if (s_on && !cyc_mod_isolated()) L.restarting = C.initialized && C.stage == ram(0x22);
    return 0;
}
static int scene_exit(uint16_t address)
{
    /* Native password/stage-select tasks accept either controller after the
     * one common stage coroutine has ended. Keep the surviving native actor. */
    stage_entry(address); L.restarting = 0; return 0;
}
static void enabled(int on)
{
    int old_independent = mm3_coop_independent();
    s_on = on != 0;
    if (old_independent != mm3_coop_independent()) mm3_ws_coop_reset();
    mm3_coop_view_policy();
    nes_mod_set_function_hook_enabled("mm3.coop.pool-end", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.enemy-done", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.frozen-hit", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.death-music", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.stage-entry", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.retry-entry", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.camera", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.horizontal", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.vertical", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.boss-exit", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.game-over", s_on);
    nes_mod_set_function_hook_enabled("mm3.coop.stage-clear", s_on);
    mm3_coop_menu_refresh();
    cyc_mod_set_return_hook(s_on ? after_return : NULL);
    mm3_mods_refresh_hooks(); mm3_ws_refresh_policy();
    nes_mod_set_local_only("Mega Man 3 co-op development", s_on && !mm3_net_available());
}
void mm3_coop_power_on(void)
{
    memset(&C, 0, sizeof C); memset(&L, 0, sizeof L); memset(&P,0,sizeof P); memset(&T,0,sizeof T);
    memset(&E,0,sizeof E);
    s_checkpoint_tables = 0;
    addresses(); mm3_coop_menu_power_on();
    if (s_on && !mm3_proto_available()) mm3_proto_option("--protoman", "on");
    enabled(s_on);
}
bool mm3_coop_option(const char *name, const char *value)
{
    if (mm3_net_locked() && strcmp(name,"--coop-view")) return false;
    if (!strcmp(name,"--coop-wait-both")) {
        if (strcmp(value,"on") && strcmp(value,"off")) return false;
        s_wait_both = !strcmp(value,"on");return true;
    }
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
    if (!strcmp(name,"--coop-view")) {
        int old_independent = mm3_coop_independent();
        int next;
        if (!strcmp(value,"shared")) next = 0;
        else if (!strcmp(value,"split")) next = 1;
        else if (!strcmp(value,"p1") || !strcmp(value,"player1")) next = 2;
        else if (!strcmp(value,"p2") || !strcmp(value,"player2")) next = 3;
        else return false;
        if (mm3_net_locked() && !!next != old_independent) return false;
        s_view = next;
        if (old_independent != mm3_coop_independent()) mm3_ws_coop_reset();
        mm3_coop_view_policy(); mm3_ws_refresh_policy(); return true;
    }
    if (strcmp(name, "--coop") || (strcmp(value, "on") && strcmp(value, "off"))) return false;
    if (!strcmp(value, "on")) mm3_proto_option("--protoman", "on");
    enabled(!strcmp(value, "on")); return true;
}
static int get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof C) return -1;
    memcpy(C.magic, "CP02", 4); C.enabled = s_on; C.roster = s_roster; C.reserved = (uint8_t)mm3_coop_independent();
    memcpy(out, &C, sizeof C); return sizeof C;
}
static int valid(const uint8_t *in, int size)
{
    if (!size) return !s_on;
    Coop c; if (!in || size != (int)sizeof c) return 0; memcpy(&c, in, sizeof c);
    if (memcmp(c.magic, "CP02", 4) || c.enabled != s_on || c.roster != s_roster || c.reserved != mm3_coop_independent() ||
        c.initialized > 1 || c.anchor > 1 || c.current > 1 || c.scope > 2 || c.scope_owner > 1 || c.ai > 2 || c.ai_owner > 1 || c.draw > 1 || c.draw_owner > 1) return 0;
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
static int life_get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof L) return -1;
    memcpy(L.magic,"CL01",4); L.enabled = s_on; memcpy(out,&L,sizeof L); return sizeof L;
}
static int life_valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    Lifecycle n; if (!in || size != (int)sizeof n) return 0; memcpy(&n,in,size);
    if (memcmp(n.magic,"CL01",4) || n.enabled != s_on || n.withdrawn > 2 || n.advanced > 1 || n.restarting > 1 || n.revive > 3 || n.checkpoint < -1 || n.checkpoint > 7) return 0;
    for (int i = 0; i < 2; i++) {
        int withdrawn = (n.withdrawn & (1u << i)) != 0;
        if (n.hold[i] > 90 || n.armed[i] > 1 || n.previous[i] > 1 ||
            n.teleport[i] > TELE_OPEN || n.floor[i] < 0 || n.floor[i] > 239 ||
            (withdrawn && n.teleport[i] == TELE_NONE) ||
            (!withdrawn && (n.teleport[i] == TELE_OUT || n.teleport[i] == TELE_HIDDEN))) return 0;
    }
    return 1;
}
static int life_set(const uint8_t *in, int size)
{ if (!life_valid(in,size)) return 0; if (size) memcpy(&L,in,size); else { memset(&L,0,sizeof L); L.checkpoint = -1; } return 1; }
static int priority_get(uint8_t *out, int cap)
{
    if (cap < (int)sizeof P) return -1;
    memcpy(P.magic,"CPR1",4); memcpy(out,&P,sizeof P); return sizeof P;
}
static int priority_valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    Priority n; if (!in || size != (int)sizeof n) return 0; memcpy(&n,in,size);
    return !memcmp(n.magic,"CPR1",4) && n.cursor < 64 && n.seen <= 1 && n.valid <= 1 && n.insert >= -1 && n.insert < 64 && n.building_owner <= 1 && n.shown_owner <= 1;
}
static int priority_set(const uint8_t *in, int size)
{ if (!priority_valid(in,size)) return 0; if (size) memcpy(&P,in,size); else memset(&P,0,sizeof P); return 1; }
static int transition_get(uint8_t *out, int cap)
{ if (cap < (int)sizeof T) return -1; memcpy(T.magic,"CT01",4); memcpy(out,&T,sizeof T); return sizeof T; }
static int transition_valid(const uint8_t *in, int size)
{
    if (!size) return 1;
    Transition n; if (!in || size != (int)sizeof n) return 0; memcpy(&n,in,size);
    return !memcmp(n.magic,"CT01",4) && n.active <= 2 && n.priming <= 2 &&
        (!n.priming || n.active == 1) && (n.active != 1 || ((n.entry == 0xE2A5 || n.entry == 0xE372) && n.stack >= 6));
}
static int transition_set(const uint8_t *in, int size)
{ if (!transition_valid(in,size)) return 0; if (size) memcpy(&T,in,size); else memset(&T,0,sizeof T); return 1; }
static int wait_get(uint8_t *out,int cap)
{ if (cap < (int)sizeof E) return -1;memcpy(E.magic,"EW01",4);E.enabled = (uint8_t)s_wait_both;memcpy(out,&E,sizeof E);return sizeof E; }
static int wait_valid(const uint8_t *in,int size)
{
    if (!size) return 1;
    ExitWait n;if (!in || size != (int)sizeof n) return 0;memcpy(&n,in,size);
    if (memcmp(n.magic,"EW01",4) || n.enabled != s_wait_both || n.waiting > 2 || n.resume > 2 || (n.waiting && n.resume)) return 0;
    for (int seat = 0; seat < 2; seat++) if (((n.waiting|n.resume)&(1u<<seat)) &&
        (n.direction[seat] != 0x40 && n.direction[seat] != 0x80)) return 0;
    return 1;
}
static int wait_set(const uint8_t *in,int size)
{ if (!wait_valid(in,size)) return 0;if (size) memcpy(&E,in,size);else memset(&E,0,sizeof E);return 1; }
static void reset(void) { if (!mm3_net_locked()) { enabled(0); s_roster = s_view = s_wait_both = 0; } }
static void activate(void)
{
    if (mm3_net_locked()) return;
    const char *package="mega-man-3-usa.coop";char roster[16]="megaman",view[16]="shared",wait[16]="off";
    nes_mod_option_value(package,"coop","player-one",roster,sizeof roster);
    nes_mod_option_value(package,"coop","coop-view",view,sizeof view);
    nes_mod_option_value(package,"coop","wait-both",wait,sizeof wait);
    mm3_coop_option("--coop-p1",roster);mm3_coop_option("--coop-wait-both",wait);
    mm3_coop_option("--coop","on");mm3_coop_option("--coop-view",view);
}
#ifdef CYC_WITH_SDL
static void tcp(int id, const char *line)
{
    char view[16],b[640];
    if (cyc_tcp_str(line,"view",view,sizeof view) &&
        (!s_on || !mm3_coop_option("--coop-view",view))) {
        cyc_tcp_err(id,"view needs active co-op and shared|split|p1|p2");return;
    }
    snprintf(b, sizeof b, "\"enabled\":%s,\"view\":%u,\"compositing\":%u,\"protoman\":%u,\"menu\":%u,\"initialized\":%u,\"anchor\":%u,\"seat\":%u,\"updates\":%llu,\"failures\":%llu,\"withdrawn\":%u,\"wait_both\":%u,\"waiting\":%u,\"resume\":%u,\"teleport\":[%u,%u],\"hold\":[%u,%u],\"players\":[{\"x\":%d,\"y\":%d,\"hp\":%d},{\"x\":%d,\"y\":%d,\"hp\":%d}]",
        s_on ? "true" : "false",(unsigned)s_view,(unsigned)cyc_render_stock_compositing(),(unsigned)mm3_proto_available(),(unsigned)mm3_coop_menu_active(),C.initialized, C.anchor, C.current, (unsigned long long)C.updates, (unsigned long long)C.failures,
        L.withdrawn,(unsigned)s_wait_both,E.waiting,E.resume,L.teleport[0],L.teleport[1],L.hold[0],L.hold[1],
        mm3_coop_read(0,0x360) + mm3_coop_read(0,0x380)*256,mm3_coop_read(0,0x3C0),mm3_coop_read(0,0xA2)&31,
        mm3_coop_read(1,0x360) + mm3_coop_read(1,0x380)*256,mm3_coop_read(1,0x3C0),mm3_coop_read(1,0xA2)&31);
    cyc_tcp_ok(id, b);
}
#endif
void mm3_coop_tcp_setup(void)
{
#ifdef CYC_WITH_SDL
    cyc_tcp_register("mm3_coop", "native co-op state; optional view shared|split|p1|p2", tcp);
#endif
    mm3_coop_menu_tcp_setup();
}
NES_MOD_CONSTRUCTOR(register_mm3_coop)
{
    nes_mod_register_function_entry_plugin("mm3.coop.pool-end", 0x8014, pool_boundary);
    nes_mod_register_function_entry_plugin("mm3.coop.enemy-done", 0x808B, enemy_done);
    nes_mod_register_function_entry_plugin("mm3.coop.frozen-hit", 0x8083, frozen_weapon_hit);
    nes_mod_register_function_entry_plugin("mm3.coop.death-music", 0xF89A, death_music);
    nes_mod_register_function_entry_plugin("mm3.coop.stage-entry", 0xC9B3, stage_entry);
    nes_mod_register_function_entry_plugin("mm3.coop.retry-entry", 0xCC18, retry_entry);
    nes_mod_register_function_entry_plugin("mm3.coop.camera", 0xE16A, before_camera);
    nes_mod_register_function_entry_plugin("mm3.coop.horizontal", 0xE2A5, transition_begin);
    nes_mod_register_function_entry_plugin("mm3.coop.vertical", 0xE372, transition_begin);
    nes_mod_register_function_entry_plugin("mm3.coop.boss-exit", 0xCB5B, scene_exit);
    nes_mod_register_function_entry_plugin("mm3.coop.game-over", 0xCBB1, scene_exit);
    nes_mod_register_function_entry_plugin("mm3.coop.stage-clear", 0xCBCE, scene_exit);
    nes_mod_register_reset_callback(reset);
    nes_mod_register_activation_plugin("mega-man-3-usa.coop",activate);
    nes_mod_register_savestate_hook("mm3.coop", get, set);
    nes_mod_register_savestate_validator("mm3.coop", valid);
    nes_mod_register_savestate_hook("mm3.coop-lifecycle",life_get,life_set);
    nes_mod_register_savestate_validator("mm3.coop-lifecycle",life_valid);
    nes_mod_register_savestate_hook("mm3.coop-priority",priority_get,priority_set);
    nes_mod_register_savestate_validator("mm3.coop-priority",priority_valid);
    nes_mod_register_savestate_hook("mm3.coop-transition",transition_get,transition_set);
    nes_mod_register_savestate_validator("mm3.coop-transition",transition_valid);
    nes_mod_register_savestate_hook("mm3.coop-exit-wait",wait_get,wait_set);
    nes_mod_register_savestate_validator("mm3.coop-exit-wait",wait_valid);
}
