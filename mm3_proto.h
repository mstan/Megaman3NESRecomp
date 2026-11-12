#pragma once
#include <stdbool.h>
#include <stdint.h>
int mm3_proto_available(void);
int mm3_proto_real(void);
int mm3_proto_start(void);
int mm3_proto_selected(void);
int mm3_proto_teleporting(void);
/* The native slot3 collision belongs to a reflected Buster during this scope. */
int mm3_proto_reflecting(void);
int mm3_proto_dispatch(void);
void mm3_proto_power_on(void);
void mm3_proto_frame_end(void);
bool mm3_proto_option(const char *name, const char *value);
void mm3_proto_draw_begin(void);
void mm3_proto_draw_latch(void);
int mm3_proto_native_picture(uint32_t *out);
void mm3_proto_tcp_setup(void);
void mm3_proto_refresh_hooks(void);
int mm3_proto_shot_limit(void);
int mm3_proto_muzzle_y(int native_offset);
uint64_t mm3_proto_private_mask(void);
void mm3_proto_paint_private(uint32_t *out, int width, int origin, const uint8_t *opaque);
void mm3_proto_paint_portrait(uint32_t *out, int width, int x, int y, int weapon);
uint64_t mm3_proto_picture_mask(void);
int mm3_proto_place_sprite(int slot, uint64_t body, uint32_t *out, int width, int origin, const uint8_t *opaque);
