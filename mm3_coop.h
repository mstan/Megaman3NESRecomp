#pragma once
#include <stdbool.h>
#include <stdint.h>
int mm3_coop_enabled(void);
int mm3_coop_scene_active(void);
int mm3_coop_independent(void);
int mm3_coop_view_mode(void);
int mm3_coop_wait_both(void);
int mm3_coop_test_pokes(void);
int mm3_coop_view_locked(void);
void mm3_coop_view_policy(void);
/* Simulation hooks publish these rectangles; presentation must latch them. */
int mm3_coop_view_rects(int left[2]);
int mm3_coop_nearest(int world_x, int world_y);
int mm3_coop_spawn_project(int seat);
int mm3_coop_seat(void);
int mm3_coop_character(int seat);
int mm3_coop_read(int seat, unsigned address);
int mm3_coop_world_slot(unsigned slot);
int mm3_coop_helper_slot(unsigned slot);
int mm3_coop_dispatch(void);
void mm3_coop_contact(void);
void mm3_coop_weapon_hit(unsigned entry);
void mm3_coop_power_on(void);
void mm3_coop_input(uint8_t buttons[2]);
void mm3_coop_frame_end(void);
void mm3_coop_frame_begin(void);
void mm3_coop_draw(void);
void mm3_coop_before_draw(void);
int mm3_coop_latch(void);
int mm3_coop_paint(uint32_t *out, int width, int origin, const uint8_t *opaque);
void mm3_coop_picture_begin(void);
void mm3_coop_primary_begin(void);
void mm3_coop_primary_part(void);
void mm3_coop_primary_done(void);
int mm3_coop_primary_seen(void);
int mm3_coop_insert_slot(void);
bool mm3_coop_option(const char *name, const char *value);
void mm3_coop_tcp_setup(void);
int mm3_coop_present_begin(void);
void mm3_coop_present_end(int previous);
int mm3_coop_present_player(int seat);
int mm3_coop_menu_ready(int seat);
void mm3_coop_menu_project(int seat);
void mm3_coop_menu_restore(void);
int mm3_coop_menu_equip(int seat, int weapon);
int mm3_coop_menu_tank(int seat);
void mm3_coop_menu_heal(int seat);
