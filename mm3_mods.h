#pragma once
#include "cyc_input.h"
#include <stdbool.h>
#include <stdint.h>

extern const CycInputProfile mm3_input_profile;
void mm3_mods_power_on(void);
void mm3_mods_frame_end(void);
void mm3_mods_input(uint8_t buttons[2]);
bool mm3_mods_option(const char *name, const char *value);
void mm3_mods_tcp_setup(void);
void mm3_mods_refresh_hooks(void);
void mm3_mods_personal_dispatch(void);
int mm3_mods_equip(int weapon, int announce);
int mm3_weapons_enabled(void);
