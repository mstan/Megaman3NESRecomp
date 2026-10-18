/* Mega Man 3 widescreen: level columns beyond the native 256 px, painted from
 * the stage's own ROM tables (see mm3_widescreen.c). */
#pragma once
#include <stdbool.h>
#include <stdio.h>

void mm3_ws_power_on(void);
void mm3_ws_frame_end(void);
void mm3_ws_state_loaded(void);

/* Persistent mode (NES_VIDEO_*), config.ini [Game] Widescreen and --widescreen. */
bool mm3_ws_set_mode_name(const char *name);
bool mm3_ws_set_mode(int mode);
int  mm3_ws_mode(void);
void mm3_ws_save_setting(FILE *f);

/* Developer check: compare the decoder with the PPU's background capture. */
void mm3_ws_set_check(bool enabled);

/* JSON members (no braces) describing the last composed picture. */
void mm3_ws_describe(char *out, size_t n);
