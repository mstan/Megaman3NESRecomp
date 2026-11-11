#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
int mm3_charge_available(void);
int mm3_charge_counter(void);
void mm3_charge_dispatch(void);
void mm3_charge_cancel(void);
void mm3_charge_power_on(void);
void mm3_charge_frame_end(void);
void mm3_charge_audio_mix(int16_t *out, size_t count);
bool mm3_charge_option(const char *name, const char *value);
void mm3_charge_tcp_setup(void);
void mm3_charge_draw_begin(void);
void mm3_charge_draw_latch(void);
void mm3_charge_pose_begin(void);
void mm3_charge_part_emitted(void);
void mm3_charge_pose_done(void);
int mm3_charge_draw_ready(void);
int mm3_charge_place(int slot, uint32_t *out);
int mm3_charge_private_place(int slot, uint32_t *out, int width, int origin, const uint8_t *opaque, const uint8_t *oam);
