#pragma once
void mm3_world_power_on(void);
void mm3_world_refresh(void);
void mm3_world_private_begin(void);
void mm3_world_private_end(int commit);
int mm3_world_destroyed(int page,int column,int row);
