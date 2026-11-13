/* Title settings over the shared pre-boot identity and capability barrier. */
#include "mm3_net.h"
#include "mm3_coop.h"
#include "mm3_widescreen.h"
#include "mm3_charge.h"
#include "cyc_core.h"
#include "cyc_video.h"
#include "cyc_session.h"
#include "mod_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int s_sealed,s_applying,s_width=256;
static unsigned s_cli;
int mm3_net_locked(void) { return s_sealed && !s_applying; }
int mm3_net_simulation_width(int local) { return s_sealed?s_width:local; }
int mm3_net_available(void)
{
#if defined(NESRECOMP_NET) && defined(MM3_NETPLAY_QUALIFIED) && MM3_NETPLAY_QUALIFIED
    return 1;
#else
    return 0;
#endif
}
void mm3_net_note_option(const char *name)
{
    if (!strcmp(name,"--coop") || !strcmp(name,"--coop-view") || !strcmp(name,"--coop-p1") || !strcmp(name,"--coop-wait-both")) s_cli|=1;
    if (!strcmp(name,"--protoman") || !strcmp(name,"--proto-mode") || !strcmp(name,"--proto-start")) s_cli|=2;
    if (!strcmp(name,"--weapon-cycle")) s_cli|=4;
    if (!strcmp(name,"--charge")) s_cli|=8;
    if (!strcmp(name,"--coop-test-poke")) s_cli|=64;
}
#ifdef NESRECOMP_NET
#include "cyc_net.h"
#include "nes_netplay.h"
#ifdef CYC_WITH_RECOMP_UI
#include "recomp_launcher.h"
#endif
static Mm3Settings s_offline;
static int s_saved,s_offline_view,s_offline_video,s_offline_mode,s_offline_width;
static void preserve_offline(void)
{
    if (s_saved) return;
    s_offline=mm3_host_settings();s_offline_view=mm3_coop_view_mode();s_offline_mode=mm3_ws_mode();
    s_offline_video=cyc_video_mode();s_offline_width=cyc_video_width();s_saved=1;
}
static int selected(const char *package,const char *feature) { return nes_mod_feature_selected(package,feature)!=0; }
static int option_is(const char *package,const char *feature,const char *key,const char *want,const char *fallback)
{
    char value[32];if (!nes_mod_option_value(package,feature,key,value,sizeof value)) snprintf(value,sizeof value,"%s",fallback);
    return !strcmp(value,want);
}
static Mm3Settings offer(void)
{
    Mm3Settings c=mm3_host_settings();
    if (cyc_session_mods_enabled()) {
        const char *coop="mega-man-3-usa.coop",*proto="mega-man-3-usa.character.protoman",*charge="mega-man-3-usa.backport.mm4";
        if (!(s_cli&1)) {
            c.coop=selected(coop,"coop");c.independent=!option_is(coop,"coop","coop-view","shared","shared");
            c.roster=option_is(coop,"coop","player-one","protoman","megaman");c.wait_both=option_is(coop,"coop","wait-both","on","off");
        }
        if (!(s_cli&2)) {
            c.proto=selected(proto,"protoman") || c.coop;c.real=option_is(proto,"protoman","mode","protoman","protoman");
            c.start=option_is(proto,"protoman","start","protoman","protoman");
        }
        if (!(s_cli&4)) c.weapons=selected("mega-man-3-usa.enhancement.weapons","weapons");
        if (!(s_cli&8)) {
            c.charge=selected(charge,"charge");c.sound=nes_mod_get_option_int(charge,"charge","sound",1)!=0;c.flash=nes_mod_get_option_int(charge,"charge","flash",1)!=0;
        }
    }
    if (s_cli&8) c.charge=mm3_charge_requested();
    if (c.coop) { c.proto=1;c.start=1; }
    return c;
}
static int catalog_supported(void)
{
    if (!cyc_session_mods_enabled()) return 1;
#ifdef CYC_WITH_RECOMP_UI
    const RecompLauncherCModProvider *p=nes_mod_runtime_launcher_provider_c();
    if (!p || !p->feature_count || !p->feature_get) return 0;
    static const char *known[][2]={
        {"mega-man-3-usa.coop","coop"},{"mega-man-3-usa.character.protoman","protoman"},
        {"mega-man-3-usa.enhancement.weapons","weapons"},{"mega-man-3-usa.backport.mm4","charge"},
        {"nesrecomp.developer.replay","replay-capture"}};
    for (int i=0;i<p->feature_count(p->ctx);i++) {
        RecompLauncherCModFeature f;if (!p->feature_get(p->ctx,i,&f)) return 0;if (!f.enabled) continue;
        int found=0;
        for (unsigned j=0;j<sizeof known/sizeof *known;j++) if (!strcmp(f.package_id,known[j][0]) && !strcmp(f.id,known[j][1])) found=1;
        if (!found) return 0;
    }
    return 1;
#else
    return 0;
#endif
}
static int describe(Mm3Settings c,char *out,int cap)
{
    return snprintf(out,cap,"2:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d",c.coop,c.independent,c.roster,c.wait_both,
        c.proto,c.real,c.start,c.weapons,c.charge,c.sound,c.flash,c.wide,c.lines,c.flicker);
}
static int settings_get(char *out,int cap) { return describe(mm3_host_settings(),out,cap); }
static int settings_offer(char *out,int cap) { return describe(offer(),out,cap); }
static int settings_apply(const char *value)
{
    Mm3Settings c;int version,n=0;
    if (!mm3_net_available() || (s_cli&64) || mm3_coop_test_pokes() || !catalog_supported()) return 0;
    if (sscanf(value,"%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d%n",&version,&c.coop,&c.independent,&c.roster,&c.wait_both,
        &c.proto,&c.real,&c.start,&c.weapons,&c.charge,&c.sound,&c.flash,&c.wide,&c.lines,&c.flicker,&n)!=15 || value[n] || version!=2) return 0;
    if (c.coop!=1 || c.proto!=1 || c.independent<0 || c.independent>1 || c.roster<0 || c.roster>1 || c.wait_both<0 || c.wait_both>1 ||
        c.real<0 || c.real>1 || c.start!=1 || c.weapons<0 || c.weapons>1 || c.charge<0 || c.charge>1 || c.sound<0 || c.sound>1 ||
        c.flash<0 || c.flash>1 || c.wide<0 || c.wide>1 || c.flicker<0 || c.flicker>1 ||
        (c.lines!=0 && c.lines!=128) || ((c.independent || !c.wide) && s_width!=256)) return 0;
    preserve_offline();
    s_applying=1;int ok=mm3_host_apply_settings(c,nes_netplay_local_slot());s_applying=0;if (!ok) return 0;
    s_sealed=1;nes_netplay_require_capabilities(1);nes_netplay_require_player_count(2);
    if (!c.independent) cyc_video_request_width(s_width);
    if (!getenv("NES_NET_INPUT_PLAYER")) {
        char binding[16]="seat";
        if (cyc_session_mods_enabled()) nes_mod_option_value("mega-man-3-usa.coop","coop","online-input",binding,sizeof binding);
        nes_netplay_set_input_player(!strcmp(binding,"device1")?0:!strcmp(binding,"device2")?1:nes_netplay_local_slot());
    }
    static const char *names[]={"Mega Man 3 co-op development","Mega Man 3 Proto Man","Mega Man 3 quick weapon switching",
        "Mega Man 3 charged Mega Buster","Mega Man 3 widened world"};
    for (unsigned i=0;i<sizeof names/sizeof *names;i++) nes_mod_set_local_only(names[i],!mm3_net_available());
    return mm3_net_available() && cyc_extra_scanlines()==(unsigned)c.lines;
}
static void settings_restore(void)
{
    s_sealed=0;
    if (s_saved) {
        mm3_host_apply_settings(s_offline,0);
        static const char *views[]={"shared","split","p1","p2"};mm3_coop_option("--coop-view",views[s_offline_view]);
        mm3_ws_set_mode(s_offline_mode);
        if (s_offline_video==NES_VIDEO_STOCK && !s_offline.independent) cyc_video_request_width(s_offline_width);else cyc_video_set_mode(s_offline_video);
        /* Optional structured readback of the real restore callback. This
         * observes title/engine settings and never changes game state. */
        const char *record=getenv("MM3_NET_RESTORE_RECORD");
        if (record && *record) {
            char expected[192],actual[192],next[192];describe(s_offline,expected,sizeof expected);
            settings_get(actual,sizeof actual);settings_offer(next,sizeof next);
            FILE *f=fopen(record,"w");
            if (f) {
                fprintf(f,"{\"expected\":\"%s\",\"actual\":\"%s\",\"next_offer\":\"%s\",\"expected_game_mode\":%d,\"game_mode\":%d,\"expected_video_mode\":%d,\"video_mode\":%d,\"expected_view\":%d,\"view\":%d}\n",
                    expected,actual,next,s_offline_mode,mm3_ws_mode(),s_offline_video,cyc_video_mode(),s_offline_view,mm3_coop_view_mode());fclose(f);
            }
        }
        s_saved=0;
    }
    nes_netplay_require_capabilities(0);nes_netplay_require_player_count(0);nes_netplay_set_input_player(-1);
}
static int width_get(char *out,int cap) { return snprintf(out,cap,"%d",s_sealed?s_width:(mm3_coop_independent()?256:cyc_video_width())); }
static int width_offer(char *out,int cap)
{
    Mm3Settings c=offer();int width=(c.independent || !c.wide)?256:cyc_video_width();
    if (c.wide && !c.independent && width<=256) width=426;return snprintf(out,cap,"%d",width);
}
static int width_apply(const char *v)
{
    char *end;long n=strtol(v,&end,10);if (end==v || *end || n<256 || n>CYC_VIDEO_MAX_WIDTH || (n&1)) return 0;
    preserve_offline();s_width=(int)n;return 1;
}
static int timing_get(char *out,int cap) { return snprintf(out,cap,"%d:%u",(int)cyc_region(),cyc_extra_scanlines()); }
static int timing_offer(char *out,int cap) { return snprintf(out,cap,"%d:%d",(int)cyc_region(),offer().lines); }
static int timing_apply(const char *v)
{
    int region;unsigned lines;char tail;
    if (sscanf(v,"%d:%u%c",&region,&lines,&tail)!=2 || region!=(int)cyc_region() || (lines!=0 && lines!=128)) return 0;
    preserve_offline();return cyc_set_extra_scanlines(lines);
}
static int hash_text(int donor,char *out,int cap)
{
    uint8_t digest[32];if (cap<65 || !(donor?mm3_charge_source_hash(digest):mm3_proto_source_hash(digest))) return 0;
    for (int i=0;i<32;i++) snprintf(out+i*2,3,"%02x",digest[i]);return 64;
}
static int sheet_get(char *out,int cap) { return hash_text(0,out,cap); }
static int sheet_apply(const char *v) { char actual[65];return sheet_get(actual,sizeof actual)==64 && !strcmp(v,actual); }
static int donor_get(char *out,int cap)
{ return mm3_host_settings().charge?hash_text(1,out,cap):snprintf(out,cap,"off"); }
static int donor_offer(char *out,int cap) { return offer().charge?hash_text(1,out,cap):snprintf(out,cap,"off"); }
static int donor_apply(const char *v) { char actual[65];return donor_get(actual,sizeof actual)>0 && !strcmp(v,actual); }
NES_MOD_CONSTRUCTOR(register_mm3_net)
{
    nes_runner_register_session_keys();
    nes_netplay_session_register("timing",timing_get,timing_apply,settings_restore);nes_netplay_session_set_offer("timing",timing_offer);
    nes_netplay_session_register("vw",width_get,width_apply,settings_restore);nes_netplay_session_set_offer("vw",width_offer);
    nes_netplay_session_register("mm3",settings_get,settings_apply,settings_restore);nes_netplay_session_set_offer("mm3",settings_offer);
    nes_netplay_session_register("sheet",sheet_get,sheet_apply,NULL);
    nes_netplay_session_register("mm4",donor_get,donor_apply,NULL);nes_netplay_session_set_offer("mm4",donor_offer);
}
#endif
