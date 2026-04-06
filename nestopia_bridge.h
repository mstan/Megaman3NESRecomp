/*
 * nestopia_bridge.h — Nestopia libretro core bridge for NES recomp
 */
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int  nestopia_bridge_init(const char *rom_path);
void nestopia_bridge_run_frame(uint8_t buttons);
void nestopia_bridge_get_ram(uint8_t *out);       /* 2KB work RAM */
void nestopia_bridge_get_sram(uint8_t *out);      /* 8KB save RAM */
void nestopia_bridge_get_framebuf_argb(uint32_t *out);  /* 256x240 ARGB */
void nestopia_bridge_write_ram(uint16_t addr, uint8_t val);
void nestopia_bridge_shutdown(void);

/* Read a byte from Nestopia's CPU address space (any address $0000-$FFFF) */
uint8_t nestopia_bridge_cpu_read(uint16_t addr);

/* PPU register extraction — reads Nestopia's internal PPU state */
typedef struct {
    uint8_t ctrl;       /* $2000 PPUCTRL */
    uint8_t mask;       /* $2001 PPUMASK */
    uint8_t scroll_x;   /* Coarse X + fine X combined */
    uint8_t scroll_y;   /* Coarse Y + fine Y combined */
} NestopiaPpuRegs;

void nestopia_bridge_get_ppu_regs(NestopiaPpuRegs *out);

/* PPU VRAM extraction — reads Nestopia's internal PPU memory for oracle comparison */
void nestopia_bridge_get_chr_ram(uint8_t *out, int len);    /* CHR pattern tables (up to 8KB) */
void nestopia_bridge_get_nametable(uint8_t *out, int len);  /* Nametable (up to 4KB, mirrored) */
void nestopia_bridge_get_palette(uint8_t *out);             /* Palette RAM (32 bytes) */
void nestopia_bridge_get_oam(uint8_t *out);                 /* OAM (256 bytes) */

/* CPU register extraction — reads Nestopia's internal CPU state */
typedef struct {
    uint8_t a, x, y, sp, p;
    uint16_t pc;
} NestopiaCpuRegs;

void nestopia_bridge_get_cpu_regs(NestopiaCpuRegs *out);

/* MMC3 mapper state extraction — reads Nestopia's internal mapper registers */
typedef struct {
    uint8_t bank_select;    /* $8000 ctrl0: low 3 bits = reg select, bit 6 = PRG mode, bit 7 = CHR A12 inversion */
    uint8_t ctrl1;          /* $A001 */
    uint8_t regs[8];        /* R0-R7: CHR (0-5) and PRG (6-7) bank values */
    uint8_t prg[4];         /* PRG bank mapping */
    uint8_t irq_latch;
    uint8_t irq_counter;
    int     irq_reload;
    int     irq_enabled;
    int     mirroring;      /* from regs.ctrl0 bit 0 via $A000 */
    int     valid;          /* 1 if board is MMC3, 0 otherwise */
} NestopiaMapperState;

void nestopia_bridge_get_mapper_state(NestopiaMapperState *out);

/* Returns actual PPU mirroring: 2=vertical, 3=horizontal, 0=single-screen, -1=unknown */
int nestopia_bridge_get_mirroring(void);

#ifdef __cplusplus
}
#endif
