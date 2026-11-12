/* Share the original Gemini bitmap; no second terrain representation. */
#include "mm3_world.h"
#include "mm3_coop.h"
#include "mm3_widescreen.h"
#include "cyc_core.h"
#include "cyc_mod.h"
#include "cyc_video.h"
#include "mod_function_hooks.h"
#include "mod_runtime.h"

static int s_on,s_private,s_camera;
static uint8_t R(unsigned a) { return cyc_cpu_ram()[a&2047]; }
static int gemini(void) { return R(0x22)==2 || R(0x22)==9; }
static int native_queue(uint16_t address)
{
    (void)address;
    if (!s_on || !gemini()) return 0;
    CycModRegs r={0};cyc_mod_regs(&r);if(r.x>=16)return 0;
    int camera=s_private?s_camera:R(0xF9)*256+R(0xFC);
    int x=R(0x360+r.x)+R(0x380+r.x)*256;
    if (x>=camera && x<camera+256) return 0;
    /* There is no corresponding native ring column offscreen. The original
     * destruction/debris continues, without erasing an unrelated visible tile. */
    r.a=0xFF;r.p=(uint8_t)((r.p&~3u)|0x80);cyc_mod_set_regs(&r);return 1;
}
void mm3_world_power_on(void) { s_private=0;mm3_world_refresh(); }
void mm3_world_refresh(void)
{
    s_on=mm3_coop_enabled() || mm3_ws_mode()!=NES_VIDEO_STOCK;
    nes_mod_set_function_hook_enabled("mm3.world.queue",s_on);
}
void mm3_world_private_begin(void)
{ s_private=1;s_camera=R(0xF9)*256+R(0xFC); }
void mm3_world_private_end(int commit) { (void)commit;s_private=0; }
int mm3_world_destroyed(int page,int column,int row)
{
    if(!s_on || !gemini() || page<0 || page>255 || column<0 || column>15 || row<0 || row>14)return 0;
    /* Legal Gemini/Doc rooms put their breakable blocks on at most two
     * adjacent screens; the cartridge clears this bitmap on vertical travel. */
    int metatile=(row/2)*8+column/2,bit=((metatile&1)<<2)|((row&1)*2+(column&1));
    return (R(0x110+(page&1)*32+metatile/2)&(0x80>>bit))!=0;
}
NES_MOD_CONSTRUCTOR(register_mm3_world)
{
    nes_mod_register_function_entry_plugin("mm3.world.queue",0xEE57,native_queue);
}
