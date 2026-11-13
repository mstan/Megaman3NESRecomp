#pragma once
#include <stdint.h>
typedef struct {
    int coop, independent, roster, wait_both;
    int proto, real, start, weapons;
    int charge, sound, flash, wide, lines, flicker;
} Mm3Settings;
int mm3_net_available(void);
int mm3_net_locked(void);
int mm3_net_simulation_width(int local_width);
void mm3_net_note_option(const char *name);
Mm3Settings mm3_host_settings(void);
int mm3_host_apply_settings(Mm3Settings settings,int local_seat);
int mm3_proto_source_hash(uint8_t out[32]);
int mm3_charge_source_hash(uint8_t out[32]);
