#pragma once
#include <stdbool.h>
#include <stdint.h>
int mm3_proto_available(void);
int mm3_proto_selected(void);
int mm3_proto_teleporting(void);
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
