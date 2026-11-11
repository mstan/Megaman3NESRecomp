#pragma once
#include <stdint.h>
int mm3_coop_menu_active(void);
int mm3_coop_menu_checking(void);
void mm3_coop_menu_power_on(void);
void mm3_coop_menu_cancel(void);
void mm3_coop_menu_refresh(void);
void mm3_coop_menu_input(uint8_t buttons[2]);
int mm3_coop_menu_draw(uint32_t *out, int width);
void mm3_coop_menu_tcp_setup(void);
