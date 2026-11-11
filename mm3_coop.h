#pragma once
#include <stdbool.h>
#include <stdint.h>
int mm3_coop_enabled(void);
int mm3_coop_seat(void);
int mm3_coop_character(int seat);
int mm3_coop_read(int seat, unsigned address);
int mm3_coop_dispatch(void);
void mm3_coop_contact(void);
void mm3_coop_weapon_hit(void);
void mm3_coop_power_on(void);
void mm3_coop_input(uint8_t buttons[2]);
void mm3_coop_frame_end(void);
void mm3_coop_frame_begin(void);
void mm3_coop_draw(void);
void mm3_coop_latch(void);
int mm3_coop_paint(uint32_t *out, int width, int origin, const uint8_t *opaque);
bool mm3_coop_option(const char *name, const char *value);
void mm3_coop_tcp_setup(void);
