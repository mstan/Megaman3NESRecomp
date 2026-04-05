/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

int call_by_address(uint16_t addr) {
    switch (addr) {
        case 0xFE00:
            func_FE00(); break;
        case 0xC000:
            func_C000(); break;
        case 0xC143:
            func_C143(); break;
        case 0x8000:
            switch (g_current_bank) {
                case 15: func_C000(); break;
                case 0: func_8000_b0(); break;
                case 1: func_8000_b1(); break;
                case 2: func_8000_b2(); break;
                case 3: func_8000_b3(); break;
                case 6: func_8000_b6(); break;
                case 7: func_8000_b7(); break;
                case 8: func_8000_b8(); break;
                case 9: func_8000_b9(); break;
                case 11: func_8000_b11(); break;
                case 12: func_8000_b12(); break;
                case 13: func_8000_b13(); break;
                case 14: func_8000_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFF6B:
            func_FF6B(); break;
        case 0xFF3C:
            func_FF3C(); break;
        case 0xC5E9:
            func_C5E9(); break;
        case 0xC59D:
            func_C59D(); break;
        case 0xFEF2:
            func_FEF2(); break;
        case 0xFEAD:
            func_FEAD(); break;
        case 0xC545:
            func_C545(); break;
        case 0xC4F8:
            func_C4F8(); break;
        case 0xC4FC:
            func_C4FC(); break;
        case 0xFF41:
            func_FF41(); break;
        case 0xA15B:
            switch (g_current_bank) {
                case 1: func_A15B_b1(); break;
                case 2: func_A15B_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA030:
            switch (g_current_bank) {
                case 2: func_A030_b2(); break;
                case 4: func_A030_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01C:
            switch (g_current_bank) {
                case 3: func_A01C_b3(); break;
                case 6: func_A01C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFF1A:
            func_FF1A(); break;
        case 0xC752:
            func_C752(); break;
        case 0xC628:
            func_C628(); break;
        case 0xFF21:
            func_FF21(); break;
        case 0xF898:
            func_F898(); break;
        case 0xC531:
            func_C531(); break;
        case 0xC53B:
            func_C53B(); break;
        case 0x85F3:
            switch (g_current_bank) {
                case 6: func_85F3_b6(); break;
                case 12: func_85F3_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC74C:
            func_C74C(); break;
        case 0xE8B4:
            func_E8B4(); break;
        case 0xEF8C:
            func_EF8C(); break;
        case 0xF835:
            func_F835(); break;
        case 0x81E1:
            switch (g_current_bank) {
                case 6: func_81E1_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81AA:
            switch (g_current_bank) {
                case 15: func_C1AA(); break;
                case 6: func_81AA_b6(); break;
                case 12: func_81AA_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA006:
            switch (g_current_bank) {
                case 6: func_A006_b6(); break;
                case 0: func_A006_b0(); break;
                case 1: func_A006_b1(); break;
                case 2: func_A006_b2(); break;
                case 3: func_A006_b3(); break;
                case 4: func_A006_b4(); break;
                case 5: func_A006_b5(); break;
                case 7: func_A006_b7(); break;
                case 10: func_A006_b10(); break;
                case 14: func_A006_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA003:
            switch (g_current_bank) {
                case 6: func_A003_b6(); break;
                case 0: func_A003_b0(); break;
                case 1: func_A003_b1(); break;
                case 2: func_A003_b2(); break;
                case 3: func_A003_b3(); break;
                case 4: func_A003_b4(); break;
                case 5: func_A003_b5(); break;
                case 7: func_A003_b7(); break;
                case 10: func_A003_b10(); break;
                case 14: func_A003_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA000:
            switch (g_current_bank) {
                case 15: func_E000(); break;
                case 6: func_A000_b6(); break;
                case 0: func_A000_b0(); break;
                case 1: func_A000_b1(); break;
                case 2: func_A000_b2(); break;
                case 3: func_A000_b3(); break;
                case 4: func_A000_b4(); break;
                case 5: func_A000_b5(); break;
                case 7: func_A000_b7(); break;
                case 10: func_A000_b10(); break;
                case 14: func_A000_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFD80:
            func_FD80(); break;
        case 0x80F6:
            switch (g_current_bank) {
                case 6: func_80F6_b6(); break;
                case 12: func_80F6_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA05F:
            switch (g_current_bank) {
                case 7: func_A05F_b7(); break;
                case 14: func_A05F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8006:
            switch (g_current_bank) {
                case 15: func_C006(); break;
                case 8: func_8006_b8(); break;
                case 11: func_8006_b11(); break;
                case 0: func_8006_b0(); break;
                case 1: func_8006_b1(); break;
                case 2: func_8006_b2(); break;
                case 3: func_8006_b3(); break;
                case 6: func_8006_b6(); break;
                case 7: func_8006_b7(); break;
                case 9: func_8006_b9(); break;
                case 12: func_8006_b12(); break;
                case 13: func_8006_b13(); break;
                case 14: func_8006_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA058:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x806C:
            switch (g_current_bank) {
                case 11: func_806C_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8018:
            func_8018_b12(); break;
        case 0xFF02:
            func_FF02(); break;
        case 0x800C:
            switch (g_current_bank) {
                case 14: func_800C_b14(); break;
                case 0: func_800C_b0(); break;
                case 1: func_800C_b1(); break;
                case 2: func_800C_b2(); break;
                case 3: func_800C_b3(); break;
                case 6: func_800C_b6(); break;
                case 7: func_800C_b7(); break;
                case 8: func_800C_b8(); break;
                case 9: func_800C_b9(); break;
                case 11: func_800C_b11(); break;
                case 12: func_800C_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8003:
            switch (g_current_bank) {
                case 0: func_8003_b0(); break;
                case 1: func_8003_b1(); break;
                case 2: func_8003_b2(); break;
                case 3: func_8003_b3(); break;
                case 6: func_8003_b6(); break;
                case 7: func_8003_b7(); break;
                case 8: func_8003_b8(); break;
                case 9: func_8003_b9(); break;
                case 11: func_8003_b11(); break;
                case 12: func_8003_b12(); break;
                case 13: func_8003_b13(); break;
                case 14: func_8003_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFFA8:
            func_FFA8(); break;
        case 0xFF16:
            func_FF16(); break;
        case 0xFF14:
            func_FF14(); break;
        case 0xFEAA:
            func_FEAA(); break;
        case 0xEF68:
            func_EF68(); break;
        case 0xE7F1:
            func_E7F1(); break;
        case 0x8354:
            switch (g_current_bank) {
                case 6: func_8354_b6(); break;
                case 12: func_8354_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x836D:
            switch (g_current_bank) {
                case 6: func_836D_b6(); break;
                case 12: func_836D_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85BD:
            switch (g_current_bank) {
                case 6: func_85BD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82B6:
            switch (g_current_bank) {
                case 6: func_82B6_b6(); break;
                case 12: func_82B6_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFF5B:
            func_FF5B(); break;
        case 0xFD77:
            func_FD77(); break;
        case 0xA0C0:
            switch (g_current_bank) {
                case 7: func_A0C0_b7(); break;
                case 15: func_A0C0_b15(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC8A0:
            func_C8A0(); break;
        case 0xF89A:
            func_F89A(); break;
        case 0x804B:
            switch (g_current_bank) {
                case 8: func_804B_b8(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8252:
            switch (g_current_bank) {
                case 11: func_8252_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82DE:
            switch (g_current_bank) {
                case 11: func_82DE_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8393:
            switch (g_current_bank) {
                case 11: func_8393_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFB7B:
            func_FB7B(); break;
        case 0x8102:
            switch (g_current_bank) {
                case 15: func_C102(); break;
                case 14: func_8102_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8097:
            switch (g_current_bank) {
                case 14: func_8097_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8014:
            func_8014_b14(); break;
        case 0x8002:
            func_8002_b0(); break;
        case 0xA18E:
            switch (g_current_bank) {
                case 1: func_A18E_b1(); break;
                case 2: func_A18E_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA398:
            switch (g_current_bank) {
                case 1: func_A398_b1(); break;
                case 2: func_A398_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2EA:
            switch (g_current_bank) {
                case 1: func_A2EA_b1(); break;
                case 2: func_A2EA_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01D:
            switch (g_current_bank) {
                case 1: func_A01D_b1(); break;
                case 0: func_A01D_b0(); break;
                case 2: func_A01D_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA038:
            switch (g_current_bank) {
                case 1: func_A038_b1(); break;
                case 2: func_A038_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01A:
            switch (g_current_bank) {
                case 1: func_A01A_b1(); break;
                case 2: func_A01A_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50D:
            switch (g_current_bank) {
                case 15: func_E50D(); break;
                case 1: func_A50D_b1(); break;
                case 2: func_A50D_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA078:
            switch (g_current_bank) {
                case 1: func_A078_b1(); break;
                case 2: func_A078_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA023:
            switch (g_current_bank) {
                case 15: func_E023(); break;
                case 1: func_A023_b1(); break;
                case 2: func_A023_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0E6:
            switch (g_current_bank) {
                case 1: func_A0E6_b1(); break;
                case 2: func_A0E6_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA250:
            switch (g_current_bank) {
                case 2: func_A250_b2(); break;
                case 1: func_A250_b1(); break;
                case 4: func_A250_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA24E:
            switch (g_current_bank) {
                case 3: func_A24E_b3(); break;
                case 6: func_A24E_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA026:
            switch (g_current_bank) {
                case 7: func_A026_b7(); break;
                case 14: func_A026_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81F3:
            switch (g_current_bank) {
                case 15: func_C1F3(); break;
                case 8: func_81F3_b8(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA364:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80FE:
            switch (g_current_bank) {
                case 15: func_C0FE(); break;
                case 11: func_80FE_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8109:
            func_8109_b14(); break;
        case 0xE882:
            func_E882(); break;
        case 0xE834:
            func_E834(); break;
        case 0xE7FC:
            func_E7FC(); break;
        case 0xFD6E:
            func_FD6E(); break;
        case 0x838C:
            switch (g_current_bank) {
                case 15: func_C38C(); break;
                case 6: func_838C_b6(); break;
                case 12: func_838C_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83C5:
            switch (g_current_bank) {
                case 6: func_83C5_b6(); break;
                case 12: func_83C5_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8430:
            switch (g_current_bank) {
                case 6: func_8430_b6(); break;
                case 5: func_8430_b5(); break;
                case 12: func_8430_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8566:
            switch (g_current_bank) {
                case 6: func_8566_b6(); break;
                case 11: func_8566_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x850F:
            switch (g_current_bank) {
                case 6: func_850F_b6(); break;
                case 3: func_850F_b3(); break;
                case 5: func_850F_b5(); break;
                case 12: func_850F_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEEAB:
            func_EEAB(); break;
        case 0xF034:
            func_F034(); break;
        case 0xA137:
            switch (g_current_bank) {
                case 7: func_A137_b7(); break;
                case 15: func_A137_b15(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01B:
            switch (g_current_bank) {
                case 7: func_A01B_b7(); break;
                case 14: func_A01B_b14(); break;
                case 15: func_A01B_b15(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8386:
            switch (g_current_bank) {
                case 11: func_8386_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8118:
            func_8118_b11(); break;
        case 0x825B:
            switch (g_current_bank) {
                case 11: func_825B_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81C8:
            switch (g_current_bank) {
                case 11: func_81C8_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81D4:
            switch (g_current_bank) {
                case 11: func_81D4_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8684:
            switch (g_current_bank) {
                case 11: func_8684_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x86BA:
            switch (g_current_bank) {
                case 11: func_86BA_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A3:
            switch (g_current_bank) {
                case 11: func_85A3_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8326:
            switch (g_current_bank) {
                case 11: func_8326_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x866F:
            func_866F_b11(); break;
        case 0x86AD:
            func_86AD_b11(); break;
        case 0x865A:
            func_865A_b11(); break;
        case 0x86A7:
            func_86A7_b11(); break;
        case 0x86A1:
            func_86A1_b11(); break;
        case 0x8620:
            func_8620_b11(); break;
        case 0xA883:
            func_A883_b11(); break;
        case 0x80D8:
            switch (g_current_bank) {
                case 11: func_80D8_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85AE:
            switch (g_current_bank) {
                case 11: func_85AE_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8644:
            switch (g_current_bank) {
                case 15: func_C644(); break;
                case 11: func_8644_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8636:
            switch (g_current_bank) {
                case 11: func_8636_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85DE:
            switch (g_current_bank) {
                case 11: func_85DE_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x803A:
            switch (g_current_bank) {
                case 11: func_803A_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8592:
            switch (g_current_bank) {
                case 11: func_8592_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8497:
            switch (g_current_bank) {
                case 11: func_8497_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83CD:
            switch (g_current_bank) {
                case 11: func_83CD_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8491:
            switch (g_current_bank) {
                case 11: func_8491_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x847E:
            switch (g_current_bank) {
                case 11: func_847E_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84D9:
            switch (g_current_bank) {
                case 11: func_84D9_b11(); break;
                case 5: func_84D9_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84DD:
            func_84DD_b11(); break;
        case 0x84E1:
            func_84E1_b11(); break;
        case 0x84E8:
            func_84E8_b11(); break;
        case 0x8575:
            switch (g_current_bank) {
                case 11: func_8575_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84F1:
            func_84F1_b11(); break;
        case 0x84FF:
            func_84FF_b11(); break;
        case 0x8505:
            func_8505_b11(); break;
        case 0x8510:
            func_8510_b11(); break;
        case 0x8515:
            func_8515_b11(); break;
        case 0x851B:
            func_851B_b11(); break;
        case 0x851F:
            func_851F_b11(); break;
        case 0x8523:
            func_8523_b11(); break;
        case 0x8527:
            func_8527_b11(); break;
        case 0x855A:
            switch (g_current_bank) {
                case 11: func_855A_b11(); break;
                case 3: func_855A_b3(); break;
                case 6: func_855A_b6(); break;
                case 9: func_855A_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8580:
            func_8580_b11(); break;
        case 0x86D1:
            func_86D1_b11(); break;
        case 0x86E6:
            func_86E6_b11(); break;
        case 0x8720:
            func_8720_b11(); break;
        case 0x8702:
            func_8702_b11(); break;
        case 0x8914:
            func_8914_b11(); break;
        case 0x871A:
            switch (g_current_bank) {
                case 11: func_871A_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88A0:
            switch (g_current_bank) {
                case 15: func_C8A0(); break;
                case 11: func_88A0_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80EC:
            switch (g_current_bank) {
                case 11: func_80EC_b11(); break;
                case 9: func_80EC_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFBD2:
            func_FBD2(); break;
        case 0x825E:
            func_825E_b14(); break;
        case 0x811F:
            func_811F_b14(); break;
        case 0x824D:
            func_824D_b14(); break;
        case 0x822F:
            func_822F_b14(); break;
        case 0xFAE2:
            func_FAE2(); break;
        case 0x81B6:
            switch (g_current_bank) {
                case 14: func_81B6_b14(); break;
                case 2: func_81B6_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF846:
            func_F846(); break;
        case 0xE11A:
            func_E11A(); break;
        case 0x8096:
            func_8096_b14(); break;
        case 0xA5F2:
            switch (g_current_bank) {
                case 1: func_A5F2_b1(); break;
                case 3: func_A5F2_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA681:
            switch (g_current_bank) {
                case 1: func_A681_b1(); break;
                case 3: func_A681_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5C3:
            switch (g_current_bank) {
                case 1: func_A5C3_b1(); break;
                case 3: func_A5C3_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA765:
            switch (g_current_bank) {
                case 1: func_A765_b1(); break;
                case 3: func_A765_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6AF:
            switch (g_current_bank) {
                case 1: func_A6AF_b1(); break;
                case 2: func_A6AF_b2(); break;
                case 3: func_A6AF_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA61C:
            switch (g_current_bank) {
                case 1: func_A61C_b1(); break;
                case 3: func_A61C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x939E:
            switch (g_current_bank) {
                case 1: func_939E_b1(); break;
                case 12: func_939E_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA593:
            switch (g_current_bank) {
                case 1: func_A593_b1(); break;
                case 2: func_A593_b2(); break;
                case 3: func_A593_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA77C:
            switch (g_current_bank) {
                case 1: func_A77C_b1(); break;
                case 3: func_A77C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7D3:
            switch (g_current_bank) {
                case 1: func_A7D3_b1(); break;
                case 3: func_A7D3_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA88E:
            switch (g_current_bank) {
                case 15: func_E88E(); break;
                case 1: func_A88E_b1(); break;
                case 3: func_A88E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9212:
            switch (g_current_bank) {
                case 15: func_D212(); break;
                case 12: func_9212_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCBCE:
            func_CBCE(); break;
        case 0xA988:
            switch (g_current_bank) {
                case 1: func_A988_b1(); break;
                case 3: func_A988_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA90B:
            switch (g_current_bank) {
                case 1: func_A90B_b1(); break;
                case 3: func_A90B_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA985:
            switch (g_current_bank) {
                case 15: func_E985(); break;
                case 1: func_A985_b1(); break;
                case 3: func_A985_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA946:
            switch (g_current_bank) {
                case 15: func_E946(); break;
                case 1: func_A946_b1(); break;
                case 3: func_A946_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA968:
            switch (g_current_bank) {
                case 1: func_A968_b1(); break;
                case 3: func_A968_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8020:
            func_8020_b1(); break;
        case 0x8001:
            func_8001_b1(); break;
        case 0x8820:
            func_8820_b1(); break;
        case 0xA028:
            func_A028_b1(); break;
        case 0x938B:
            func_938B_b1(); break;
        case 0xF797:
            func_F797(); break;
        case 0xFD52:
            func_FD52(); break;
        case 0xA0D0:
            switch (g_current_bank) {
                case 15: func_E0D0(); break;
                case 1: func_A0D0_b1(); break;
                case 3: func_A0D0_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC86F:
            func_C86F(); break;
        case 0xA05D:
            func_A05D_b1(); break;
        case 0xF883:
            func_F883(); break;
        case 0xFC63:
            func_FC63(); break;
        case 0xF8B3:
            func_F8B3(); break;
        case 0xFCEB:
            func_FCEB(); break;
        case 0xFC53:
            func_FC53(); break;
        case 0x8236:
            switch (g_current_bank) {
                case 8: func_8236_b8(); break;
                case 6: func_8236_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8106:
            switch (g_current_bank) {
                case 11: func_8106_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xE833:
            func_E833(); break;
        case 0xFF57:
            func_FF57(); break;
        case 0xE88D:
            func_E88D(); break;
        case 0xE7F4:
            func_E7F4(); break;
        case 0xEF2D:
            func_EF2D(); break;
        case 0xF298:
            func_F298(); break;
        case 0xF06B:
            func_F06B(); break;
        case 0xA0EF:
            switch (g_current_bank) {
                case 7: func_A0EF_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81C5:
            func_81C5_b11(); break;
        case 0x81E4:
            switch (g_current_bank) {
                case 11: func_81E4_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x821E:
            func_821E_b11(); break;
        case 0x8226:
            switch (g_current_bank) {
                case 11: func_8226_b11(); break;
                case 6: func_8226_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x822D:
            func_822D_b11(); break;
        case 0x8234:
            func_8234_b11(); break;
        case 0x824A:
            func_824A_b11(); break;
        case 0xE420:
            func_E420(); break;
        case 0xA981:
            switch (g_current_bank) {
                case 11: func_A981_b11(); break;
                case 14: func_A981_b14(); break;
                case 1: func_A981_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8500:
            switch (g_current_bank) {
                case 11: func_8500_b11(); break;
                case 3: func_8500_b3(); break;
                case 6: func_8500_b6(); break;
                case 9: func_8500_b9(); break;
                case 5: func_8500_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85CE:
            func_85CE_b11(); break;
        case 0x85D0:
            func_85D0_b11(); break;
        case 0x85D1:
            func_85D1_b11(); break;
        case 0x85D7:
            func_85D7_b11(); break;
        case 0xA5D8:
            switch (g_current_bank) {
                case 3: func_A5D8_b3(); break;
                case 7: func_A5D8_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF0CF:
            func_F0CF(); break;
        case 0x81F1:
            switch (g_current_bank) {
                case 11: func_81F1_b11(); break;
                case 5: func_81F1_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x825D:
            func_825D_b14(); break;
        case 0xA7A8:
            func_A7A8_b1(); break;
        case 0xC8FF:
            func_C8FF(); break;
        case 0xA8EB:
            func_A8EB_b1(); break;
        case 0x87E8:
            func_87E8_b1(); break;
        case 0xF7A8:
            func_F7A8(); break;
        case 0xF7E6:
            func_F7E6(); break;
        case 0xF7C8:
            func_F7C8(); break;
        case 0xC864:
            func_C864(); break;
        case 0xF8C2:
            func_F8C2(); break;
        case 0xFD11:
            func_FD11(); break;
        case 0x81AE:
            switch (g_current_bank) {
                case 15: func_C1AE(); break;
                case 11: func_81AE_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF2BB:
            func_F2BB(); break;
        case 0xF108:
            func_F108(); break;
        case 0xE4F1:
            func_E4F1(); break;
        case 0xC816:
            func_C816(); break;
        case 0xCD34:
            func_CD34(); break;
        case 0xE16A:
            func_E16A(); break;
        case 0x9C00:
            switch (g_current_bank) {
                case 0: func_9C00_b0(); break;
                case 1: func_9C00_b1(); break;
                case 4: func_9C00_b4(); break;
                case 6: func_9C00_b6(); break;
                case 7: func_9C00_b7(); break;
                case 8: func_9C00_b8(); break;
                case 9: func_9C00_b9(); break;
                case 10: func_9C00_b10(); break;
                case 11: func_9C00_b11(); break;
                case 12: func_9C00_b12(); break;
                case 13: func_9C00_b13(); break;
                case 14: func_9C00_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x800F:
            switch (g_current_bank) {
                case 0: func_800F_b0(); break;
                case 1: func_800F_b1(); break;
                case 2: func_800F_b2(); break;
                case 3: func_800F_b3(); break;
                case 6: func_800F_b6(); break;
                case 7: func_800F_b7(); break;
                case 8: func_800F_b8(); break;
                case 9: func_800F_b9(); break;
                case 11: func_800F_b11(); break;
                case 12: func_800F_b12(); break;
                case 14: func_800F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8009:
            switch (g_current_bank) {
                case 15: func_C009(); break;
                case 0: func_8009_b0(); break;
                case 1: func_8009_b1(); break;
                case 2: func_8009_b2(); break;
                case 3: func_8009_b3(); break;
                case 6: func_8009_b6(); break;
                case 7: func_8009_b7(); break;
                case 8: func_8009_b8(); break;
                case 9: func_8009_b9(); break;
                case 11: func_8009_b11(); break;
                case 12: func_8009_b12(); break;
                case 13: func_8009_b13(); break;
                case 14: func_8009_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8012:
            switch (g_current_bank) {
                case 0: func_8012_b0(); break;
                case 1: func_8012_b1(); break;
                case 2: func_8012_b2(); break;
                case 3: func_8012_b3(); break;
                case 6: func_8012_b6(); break;
                case 7: func_8012_b7(); break;
                case 8: func_8012_b8(); break;
                case 9: func_8012_b9(); break;
                case 11: func_8012_b11(); break;
                case 12: func_8012_b12(); break;
                case 14: func_8012_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC798:
            func_C798(); break;
        case 0xC7FB:
            func_C7FB(); break;
        case 0xCA73:
            func_CA73(); break;
        case 0x9000:
            switch (g_current_bank) {
                case 15: func_D000(); break;
                case 1: func_9000_b1(); break;
                case 2: func_9000_b2(); break;
                case 4: func_9000_b4(); break;
                case 5: func_9000_b5(); break;
                case 6: func_9000_b6(); break;
                case 7: func_9000_b7(); break;
                case 9: func_9000_b9(); break;
                case 10: func_9000_b10(); break;
                case 11: func_9000_b11(); break;
                case 12: func_9000_b12(); break;
                case 14: func_9000_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCC18:
            func_CC18(); break;
        case 0x9006:
            switch (g_current_bank) {
                case 15: func_D006(); break;
                case 0: func_9006_b0(); break;
                case 1: func_9006_b1(); break;
                case 2: func_9006_b2(); break;
                case 5: func_9006_b5(); break;
                case 6: func_9006_b6(); break;
                case 7: func_9006_b7(); break;
                case 9: func_9006_b9(); break;
                case 10: func_9006_b10(); break;
                case 11: func_9006_b11(); break;
                case 12: func_9006_b12(); break;
                case 14: func_9006_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9003:
            switch (g_current_bank) {
                case 15: func_D003(); break;
                case 0: func_9003_b0(); break;
                case 1: func_9003_b1(); break;
                case 2: func_9003_b2(); break;
                case 5: func_9003_b5(); break;
                case 6: func_9003_b6(); break;
                case 7: func_9003_b7(); break;
                case 9: func_9003_b9(); break;
                case 10: func_9003_b10(); break;
                case 11: func_9003_b11(); break;
                case 12: func_9003_b12(); break;
                case 14: func_9003_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC514:
            func_C514(); break;
        case 0xA1DD:
            switch (g_current_bank) {
                case 2: func_A1DD_b2(); break;
                case 5: func_A1DD_b5(); break;
                case 14: func_A1DD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA019:
            switch (g_current_bank) {
                case 3: func_A019_b3(); break;
                case 7: func_A019_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82D1:
            switch (g_current_bank) {
                case 9: func_82D1_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA180:
            switch (g_current_bank) {
                case 14: func_A180_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF67C:
            func_F67C(); break;
        case 0xA0D3:
            switch (g_current_bank) {
                case 14: func_A0D3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF580:
            func_F580(); break;
        case 0xA07A:
            switch (g_current_bank) {
                case 14: func_A07A_b14(); break;
                case 7: func_A07A_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF5C4:
            func_F5C4(); break;
        case 0xA098:
            switch (g_current_bank) {
                case 14: func_A098_b14(); break;
                case 2: func_A098_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF2BA:
            func_F2BA(); break;
        case 0xF107:
            func_F107(); break;
        case 0xE50F:
            func_E50F(); break;
        case 0xE8B1:
            func_E8B1(); break;
        case 0xA022:
            switch (g_current_bank) {
                case 15: func_E022(); break;
                case 2: func_A022_b2(); break;
                case 5: func_A022_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA277:
            switch (g_current_bank) {
                case 3: func_A277_b3(); break;
                case 7: func_A277_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8332:
            switch (g_current_bank) {
                case 9: func_8332_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8439:
            switch (g_current_bank) {
                case 5: func_8439_b5(); break;
                case 11: func_8439_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCDEC:
            func_CDEC(); break;
        case 0xE228:
            func_E228(); break;
        case 0xE224:
            func_E224(); break;
        case 0xE467:
            func_E467(); break;
        case 0xE33C:
            func_E33C(); break;
        case 0xC83D:
            func_C83D(); break;
        case 0xE2F4:
            func_E2F4(); break;
        case 0xEE31:
            func_EE31(); break;
        case 0xE5D1:
            func_E5D1(); break;
        case 0xE338:
            func_E338(); break;
        case 0xEE44:
            func_EE44(); break;
        case 0x8100:
            switch (g_current_bank) {
                case 12: func_8100_b12(); break;
                case 2: func_8100_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8004:
            switch (g_current_bank) {
                case 15: func_C004(); break;
                case 12: func_8004_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD80C:
            func_D80C(); break;
        case 0x9C80:
            switch (g_current_bank) {
                case 13: func_9C80_b13(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C7F:
            func_9C7F_b13(); break;
        case 0xA49A:
            switch (g_current_bank) {
                case 2: func_A49A_b2(); break;
                case 4: func_A49A_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4B3:
            switch (g_current_bank) {
                case 3: func_A4B3_b3(); break;
                case 6: func_A4B3_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA424:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82B8:
            switch (g_current_bank) {
                case 14: func_82B8_b14(); break;
                case 11: func_82B8_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x800A:
            func_800A_b0(); break;
        case 0xA44D:
            switch (g_current_bank) {
                case 2: func_A44D_b2(); break;
                case 4: func_A44D_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA62B:
            switch (g_current_bank) {
                case 3: func_A62B_b3(); break;
                case 6: func_A62B_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xABD6:
            switch (g_current_bank) {
                case 9: func_ABD6_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6E5:
            switch (g_current_bank) {
                case 2: func_A6E5_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA698:
            switch (g_current_bank) {
                case 15: func_E698(); break;
                case 3: func_A698_b3(); break;
                case 14: func_A698_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7BA:
            switch (g_current_bank) {
                case 15: func_E7BA(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA13C:
            switch (g_current_bank) {
                case 2: func_A13C_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA472:
            switch (g_current_bank) {
                case 3: func_A472_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC97:
            switch (g_current_bank) {
                case 9: func_AC97_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D06:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA465:
            switch (g_current_bank) {
                case 15: func_E465(); break;
                case 2: func_A465_b2(); break;
                case 4: func_A465_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8E0:
            switch (g_current_bank) {
                case 3: func_A8E0_b3(); break;
                case 6: func_A8E0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD25:
            switch (g_current_bank) {
                case 9: func_AD25_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9410:
            switch (g_current_bank) {
                case 12: func_9410_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9034:
            switch (g_current_bank) {
                case 14: func_9034_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC909:
            func_C909(); break;
        case 0xC9B3:
            func_C9B3(); break;
        case 0x9ABE:
            switch (g_current_bank) {
                case 15: func_DABE(); break;
                case 12: func_9ABE_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x985D:
            switch (g_current_bank) {
                case 12: func_985D_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC50D:
            func_C50D(); break;
        case 0xA1DC:
            func_A1DC_b2(); break;
        case 0xA252:
            switch (g_current_bank) {
                case 2: func_A252_b2(); break;
                case 5: func_A252_b5(); break;
                case 6: func_A252_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF606:
            func_F606(); break;
        case 0xF642:
            func_F642(); break;
        case 0xF5CC:
            func_F5CC(); break;
        case 0xF588:
            func_F588(); break;
        case 0xF869:
            func_F869(); break;
        case 0xF779:
            func_F779(); break;
        case 0xF97E:
            func_F97E(); break;
        case 0xFAAE:
            func_FAAE(); break;
        case 0xF6A4:
            func_F6A4(); break;
        case 0xF6C8:
            func_F6C8(); break;
        case 0xF66A:
            func_F66A(); break;
        case 0xE8D6:
            func_E8D6(); break;
        case 0xF700:
            func_F700(); break;
        case 0xEE13:
            func_EE13(); break;
        case 0xF81B:
            func_F81B(); break;
        case 0xFABF:
            func_FABF(); break;
        case 0xF6E3:
            func_F6E3(); break;
        case 0xF6FB:
            func_F6FB(); break;
        case 0xF630:
            func_F630(); break;
        case 0xEDF9:
            func_EDF9(); break;
        case 0xA0EC:
            switch (g_current_bank) {
                case 14: func_A0EC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA104:
            switch (g_current_bank) {
                case 15: func_E104(); break;
                case 14: func_A104_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA293:
            switch (g_current_bank) {
                case 14: func_A293_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF71D:
            func_F71D(); break;
        case 0xFA00:
            func_FA00(); break;
        case 0xFA7D:
            func_FA7D(); break;
        case 0xF5AA:
            func_F5AA(); break;
        case 0xF5F4:
            func_F5F4(); break;
        case 0xE9E3:
            func_E9E3(); break;
        case 0xEDCB:
            func_EDCB(); break;
        case 0xF73B:
            func_F73B(); break;
        case 0xFA91:
            func_FA91(); break;
        case 0xF5EE:
            func_F5EE(); break;
        case 0xF5B2:
            func_F5B2(); break;
        case 0xEDE3:
            func_EDE3(); break;
        case 0xA308:
            switch (g_current_bank) {
                case 15: func_E308(); break;
                case 3: func_A308_b3(); break;
                case 7: func_A308_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2B0:
            switch (g_current_bank) {
                case 15: func_E2B0(); break;
                case 3: func_A2B0_b3(); break;
                case 7: func_A2B0_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF759:
            func_F759(); break;
        case 0xA2C3:
            switch (g_current_bank) {
                case 3: func_A2C3_b3(); break;
                case 7: func_A2C3_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCE1A:
            func_CE1A(); break;
        case 0xE227:
            func_E227(); break;
        case 0xE4AF:
            func_E4AF(); break;
        case 0xE4E5:
            func_E4E5(); break;
        case 0xE33B:
            func_E33B(); break;
        case 0xE3C7:
            func_E3C7(); break;
        case 0xEB6D:
            func_EB6D(); break;
        case 0xE614:
            func_E614(); break;
        case 0xFC43:
            func_FC43(); break;
        case 0xA518:
            switch (g_current_bank) {
                case 2: func_A518_b2(); break;
                case 5: func_A518_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA498:
            switch (g_current_bank) {
                case 2: func_A498_b2(); break;
                case 5: func_A498_b5(); break;
                case 14: func_A498_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA617:
            func_A617_b3(); break;
        case 0xA612:
            switch (g_current_bank) {
                case 15: func_E612(); break;
                case 3: func_A612_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA35D:
            switch (g_current_bank) {
                case 3: func_A35D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA13A:
            switch (g_current_bank) {
                case 2: func_A13A_b2(); break;
                case 14: func_A13A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA433:
            func_A433_b3(); break;
        case 0xA451:
            switch (g_current_bank) {
                case 2: func_A451_b2(); break;
                case 5: func_A451_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA43C:
            func_A43C_b2(); break;
        case 0x9581:
            switch (g_current_bank) {
                case 12: func_9581_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9936:
            switch (g_current_bank) {
                case 12: func_9936_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x94D6:
            switch (g_current_bank) {
                case 12: func_94D6_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x954A:
            switch (g_current_bank) {
                case 12: func_954A_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8DD:
            func_A8DD_b12(); break;
        case 0x93E9:
            switch (g_current_bank) {
                case 12: func_93E9_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x93FE:
            switch (g_current_bank) {
                case 12: func_93FE_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98F2:
            switch (g_current_bank) {
                case 12: func_98F2_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9ABC:
            switch (g_current_bank) {
                case 12: func_9ABC_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA879:
            switch (g_current_bank) {
                case 12: func_A879_b12(); break;
                case 1: func_A879_b1(); break;
                case 2: func_A879_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF628:
            func_F628(); break;
        case 0xF664:
            func_F664(); break;
        case 0xFA53:
            func_FA53(); break;
        case 0xFA6C:
            func_FA6C(); break;
        case 0xFAD6:
            func_FAD6(); break;
        case 0xEB0C:
            func_EB0C(); break;
        case 0xEB24:
            func_EB24(); break;
        case 0xEB30:
            func_EB30(); break;
        case 0xEB8A:
            func_EB8A(); break;
        case 0xE94D:
            func_E94D(); break;
        case 0xFAA2:
            func_FAA2(); break;
        case 0xEA92:
            func_EA92(); break;
        case 0xE67A:
            func_E67A(); break;
        case 0xE698:
            func_E698(); break;
        case 0xE623:
            func_E623(); break;
        case 0x968C:
            switch (g_current_bank) {
                case 12: func_968C_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x995C:
            switch (g_current_bank) {
                case 12: func_995C_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99FA:
            switch (g_current_bank) {
                case 12: func_99FA_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x970B:
            switch (g_current_bank) {
                case 12: func_970B_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97EC:
            switch (g_current_bank) {
                case 12: func_97EC_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A87:
            switch (g_current_bank) {
                case 12: func_9A87_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9681:
            switch (g_current_bank) {
                case 12: func_9681_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9762:
            switch (g_current_bank) {
                case 12: func_9762_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9258:
            switch (g_current_bank) {
                case 12: func_9258_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9509:
            switch (g_current_bank) {
                case 12: func_9509_b12(); break;
                case 14: func_9509_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8DB:
            nes_log_dispatch_miss(addr); return 0;
        case 0x9155:
            switch (g_current_bank) {
                case 12: func_9155_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEA8F:
            func_EA8F(); break;
        case 0xE6B7:
            func_E6B7(); break;
        case 0xE79F:
            func_E79F(); break;
        case 0x96FC:
            switch (g_current_bank) {
                case 12: func_96FC_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99DC:
            switch (g_current_bank) {
                case 12: func_99DC_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A58:
            switch (g_current_bank) {
                case 12: func_9A58_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9300:
            switch (g_current_bank) {
                case 12: func_9300_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9A4F:
            switch (g_current_bank) {
                case 12: func_9A4F_b12(); break;
                case 14: func_9A4F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x92F2:
            func_92F2_b12(); break;
        case 0xFFA5:
            func_FFA5(); break;
        case 0xFFA6:
            func_FFA6(); break;
        case 0xEEA5:
            func_EEA5(); break;
        case 0xD09A:
            func_D09A(); break;
        case 0xD09B:
            func_D09B(); break;
        case 0xFCA5:
            func_FCA5(); break;
        case 0xFCA6:
            func_FCA6(); break;
        case 0xFDA5:
            func_FDA5(); break;
        case 0xFDA6:
            func_FDA6(); break;
        case 0xF8A5:
            func_F8A5(); break;
        case 0xF8A6:
            func_F8A6(); break;
        case 0xD050:
            func_D050(); break;
        case 0xF019:
            func_F019(); break;
        case 0xF01A:
            func_F01A(); break;
        case 0xF820:
            func_F820(); break;
        case 0xF821:
            func_F821(); break;
        case 0xF01B:
            func_F01B(); break;
        case 0xF018:
            func_F018(); break;
        case 0xE820:
            func_E820(); break;
        case 0xE821:
            func_E821(); break;
        case 0xD088:
            func_D088(); break;
        case 0xD089:
            func_D089(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xC979:
            func_C979(); break;
        case 0xD002:
            func_D002(); break;
        case 0xF021:
            func_F021(); break;
        case 0xFAA5:
            func_FAA5(); break;
        case 0xFAA6:
            func_FAA6(); break;
        case 0xFEA5:
            func_FEA5(); break;
        case 0xFEA6:
            func_FEA6(); break;
        case 0xFF05:
            func_FF05(); break;
        case 0xFF06:
            func_FF06(); break;
        case 0xF0A5:
            func_F0A5(); break;
        case 0xF0A6:
            func_F0A6(); break;
        case 0xC001:
            func_C001(); break;
        case 0xC002:
            func_C002(); break;
        case 0xE000:
            func_E000(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xF050:
            func_F050(); break;
        case 0xF051:
            func_F051(); break;
        case 0xC57C:
            func_C57C(); break;
        case 0xDABD:
            func_DABD(); break;
        case 0xDABE:
            func_DABE(); break;
        case 0xE69D:
            func_E69D(); break;
        case 0xE69E:
            func_E69E(); break;
        case 0xFFA3:
            func_FFA3(); break;
        case 0xE890:
            func_E890(); break;
        case 0xE891:
            func_E891(); break;
        case 0xC980:
            func_C980(); break;
        case 0xC981:
            func_C981(); break;
        case 0xD001:
            func_D001(); break;
        case 0xD609:
            func_D609(); break;
        case 0xD081:
            func_D081(); break;
        case 0xD082:
            func_D082(); break;
        case 0xE880:
            func_E880(); break;
        case 0xE881:
            func_E881(); break;
        case 0xE8E9:
            func_E8E9(); break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xEBD1:
            func_EBD1(); break;
        case 0xC1A9:
            func_C1A9(); break;
        case 0xC1AA:
            func_C1AA(); break;
        case 0xE97C:
            func_E97C(); break;
        case 0xE97D:
            func_E97D(); break;
        case 0xE97E:
            func_E97E(); break;
        case 0xFF90:
            func_FF90(); break;
        case 0xFF91:
            func_FF91(); break;
        case 0xE002:
            func_E002(); break;
        case 0xF00B:
            func_F00B(); break;
        case 0xF00C:
            func_F00C(); break;
        case 0xC0A9:
            func_C0A9(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xC4BD:
            func_C4BD(); break;
        case 0xC4BE:
            func_C4BE(); break;
        case 0xE938:
            func_E938(); break;
        case 0xC9AE:
            func_C9AE(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDBAE:
            func_DBAE(); break;
        case 0xC4BA:
            func_C4BA(); break;
        case 0xC4BB:
            func_C4BB(); break;
        case 0xE538:
            func_E538(); break;
        case 0xE539:
            func_E539(); break;
        case 0xC951:
            func_C951(); break;
        case 0xD0B0:
            func_D0B0(); break;
        case 0xD0B1:
            func_D0B1(); break;
        case 0xC9BD:
            func_C9BD(); break;
        case 0xC9BE:
            func_C9BE(); break;
        case 0xDBBD:
            func_DBBD(); break;
        case 0xDBBE:
            func_DBBE(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xE0AE:
            func_E0AE(); break;
        case 0xFF49:
            func_FF49(); break;
        case 0xFF4A:
            func_FF4A(); break;
        case 0xD0AD:
            func_D0AD(); break;
        case 0xD0AE:
            func_D0AE(); break;
        case 0xE2AE:
            func_E2AE(); break;
        case 0xEC5A:
            func_EC5A(); break;
        case 0xEF7A:
            func_EF7A(); break;
        case 0xD2AD:
            func_D2AD(); break;
        case 0xD2AE:
            func_D2AE(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xF5B9:
            func_F5B9(); break;
        case 0xF5BA:
            func_F5BA(); break;
        case 0xE621:
            func_E621(); break;
        case 0xC973:
            func_C973(); break;
        case 0xC974:
            func_C974(); break;
        case 0xF003:
            func_F003(); break;
        case 0xF004:
            func_F004(); break;
        case 0xD1AD:
            func_D1AD(); break;
        case 0xE3AD:
            func_E3AD(); break;
        case 0xE3AE:
            func_E3AE(); break;
        case 0xD4AD:
            func_D4AD(); break;
        case 0xD4AE:
            func_D4AE(); break;
        case 0xE6AD:
            func_E6AD(); break;
        case 0xE6AE:
            func_E6AE(); break;
        case 0xE009:
            func_E009(); break;
        case 0xE00A:
            func_E00A(); break;
        case 0xD6AD:
            func_D6AD(); break;
        case 0xD6AE:
            func_D6AE(); break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xC152:
            func_C152(); break;
        case 0xC153:
            func_C153(); break;
        case 0xD8AE:
            func_D8AE(); break;
        case 0xEAAD:
            func_EAAD(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xE885:
            func_E885(); break;
        case 0xE886:
            func_E886(); break;
        case 0xE985:
            func_E985(); break;
        case 0xE986:
            func_E986(); break;
        case 0xFF45:
            func_FF45(); break;
        case 0xFF46:
            func_FF46(); break;
        case 0xE6E9:
            func_E6E9(); break;
        case 0xE6EA:
            func_E6EA(); break;
        case 0xE8A5:
            func_E8A5(); break;
        case 0xE9A5:
            func_E9A5(); break;
        case 0xE9A6:
            func_E9A6(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xE8F6:
            func_E8F6(); break;
        case 0xE8F7:
            func_E8F7(); break;
        case 0xD0E8:
            func_D0E8(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xFF86:
            func_FF86(); break;
        case 0xE660:
            func_E660(); break;
        case 0xE661:
            func_E661(); break;
        case 0xEEE6:
            func_EEE6(); break;
        case 0xEEE7:
            func_EEE7(); break;
        case 0xFE85:
            func_FE85(); break;
        case 0xFE86:
            func_FE86(); break;
        case 0xC660:
            func_C660(); break;
        case 0xEEC6:
            func_EEC6(); break;
        case 0xCA41:
            func_CA41(); break;
        case 0xCA02:
            func_CA02(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xCA16:
            func_CA16(); break;
        case 0xF210:
            func_F210(); break;
        case 0xF211:
            func_F211(); break;
        case 0xC90C:
            func_C90C(); break;
        case 0xC90D:
            func_C90D(); break;
        case 0xF00D:
            func_F00D(); break;
        case 0xC903:
            func_C903(); break;
        case 0xC904:
            func_C904(); break;
        case 0xD004:
            func_D004(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xCA14:
            func_CA14(); break;
        case 0xCA15:
            func_CA15(); break;
        case 0xE710:
            func_E710(); break;
        case 0xE711:
            func_E711(); break;
        case 0xFE2A:
            func_FE2A(); break;
        case 0xC905:
            func_C905(); break;
        case 0xFAD0:
            func_FAD0(); break;
        case 0xFAD1:
            func_FAD1(); break;
        case 0xCAFB:
            func_CAFB(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xC900:
            func_C900(); break;
        case 0xC901:
            func_C901(); break;
        case 0xCA20:
            func_CA20(); break;
        case 0xCA21:
            func_CA21(); break;
        case 0xC931:
            func_C931(); break;
        case 0xD007:
            func_D007(); break;
        case 0xD008:
            func_D008(); break;
        case 0xD097:
            func_D097(); break;
        case 0xD098:
            func_D098(); break;
        case 0xE097:
            func_E097(); break;
        case 0xD005:
            func_D005(); break;
        case 0xF8AA:
            func_F8AA(); break;
        case 0xF072:
            func_F072(); break;
        case 0xF073:
            func_F073(); break;
        case 0xE802:
            func_E802(); break;
        case 0xE803:
            func_E803(); break;
        case 0xD071:
            func_D071(); break;
        case 0xD072:
            func_D072(); break;
        case 0xC9F8:
            func_C9F8(); break;
        case 0xC9F9:
            func_C9F9(); break;
        case 0xFFAA:
            func_FFAA(); break;
        case 0xC09D:
            func_C09D(); break;
        case 0xCA04:
            func_CA04(); break;
        case 0xCA05:
            func_CA05(); break;
        case 0xD8BA:
            func_D8BA(); break;
        case 0xD9B9:
            func_D9B9(); break;
        case 0xD9BA:
            func_D9BA(); break;
        case 0xDAB9:
            func_DAB9(); break;
        case 0xDABA:
            func_DABA(); break;
        case 0xDBB9:
            func_DBB9(); break;
        case 0xDBBA:
            func_DBBA(); break;
        case 0xE210:
            func_E210(); break;
        case 0xE211:
            func_E211(); break;
        case 0xF110:
            func_F110(); break;
        case 0xF111:
            func_F111(); break;
        case 0xF9A5:
            func_F9A5(); break;
        case 0xF9A6:
            func_F9A6(); break;
        case 0xC803:
            func_C803(); break;
        case 0xCAC8:
            func_CAC8(); break;
        case 0xCAC9:
            func_CAC9(); break;
        case 0xCACB:
            func_CACB(); break;
        case 0xDB10:
            func_DB10(); break;
        case 0xDB11:
            func_DB11(); break;
        case 0xF710:
            func_F710(); break;
        case 0xF711:
            func_F711(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF011:
            func_F011(); break;
        case 0xFF22:
            func_FF22(); break;
        case 0xC910:
            func_C910(); break;
        case 0xC610:
            func_C610(); break;
        case 0xC611:
            func_C611(); break;
        case 0xF01D:
            func_F01D(); break;
        case 0xC91D:
            func_C91D(); break;
        case 0xC91E:
            func_C91E(); break;
        case 0xF0C9:
            func_F0C9(); break;
        case 0xF0CA:
            func_F0CA(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xE60C:
            func_E60C(); break;
        case 0xE60D:
            func_E60D(); break;
        case 0xC8A8:
            func_C8A8(); break;
        case 0xC8A9:
            func_C8A9(); break;
        case 0xC8AA:
            func_C8AA(); break;
        case 0xE4B5:
            func_E4B5(); break;
        case 0xE4B6:
            func_E4B6(); break;
        case 0xE5B6:
            func_E5B6(); break;
        case 0xE477:
            func_E477(); break;
        case 0xE8E4:
            func_E8E4(); break;
        case 0xE8E5:
            func_E8E5(); break;
        case 0xF585:
            func_F585(); break;
        case 0xFF6C:
            func_FF6C(); break;
        case 0xEA85:
            func_EA85(); break;
        case 0xEB85:
            func_EB85(); break;
        case 0xEB86:
            func_EB86(); break;
        case 0xC806:
            func_C806(); break;
        case 0xC807:
            func_C807(); break;
        case 0xE8C8:
            func_E8C8(); break;
        case 0xE8C9:
            func_E8C9(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xE0E9:
            func_E0E9(); break;
        case 0xD010:
            func_D010(); break;
        case 0xD011:
            func_D011(); break;
        case 0xF1D0:
            func_F1D0(); break;
        case 0xF1D1:
            func_F1D1(); break;
        case 0xC801:
            func_C801(); break;
        case 0xE3D0:
            func_E3D0(); break;
        case 0xE3D1:
            func_E3D1(); break;
        case 0xF5A5:
            func_F5A5(); break;
        case 0xF5A6:
            func_F5A6(); break;
        case 0xC9F6:
            func_C9F6(); break;
        case 0xF013:
            func_F013(); break;
        case 0xF014:
            func_F014(); break;
        case 0xF899:
            func_F899(); break;
        case 0xF485:
            func_F485(); break;
        case 0xFA10:
            func_FA10(); break;
        case 0xEE86:
            func_EE86(); break;
        case 0xC753:
            func_C753(); break;
        case 0xE920:
            func_E920(); break;
        case 0xC5EA:
            func_C5EA(); break;
        case 0xF886:
            func_F886(); break;
        case 0xFD85:
            func_FD85(); break;
        case 0xFD86:
            func_FD86(); break;
        case 0xFC85:
            func_FC85(); break;
        case 0xFA86:
            func_FA86(); break;
        case 0xF985:
            func_F985(); break;
        case 0xE08D:
            func_E08D(); break;
        case 0xE08E:
            func_E08E(); break;
        case 0xF120:
            func_F120(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xF2F1:
            func_F2F1(); break;
        case 0xE02A:
            func_E02A(); break;
        case 0xC029:
            func_C029(); break;
        case 0xF0C0:
            func_F0C0(); break;
        case 0xF0C1:
            func_F0C1(); break;
        case 0xE8A9:
            func_E8A9(); break;
        case 0xE8AA:
            func_E8AA(); break;
        case 0xD0F9:
            func_D0F9(); break;
        case 0xD0FA:
            func_D0FA(); break;
        case 0xC922:
            func_C922(); break;
        case 0xC923:
            func_C923(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xE606:
            func_E606(); break;
        case 0xF8BE:
            func_F8BE(); break;
        case 0xF9BE:
            func_F9BE(); break;
        case 0xFABD:
            func_FABD(); break;
        case 0xFBBD:
            func_FBBD(); break;
        case 0xE700:
            func_E700(); break;
        case 0xE6EE:
            func_E6EE(); break;
        case 0xE6EF:
            func_E6EF(); break;
        case 0xC08E:
            func_C08E(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xF9A9:
            func_F9A9(); break;
        case 0xF9AA:
            func_F9AA(); break;
        case 0xF836:
            func_F836(); break;
        case 0xF005:
            func_F005(); break;
        case 0xC936:
            func_C936(); break;
        case 0xC937:
            func_C937(); break;
        case 0xF007:
            func_F007(); break;
        case 0xF008:
            func_F008(); break;
        case 0xC933:
            func_C933(); break;
        case 0xF001:
            func_F001(); break;
        case 0xF03D:
            func_F03D(); break;
        case 0xF03E:
            func_F03E(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xF2AA:
            func_F2AA(); break;
        case 0xF89B:
            func_F89B(); break;
        case 0xE16B:
            func_E16B(); break;
        case 0xC503:
            func_C503(); break;
        case 0xC504:
            func_C504(); break;
        case 0xF487:
            func_F487(); break;
        case 0xE8F4:
            func_E8F4(); break;
        case 0xE8F5:
            func_E8F5(); break;
        case 0xF587:
            func_F587(); break;
        case 0xFB20:
            func_FB20(); break;
        case 0xC7FC:
            func_C7FC(); break;
        case 0xD05A:
            func_D05A(); break;
        case 0xD03C:
            func_D03C(); break;
        case 0xD03D:
            func_D03D(); break;
        case 0xD074:
            func_D074(); break;
        case 0xD075:
            func_D075(); break;
        case 0xFF4C:
            func_FF4C(); break;
        case 0xFF4D:
            func_FF4D(); break;
        case 0xC960:
            func_C960(); break;
        case 0xC961:
            func_C961(); break;
        case 0xF012:
            func_F012(); break;
        case 0xD07F:
            func_D07F(); break;
        case 0xD080:
            func_D080(); break;
        case 0xC975:
            func_C975(); break;
        case 0xD970:
            func_D970(); break;
        case 0xF8D9:
            func_F8D9(); break;
        case 0xF8DA:
            func_F8DA(); break;
        case 0xC804:
            func_C804(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0xD0C9:
            func_D0C9(); break;
        case 0xC90A:
            func_C90A(); break;
        case 0xF8BA:
            func_F8BA(); break;
        case 0xC0B9:
            func_C0B9(); break;
        case 0xF0BE:
            func_F0BE(); break;
        case 0xF0BF:
            func_F0BF(); break;
        case 0xD02A:
            func_D02A(); break;
        case 0xD02B:
            func_D02B(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD021:
            func_D021(); break;
        case 0xC62F:
            func_C62F(); break;
        case 0xF036:
            func_F036(); break;
        case 0xEC20:
            func_EC20(); break;
        case 0xEC21:
            func_EC21(); break;
        case 0xF039:
            func_F039(); break;
        case 0xF03A:
            func_F03A(); break;
        case 0xC60C:
            func_C60C(); break;
        case 0xC60D:
            func_C60D(); break;
        case 0xD039:
            func_D039(); break;
        case 0xD03A:
            func_D03A(); break;
        case 0xD040:
            func_D040(); break;
        case 0xE0AA:
            func_E0AA(); break;
        case 0xD01F:
            func_D01F(); break;
        case 0xC9A0:
            func_C9A0(); break;
        case 0xC9A1:
            func_C9A1(); break;
        case 0xF67D:
            func_F67D(); break;
        case 0xC0CD:
            func_C0CD(); break;
        case 0xC0CE:
            func_C0CE(); break;
        case 0xC030:
            func_C030(); break;
        case 0xC031:
            func_C031(); break;
        case 0xCE1B:
            func_CE1B(); break;
        case 0xC420:
            func_C420(); break;
        case 0xC421:
            func_C421(); break;
        case 0xC05D:
            func_C05D(); break;
        case 0xC05E:
            func_C05E(); break;
        case 0xC0AD:
            func_C0AD(); break;
        case 0xC0AE:
            func_C0AE(); break;
        case 0xC906:
            func_C906(); break;
        case 0xD012:
            func_D012(); break;
        case 0xC1AC:
            func_C1AC(); break;
        case 0xC005:
            func_C005(); break;
        case 0xC006:
            func_C006(); break;
        case 0xD7C1:
            func_D7C1(); break;
        case 0xEFBA:
            func_EFBA(); break;
        case 0xCCEF:
            func_CCEF(); break;
        case 0xCCF2:
            func_CCF2(); break;
        case 0xCCF3:
            func_CCF3(); break;
        case 0xD006:
            func_D006(); break;
        case 0xE622:
            func_E622(); break;
        case 0xEEA9:
            func_EEA9(); break;
        case 0xEEAA:
            func_EEAA(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xDED8:
            func_DED8(); break;
        case 0xDED9:
            func_DED9(); break;
        case 0xF080:
            func_F080(); break;
        case 0xF081:
            func_F081(); break;
        case 0xD38E:
            func_D38E(); break;
        case 0xD38F:
            func_D38F(); break;
        case 0xE5AA:
            func_E5AA(); break;
        case 0xC917:
            func_C917(); break;
        case 0xC918:
            func_C918(); break;
        case 0xC914:
            func_C914(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xF022:
            func_F022(); break;
        case 0xCF59:
            func_CF59(); break;
        case 0xCF5A:
            func_CF5A(); break;
        case 0xCF3D:
            func_CF3D(); break;
        case 0xCF3E:
            func_CF3E(); break;
        case 0xD370:
            func_D370(); break;
        case 0xD371:
            func_D371(); break;
        case 0xD5D0:
            func_D5D0(); break;
        case 0xD5D1:
            func_D5D1(); break;
        case 0xC44C:
            func_C44C(); break;
        case 0xC44D:
            func_C44D(); break;
        case 0xD032:
            func_D032(); break;
        case 0xD033:
            func_D033(); break;
        case 0xF040:
            func_F040(); break;
        case 0xF041:
            func_F041(); break;
        case 0xDA20:
            func_DA20(); break;
        case 0xDA21:
            func_DA21(); break;
        case 0xD0DA:
            func_D0DA(); break;
        case 0xD0DB:
            func_D0DB(); break;
        case 0xCD83:
            func_CD83(); break;
        case 0xE1AD:
            func_E1AD(); break;
        case 0xE1AE:
            func_E1AE(); break;
        case 0xE18D:
            func_E18D(); break;
        case 0xF009:
            func_F009(); break;
        case 0xF643:
            func_F643(); break;
        case 0xF607:
            func_F607(); break;
        case 0xC18D:
            func_C18D(); break;
        case 0xC18E:
            func_C18E(); break;
        case 0xF81C:
            func_F81C(); break;
        case 0xC1AE:
            func_C1AE(); break;
        case 0xDAA9:
            func_DAA9(); break;
        case 0xDAAA:
            func_DAAA(); break;
        case 0xD03B:
            func_D03B(); break;
        case 0xD621:
            func_D621(); break;
        case 0xD0B9:
            func_D0B9(); break;
        case 0xD0BA:
            func_D0BA(); break;
        case 0xE646:
            func_E646(); break;
        case 0xE647:
            func_E647(); break;
        case 0xC48D:
            func_C48D(); break;
        case 0xD47E:
            func_D47E(); break;
        case 0xD47F:
            func_D47F(); break;
        case 0xEEF8:
            func_EEF8(); break;
        case 0xEEF9:
            func_EEF9(); break;
        case 0xC92B:
            func_C92B(); break;
        case 0xC92C:
            func_C92C(); break;
        case 0xF01F:
            func_F01F(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xF0F9:
            func_F0F9(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xC099:
            func_C099(); break;
        case 0xC09A:
            func_C09A(); break;
        case 0xE099:
            func_E099(); break;
        case 0xE09A:
            func_E09A(); break;
        case 0xE603:
            func_E603(); break;
        case 0xD7C9:
            func_D7C9(); break;
        case 0xD7CA:
            func_D7CA(); break;
        case 0xD103:
            func_D103(); break;
        case 0xF847:
            func_F847(); break;
        case 0xC835:
            func_C835(); break;
        case 0xC836:
            func_C836(); break;
        case 0xD135:
            func_D135(); break;
        case 0xD136:
            func_D136(); break;
        case 0xC8D1:
            func_C8D1(); break;
        case 0xC8D2:
            func_C8D2(); break;
        case 0xF0D2:
            func_F0D2(); break;
        case 0xF0D3:
            func_F0D3(); break;
        case 0xC0F8:
            func_C0F8(); break;
        case 0xE1EE:
            func_E1EE(); break;
        case 0xE1EF:
            func_E1EF(); break;
        case 0xC0BD:
            func_C0BD(); break;
        case 0xC0BE:
            func_C0BE(); break;
        case 0xD37F:
            func_D37F(); break;
        case 0xD380:
            func_D380(); break;
        case 0xC0AC:
            func_C0AC(); break;
        case 0xEE48:
            func_EE48(); break;
        case 0xEE49:
            func_EE49(); break;
        case 0xC0EE:
            func_C0EE(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xEE03:
            func_EE03(); break;
        case 0xCE48:
            func_CE48(); break;
        case 0xCE49:
            func_CE49(); break;
        case 0xC0CF:
            func_C0CF(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xCE04:
            func_CE04(); break;
        case 0xC508:
            func_C508(); break;
        case 0xC509:
            func_C509(); break;
        case 0xD031:
            func_D031(); break;
        case 0xD425:
            func_D425(); break;
        case 0xD426:
            func_D426(); break;
        case 0xC60F:
            func_C60F(); break;
        case 0xC934:
            func_C934(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xE320:
            func_E320(); break;
        case 0xE321:
            func_E321(); break;
        case 0xE9E4:
            func_E9E4(); break;
        case 0xC945:
            func_C945(); break;
        case 0xC943:
            func_C943(); break;
        case 0xF9F0:
            func_F9F0(); break;
        case 0xF9F1:
            func_F9F1(); break;
        case 0xD014:
            func_D014(); break;
        case 0xD00C:
            func_D00C(); break;
        case 0xD5B4:
            func_D5B4(); break;
        case 0xD5B5:
            func_D5B5(); break;
        case 0xD5AD:
            func_D5AD(); break;
        case 0xD5AE:
            func_D5AE(); break;
        case 0xC957:
            func_C957(); break;
        case 0xC958:
            func_C958(); break;
        case 0xD053:
            func_D053(); break;
        case 0xD054:
            func_D054(); break;
        case 0xEFA9:
            func_EFA9(); break;
        case 0xC92D:
            func_C92D(); break;
        case 0xC924:
            func_C924(); break;
        case 0xF798:
            func_F798(); break;
        case 0xE64D:
            func_E64D(); break;
        case 0xD5E6:
            func_D5E6(); break;
        case 0xD5E7:
            func_D5E7(); break;
        case 0xD063:
            func_D063(); break;
        case 0xD64E:
            func_D64E(); break;
        case 0xD64F:
            func_D64F(); break;
        case 0xC120:
            func_C120(); break;
        case 0xC121:
            func_C121(); break;
        case 0xD0C1:
            func_D0C1(); break;
        case 0xD0C2:
            func_D0C2(); break;
        case 0xC94F:
            func_C94F(); break;
        case 0xF0B1:
            func_F0B1(); break;
        case 0xF0B2:
            func_F0B2(); break;
        case 0xC93E:
            func_C93E(); break;
        case 0xC93F:
            func_C93F(); break;
        case 0xC93B:
            func_C93B(); break;
        case 0xD732:
            func_D732(); break;
        case 0xD733:
            func_D733(); break;
        case 0xC949:
            func_C949(); break;
        case 0xC968:
            func_C968(); break;
        case 0xC969:
            func_C969(); break;
        case 0xF07A:
            func_F07A(); break;
        case 0xF1B9:
            func_F1B9(); break;
        case 0xF1BA:
            func_F1BA(); break;
        case 0xF77A:
            func_F77A(); break;
        case 0xE6F7:
            func_E6F7(); break;
        case 0xE6F8:
            func_E6F8(); break;
        case 0xD03F:
            func_D03F(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xFAC9:
            func_FAC9(); break;
        case 0xFACA:
            func_FACA(); break;
        case 0xD0FB:
            func_D0FB(); break;
        case 0xF7A9:
            func_F7A9(); break;
        case 0xEB10:
            func_EB10(); break;
        case 0xEB11:
            func_EB11(); break;
        case 0xDACA:
            func_DACA(); break;
        case 0xEED0:
            func_EED0(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xDBA9:
            func_DBA9(); break;
        case 0xCDDB:
            func_CDDB(); break;
        case 0xCDDC:
            func_CDDC(); break;
        case 0xD893:
            func_D893(); break;
        case 0xD894:
            func_D894(); break;
        case 0xD8BD:
            func_D8BD(); break;
        case 0xD910:
            func_D910(); break;
        case 0xD911:
            func_D911(); break;
        case 0xD2D0:
            func_D2D0(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xC426:
            func_C426(); break;
        case 0xF052:
            func_F052(); break;
        case 0xF053:
            func_F053(); break;
        case 0xF028:
            func_F028(); break;
        case 0xF070:
            func_F070(); break;
        case 0xE8B5:
            func_E8B5(); break;
        case 0xEF8D:
            func_EF8D(); break;
        case 0xC9B0:
            func_C9B0(); break;
        case 0xC9B1:
            func_C9B1(); break;
        case 0xF09C:
            func_F09C(); break;
        case 0xE611:
            func_E611(); break;
        case 0xE612:
            func_E612(); break;
        case 0xF082:
            func_F082(); break;
        case 0xD9AD:
            func_D9AD(); break;
        case 0xD9AE:
            func_D9AE(); break;
        case 0xCE60:
            func_CE60(); break;
        case 0xCE61:
            func_CE61(); break;
        case 0xCD68:
            func_CD68(); break;
        case 0xCD69:
            func_CD69(); break;
        case 0xF810:
            func_F810(); break;
        case 0xF811:
            func_F811(); break;
        case 0xDB3A:
            func_DB3A(); break;
        case 0xDB3B:
            func_DB3B(); break;
        case 0xEEDB:
            func_EEDB(); break;
        case 0xC907:
            func_C907(); break;
        case 0xC004:
            func_C004(); break;
        case 0xEE10:
            func_EE10(); break;
        case 0xC90B:
            func_C90B(); break;
        case 0xC9FA:
            func_C9FA(); break;
        case 0xC537:
            func_C537(); break;
        case 0xC538:
            func_C538(); break;
        case 0xD9C5:
            func_D9C5(); break;
        case 0xD9C6:
            func_D9C6(); break;
        case 0xF0D9:
            func_F0D9(); break;
        case 0xF0DA:
            func_F0DA(); break;
        case 0xD038:
            func_D038(); break;
        case 0xC539:
            func_C539(); break;
        case 0xCE0F:
            func_CE0F(); break;
        case 0xCE10:
            func_CE10(); break;
        case 0xDB89:
            func_DB89(); break;
        case 0xCD80:
            func_CD80(); break;
        case 0xCD81:
            func_CD81(); break;
        case 0xE1B9:
            func_E1B9(); break;
        case 0xE1BA:
            func_E1BA(); break;
        case 0xD1B9:
            func_D1B9(); break;
        case 0xD1BA:
            func_D1BA(); break;
        case 0xDC71:
            func_DC71(); break;
        case 0xDC72:
            func_DC72(); break;
        case 0xC088:
            func_C088(); break;
        case 0xC089:
            func_C089(); break;
        case 0xC1D0:
            func_C1D0(); break;
        case 0xC926:
            func_C926(); break;
        case 0xC927:
            func_C927(); break;
        case 0xC023:
            func_C023(); break;
        case 0xC219:
            func_C219(); break;
        case 0xC21A:
            func_C21A(); break;
        case 0xE674:
            func_E674(); break;
        case 0xE675:
            func_E675(); break;
        case 0xF8C5:
            func_F8C5(); break;
        case 0xF8C6:
            func_F8C6(); break;
        case 0xFAE5:
            func_FAE5(); break;
        case 0xFAE6:
            func_FAE6(); break;
        case 0xFB29:
            func_FB29(); break;
        case 0xFB2A:
            func_FB2A(); break;
        case 0xEA10:
            func_EA10(); break;
        case 0xEA11:
            func_EA11(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF4D1:
            func_F4D1(); break;
        case 0xD06C:
            func_D06C(); break;
        case 0xE6A1:
            func_E6A1(); break;
        case 0xD9B6:
            func_D9B6(); break;
        case 0xD0DF:
            func_D0DF(); break;
        case 0xF938:
            func_F938(); break;
        case 0xC01D:
            func_C01D(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xC014:
            func_C014(); break;
        case 0xC015:
            func_C015(); break;
        case 0xDFAC:
            func_DFAC(); break;
        case 0xDFAD:
            func_DFAD(); break;
        case 0xEE06:
            func_EE06(); break;
        case 0xEE07:
            func_EE07(); break;
        case 0xC54C:
            func_C54C(); break;
        case 0xC54D:
            func_C54D(); break;
        case 0xDFC5:
            func_DFC5(); break;
        case 0xDFC6:
            func_DFC6(); break;
        case 0xCEE0:
            func_CEE0(); break;
        case 0xDF8E:
            func_DF8E(); break;
        case 0xFF8D:
            func_FF8D(); break;
        case 0xFF8E:
            func_FF8E(); break;
        case 0xCE09:
            func_CE09(); break;
        case 0xCE0A:
            func_CE0A(); break;
        case 0xF0A0:
            func_F0A0(); break;
        case 0xF0A1:
            func_F0A1(); break;
        case 0xD0A1:
            func_D0A1(); break;
        case 0xEE0C:
            func_EE0C(); break;
        case 0xEE0D:
            func_EE0D(); break;
        case 0xF068:
            func_F068(); break;
        case 0xC4A9:
            func_C4A9(); break;
        case 0xC4AA:
            func_C4AA(); break;
        case 0xE166:
            func_E166(); break;
        case 0xE167:
            func_E167(); break;
        case 0xEBA9:
            func_EBA9(); break;
        case 0xEBAA:
            func_EBAA(); break;
        case 0xCE8D:
            func_CE8D(); break;
        case 0xEE8E:
            func_EE8E(); break;
        case 0xEC85:
            func_EC85(); break;
        case 0xE0FF:
            func_E0FF(); break;
        case 0xE100:
            func_E100(); break;
        case 0xFCE5:
            func_FCE5(); break;
        case 0xFCE6:
            func_FCE6(); break;
        case 0xC62D:
            func_C62D(); break;
        case 0xC64C:
            func_C64C(); break;
        case 0xC64D:
            func_C64D(); break;
        case 0xF9C6:
            func_F9C6(); break;
        case 0xF9C7:
            func_F9C7(); break;
        case 0xC52D:
            func_C52D(); break;
        case 0xC52E:
            func_C52E(); break;
        case 0xF02D:
            func_F02D(); break;
        case 0xE619:
            func_E619(); break;
        case 0xD02C:
            func_D02C(); break;
        case 0xF0A9:
            func_F0A9(); break;
        case 0xCDF0:
            func_CDF0(); break;
        case 0xCDF1:
            func_CDF1(); break;
        case 0xF9E6:
            func_F9E6(); break;
        case 0xF9E7:
            func_F9E7(); break;
        case 0xE468:
            func_E468(); break;
        case 0xFBD0:
            func_FBD0(); break;
        case 0xFBD1:
            func_FBD1(); break;
        case 0xE33D:
            func_E33D(); break;
        case 0xC9E3:
            func_C9E3(); break;
        case 0xC9E4:
            func_C9E4(); break;
        case 0xE5C9:
            func_E5C9(); break;
        case 0xE5CA:
            func_E5CA(); break;
        case 0xF990:
            func_F990(); break;
        case 0xF991:
            func_F991(); break;
        case 0xD9F0:
            func_D9F0(); break;
        case 0xD9F1:
            func_D9F1(); break;
        case 0xF015:
            func_F015(); break;
        case 0xF016:
            func_F016(); break;
        case 0xD01A:
            func_D01A(); break;
        case 0xD01B:
            func_D01B(); break;
        case 0xFCC9:
            func_FCC9(); break;
        case 0xFCCA:
            func_FCCA(); break;
        case 0xF0FD:
            func_F0FD(); break;
        case 0xC0F0:
            func_C0F0(); break;
        case 0xC9AB:
            func_C9AB(); break;
        case 0xCA99:
            func_CA99(); break;
        case 0xE62E:
            func_E62E(); break;
        case 0xF8A4:
            func_F8A4(); break;
        case 0xC05F:
            func_C05F(); break;
        case 0xC91A:
            func_C91A(); break;
        case 0xC91B:
            func_C91B(); break;
        case 0xF44D:
            func_F44D(); break;
        case 0xE2F5:
            func_E2F5(); break;
        case 0xD022:
            func_D022(); break;
        case 0xD023:
            func_D023(); break;
        case 0xE4A9:
            func_E4A9(); break;
        case 0xE4AA:
            func_E4AA(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD121:
            func_D121(); break;
        case 0xE5D2:
            func_E5D2(); break;
        case 0xC91C:
            func_C91C(); break;
        case 0xF00A:
            func_F00A(); break;
        case 0xE8CA:
            func_E8CA(); break;
        case 0xE3C8:
            func_E3C8(); break;
        case 0xE590:
            func_E590(); break;
        case 0xE591:
            func_E591(); break;
        case 0xC5C0:
            func_C5C0(); break;
        case 0xC5C1:
            func_C5C1(); break;
        case 0xE615:
            func_E615(); break;
        case 0xF02E:
            func_F02E(); break;
        case 0xC507:
            func_C507(); break;
        case 0xC52B:
            func_C52B(); break;
        case 0xC04A:
            func_C04A(); break;
        case 0xC80E:
            func_C80E(); break;
        case 0xC80F:
            func_C80F(); break;
        case 0xE658:
            func_E658(); break;
        case 0xD000:
            func_D000(); break;
        case 0xFAF0:
            func_FAF0(); break;
        case 0xFAF1:
            func_FAF1(); break;
        case 0xC42E:
            func_C42E(); break;
        case 0xC42F:
            func_C42F(); break;
        case 0xE400:
            func_E400(); break;
        case 0xE401:
            func_E401(); break;
        case 0xF9E4:
            func_F9E4(); break;
        case 0xF9E5:
            func_F9E5(); break;
        case 0xC0C8:
            func_C0C8(); break;
        case 0xF5D0:
            func_F5D0(); break;
        case 0xF5D1:
            func_F5D1(); break;
        case 0xE5CD:
            func_E5CD(); break;
        case 0xCFBD:
            func_CFBD(); break;
        case 0xCFBE:
            func_CFBE(); break;
        case 0xE5CF:
            func_E5CF(); break;
        case 0xE54C:
            func_E54C(); break;
        case 0xE54D:
            func_E54D(); break;
        case 0xD04A:
            func_D04A(); break;
        case 0xC569:
            func_C569(); break;
        case 0xF024:
            func_F024(); break;
        case 0xE510:
            func_E510(); break;
        case 0xC37D:
            func_C37D(); break;
        case 0xC37E:
            func_C37E(); break;
        case 0xE5C4:
            func_E5C4(); break;
        case 0xC9E5:
            func_C9E5(); break;
        case 0xE8B2:
            func_E8B2(); break;
        case 0xC929:
            func_C929(); break;
        case 0xCCB9:
            func_CCB9(); break;
        case 0xC53A:
            func_C53A(); break;
        case 0xC93A:
            func_C93A(); break;
        case 0xC009:
            func_C009(); break;
        case 0xE608:
            func_E608(); break;
        case 0xFF60:
            func_FF60(); break;
        case 0xFF61:
            func_FF61(); break;
        case 0xCC33:
            func_CC33(); break;
        case 0xCCCC:
            func_CCCC(); break;
        case 0xCCCD:
            func_CCCD(); break;
        case 0xFF01:
            func_FF01(); break;
        case 0xD069:
            func_D069(); break;
        case 0xD06A:
            func_D06A(); break;
        case 0xCAD0:
            func_CAD0(); break;
        case 0xCAD1:
            func_CAD1(); break;
        case 0xEBBD:
            func_EBBD(); break;
        case 0xE7EB:
            func_E7EB(); break;
        case 0xE7EC:
            func_E7EC(); break;
        case 0xC0E9:
            func_C0E9(); break;
        case 0xE903:
            func_E903(); break;
        case 0xE904:
            func_E904(); break;
        case 0xE92F:
            func_E92F(); break;
        case 0xE67B:
            func_E67B(); break;
        case 0xC069:
            func_C069(); break;
        case 0xC06A:
            func_C06A(); break;
        case 0xF0FB:
            func_F0FB(); break;
        case 0xE979:
            func_E979(); break;
        case 0xE97A:
            func_E97A(); break;
        case 0xE7EA:
            func_E7EA(); break;
        case 0xC925:
            func_C925(); break;
        case 0xE7BA:
            func_E7BA(); break;
        case 0xE7E7:
            func_E7E7(); break;
        case 0xE7E8:
            func_E7E8(); break;
        case 0xD901:
            func_D901(); break;
        case 0xD902:
            func_D902(); break;
        case 0xE5D9:
            func_E5D9(); break;
        case 0xE7E5:
            func_E7E5(); break;
        case 0xE7E6:
            func_E7E6(); break;
        case 0xF0E7:
            func_F0E7(); break;
        case 0xD9BD:
            func_D9BD(); break;
        case 0xD9BE:
            func_D9BE(); break;
        case 0xE7D9:
            func_E7D9(); break;
        case 0xDDBE:
            func_DDBE(); break;
        case 0xE7DE:
            func_E7DE(); break;
        case 0xC805:
            func_C805(); break;
        case 0xC6C9:
            func_C6C9(); break;
        case 0xD13D:
            func_D13D(); break;
        case 0xD13E:
            func_D13E(); break;
        case 0xD53D:
            func_D53D(); break;
        case 0xD53E:
            func_D53E(); break;
        case 0xE7D5:
            func_E7D5(); break;
        case 0xE7D6:
            func_E7D6(); break;
        case 0xE028:
            func_E028(); break;
        case 0xE8A1:
            func_E8A1(); break;
        case 0xE119:
            func_E119(); break;
        case 0xE7E1:
            func_E7E1(); break;
        case 0xE7E2:
            func_E7E2(); break;
        case 0xEDBE:
            func_EDBE(); break;
        case 0xE7EE:
            func_E7EE(); break;
        case 0xE11D:
            func_E11D(); break;
        case 0xEFBE:
            func_EFBE(); break;
        case 0xE7EF:
            func_E7EF(); break;
        case 0xE883:
            func_E883(); break;
        case 0xE89D:
            func_E89D(); break;
        case 0xC19D:
            func_C19D(); break;
        case 0xC19E:
            func_C19E(); break;
        case 0xC49D:
            func_C49D(); break;
        case 0xC49E:
            func_C49E(); break;
        case 0xC59E:
            func_C59E(); break;
        case 0xFC4D:
            func_FC4D(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xEB83:
            func_EB83(); break;
        case 0xF0EB:
            func_F0EB(); break;
        case 0xF0EC:
            func_F0EC(); break;
        case 0xC8A1:
            func_C8A1(); break;
        case 0xE2B9:
            func_E2B9(); break;
        case 0xE2BA:
            func_E2BA(); break;
        case 0xEBE2:
            func_EBE2(); break;
        case 0xEBE3:
            func_EBE3(); break;
        case 0xEB0D:
            func_EB0D(); break;
        case 0xE0BD:
            func_E0BD(); break;
        case 0xE0BE:
            func_E0BE(); break;
        case 0xEC12:
            func_EC12(); break;
        case 0xC07D:
            func_C07D(); break;
        case 0xC07E:
            func_C07E(); break;
        case 0xC912:
            func_C912(); break;
        case 0xEB25:
            func_EB25(); break;
        case 0xC602:
            func_C602(); break;
        case 0xC603:
            func_C603(); break;
        case 0xEB31:
            func_EB31(); break;
        case 0xEB8B:
            func_EB8B(); break;
        case 0xC501:
            func_C501(); break;
        case 0xE638:
            func_E638(); break;
        case 0xC510:
            func_C510(); break;
        case 0xC5F0:
            func_C5F0(); break;
        case 0xC5F1:
            func_C5F1(); break;
        case 0xE6BC:
            func_E6BC(); break;
        case 0xE6B0:
            func_E6B0(); break;
        case 0xE6B1:
            func_E6B1(); break;
        case 0xC613:
            func_C613(); break;
        case 0xE0EA:
            func_E0EA(); break;
        case 0xD03E:
            func_D03E(); break;
        case 0xC915:
            func_C915(); break;
        case 0xC941:
            func_C941(); break;
        case 0xC942:
            func_C942(); break;
        case 0xECE1:
            func_ECE1(); break;
        case 0xECE2:
            func_ECE2(); break;
        case 0xED08:
            func_ED08(); break;
        case 0xED09:
            func_ED09(); break;
        case 0xD024:
            func_D024(); break;
        case 0xF6B0:
            func_F6B0(); break;
        case 0xF6B1:
            func_F6B1(); break;
        case 0xC811:
            func_C811(); break;
        case 0xC812:
            func_C812(); break;
        case 0xC600:
            func_C600(); break;
        case 0xC601:
            func_C601(); break;
        case 0xDE10:
            func_DE10(); break;
        case 0xDE11:
            func_DE11(); break;
        case 0xE634:
            func_E634(); break;
        case 0xEBC7:
            func_EBC7(); break;
        case 0xCEBD:
            func_CEBD(); break;
        case 0xEBCE:
            func_EBCE(); break;
        case 0xEBCF:
            func_EBCF(); break;
        case 0xC5EB:
            func_C5EB(); break;
        case 0xF9C5:
            func_F9C5(); break;
        case 0xDD29:
            func_DD29(); break;
        case 0xD0DD:
            func_D0DD(); break;
        case 0xD0DE:
            func_D0DE(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE808:
            func_E808(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0xC1BD:
            func_C1BD(); break;
        case 0xCECC:
            func_CECC(); break;
        case 0xF90C:
            func_F90C(); break;
        case 0xF90D:
            func_F90D(); break;
        case 0xF9F4:
            func_F9F4(); break;
        case 0xF9F5:
            func_F9F5(); break;
        case 0xF10A:
            func_F10A(); break;
        case 0xF901:
            func_F901(); break;
        case 0xEA00:
            func_EA00(); break;
        case 0xF916:
            func_F916(); break;
        case 0xF908:
            func_F908(); break;
        case 0xF909:
            func_F909(); break;
        case 0xF801:
            func_F801(); break;
        case 0xF9F8:
            func_F9F8(); break;
        case 0xF9F9:
            func_F9F9(); break;
        case 0xF510:
            func_F510(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xF5F1:
            func_F5F1(); break;
        case 0xFC08:
            func_FC08(); break;
        case 0xF50D:
            func_F50D(); break;
        case 0xF118:
            func_F118(); break;
        case 0xF1E8:
            func_F1E8(); break;
        case 0xFD05:
            func_FD05(); break;
        case 0xFC01:
            func_FC01(); break;
        case 0xFC02:
            func_FC02(); break;
        case 0xFDFD:
            func_FDFD(); break;
        case 0xF91C:
            func_F91C(); break;
        case 0xF91D:
            func_F91D(); break;
        case 0xF910:
            func_F910(); break;
        case 0xF911:
            func_F911(); break;
        case 0xF9E9:
            func_F9E9(); break;
        case 0xF906:
            func_F906(); break;
        case 0xF907:
            func_F907(); break;
        case 0xF508:
            func_F508(); break;
        case 0xF509:
            func_F509(); break;
        case 0xF803:
            func_F803(); break;
        case 0xF5F8:
            func_F5F8(); break;
        case 0xF904:
            func_F904(); break;
        case 0xF905:
            func_F905(); break;
        case 0xF9FC:
            func_F9FC(); break;
        case 0xF9FD:
            func_F9FD(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xF1F1:
            func_F1F1(); break;
        case 0xF50E:
            func_F50E(); break;
        case 0xF302:
            func_F302(); break;
        case 0xF303:
            func_F303(); break;
        case 0xF5F3:
            func_F5F3(); break;
        case 0xF1E6:
            func_F1E6(); break;
        case 0xF1E7:
            func_F1E7(); break;
        case 0xF114:
            func_F114(); break;
        case 0xF115:
            func_F115(); break;
        case 0xEC03:
            func_EC03(); break;
        case 0xF51C:
            func_F51C(); break;
        case 0xDC02:
            func_DC02(); break;
        case 0xF5DD:
            func_F5DD(); break;
        case 0xFB10:
            func_FB10(); break;
        case 0xFBF0:
            func_FBF0(); break;
        case 0xFBF1:
            func_FBF1(); break;
        case 0xF500:
            func_F500(); break;
        case 0xF403:
            func_F403(); break;
        case 0xE911:
            func_E911(); break;
        case 0xE9F1:
            func_E9F1(); break;
        case 0xE50C:
            func_E50C(); break;
        case 0xE50D:
            func_E50D(); break;
        case 0xF405:
            func_F405(); break;
        case 0xE5F4:
            func_E5F4(); break;
        case 0xE508:
            func_E508(); break;
        case 0xE509:
            func_E509(); break;
        case 0xE5F8:
            func_E5F8(); break;
        case 0xE5F9:
            func_E5F9(); break;
        case 0xF514:
            func_F514(); break;
        case 0xF515:
            func_F515(); break;
        case 0xF5EC:
            func_F5EC(); break;
        case 0xF5ED:
            func_F5ED(); break;
        case 0xEC15:
            func_EC15(); break;
        case 0xECED:
            func_ECED(); break;
        case 0xE810:
            func_E810(); break;
        case 0xE811:
            func_E811(); break;
        case 0xE8F1:
            func_E8F1(); break;
        case 0xFE03:
            func_FE03(); break;
        case 0xFE04:
            func_FE04(); break;
        case 0xE0FE:
            func_E0FE(); break;
        case 0xE908:
            func_E908(); break;
        case 0xE909:
            func_E909(); break;
        case 0xDE03:
            func_DE03(); break;
        case 0xE0DE:
            func_E0DE(); break;
        case 0xE0DF:
            func_E0DF(); break;
        case 0xD019:
            func_D019(); break;
        case 0xF829:
            func_F829(); break;
        case 0xF82A:
            func_F82A(); break;
        case 0xE88E:
            func_E88E(); break;
        case 0xF420:
            func_F420(); break;
        case 0xF421:
            func_F421(); break;
        case 0xCCBD:
            func_CCBD(); break;
        case 0xCCBE:
            func_CCBE(); break;
        case 0xCA08:
            func_CA08(); break;
        case 0xE511:
            func_E511(); break;
        case 0xC38C:
            func_C38C(); break;
        case 0xC38D:
            func_C38D(); break;
        case 0xC970:
            func_C970(); break;
        case 0xC971:
            func_C971(); break;
        case 0xD6F0:
            func_D6F0(); break;
        case 0xD6F1:
            func_D6F1(); break;
        case 0xC0A8:
            func_C0A8(); break;
        case 0xE190:
            func_E190(); break;
        case 0xE6E1:
            func_E6E1(); break;
        case 0xE671:
            func_E671(); break;
        case 0xCC8D:
            func_CC8D(); break;
        case 0xCC8E:
            func_CC8E(); break;
        case 0xC028:
            func_C028(); break;
        case 0xE695:
            func_E695(); break;
        case 0xF299:
            func_F299(); break;
        case 0xE6F0:
            func_E6F0(); break;
        case 0xE6F1:
            func_E6F1(); break;
        case 0xF0D0:
            func_F0D0(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xE503:
            func_E503(); break;
        case 0xE504:
            func_E504(); break;
        case 0xE071:
            func_E071(); break;
        case 0xE005:
            func_E005(); break;
        case 0xF109:
            func_F109(); break;
        case 0xE011:
            func_E011(); break;
        case 0xE012:
            func_E012(); break;
        case 0xF05A:
            func_F05A(); break;
        case 0xC416:
            func_C416(); break;
        case 0xF4C4:
            func_F4C4(); break;
        case 0xF4C5:
            func_F4C5(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xD018:
            func_D018(); break;
        case 0xC7F0:
            func_C7F0(); break;
        case 0xC7F1:
            func_C7F1(); break;
        case 0xD058:
            func_D058(); break;
        case 0xFE7F:
            func_FE7F(); break;
        case 0xFE80:
            func_FE80(); break;
        case 0xD101:
            func_D101(); break;
        case 0xD102:
            func_D102(); break;
        case 0xE09E:
            func_E09E(); break;
        case 0xD188:
            func_D188(); break;
        case 0xD189:
            func_D189(); break;
        case 0xE048:
            func_E048(); break;
        case 0xE049:
            func_E049(); break;
        case 0xD0AF:
            func_D0AF(); break;
        case 0xC404:
            func_C404(); break;
        case 0xC405:
            func_C405(); break;
        case 0xF0F6:
            func_F0F6(); break;
        case 0xF584:
            func_F584(); break;
        case 0xE9BF:
            func_E9BF(); break;
        case 0xE9C0:
            func_E9C0(); break;
        case 0xF098:
            func_F098(); break;
        case 0xC800:
            func_C800(); break;
        case 0xC502:
            func_C502(); break;
        case 0xC829:
            func_C829(); break;
        case 0xC82A:
            func_C82A(); break;
        case 0xE80E:
            func_E80E(); break;
        case 0xE80F:
            func_E80F(); break;
        case 0xC604:
            func_C604(); break;
        case 0xC860:
            func_C860(); break;
        case 0xC861:
            func_C861(); break;
        case 0xF2BC:
            func_F2BC(); break;
        case 0xE6F2:
            func_E6F2(); break;
        case 0xE6F3:
            func_E6F3(); break;
        case 0xE010:
            func_E010(); break;
        case 0xF318:
            func_F318(); break;
        case 0xF319:
            func_F319(); break;
        case 0xF31B:
            func_F31B(); break;
        case 0xF31C:
            func_F31C(); break;
        case 0xF314:
            func_F314(); break;
        case 0xF0E9:
            func_F0E9(); break;
        case 0xCBD0:
            func_CBD0(); break;
        case 0xCBD1:
            func_CBD1(); break;
        case 0xFBA1:
            func_FBA1(); break;
        case 0xEC2A:
            func_EC2A(); break;
        case 0xEC2B:
            func_EC2B(); break;
        case 0xDF89:
            func_DF89(); break;
        case 0xFEB8:
            func_FEB8(); break;
        case 0xFEB9:
            func_FEB9(); break;
        case 0xEB0A:
            func_EB0A(); break;
        case 0xCD8E:
            func_CD8E(); break;
        case 0xCD8F:
            func_CD8F(); break;
        case 0xEC0A:
            func_EC0A(); break;
        case 0xEC0B:
            func_EC0B(); break;
        case 0xF7A0:
            func_F7A0(); break;
        case 0xCC80:
            func_CC80(); break;
        case 0xCC81:
            func_CC81(); break;
        case 0xFBAA:
            func_FBAA(); break;
        case 0xFBAB:
            func_FBAB(); break;
        case 0xEDAB:
            func_EDAB(); break;
        case 0xF92A:
            func_F92A(); break;
        case 0xF92B:
            func_F92B(); break;
        case 0xF409:
            func_F409(); break;
        case 0xCF20:
            func_CF20(); break;
        case 0xCABF:
            func_CABF(); break;
        case 0xCAC0:
            func_CAC0(); break;
        case 0xFCCB:
            func_FCCB(); break;
        case 0xE0FD:
            func_E0FD(); break;
        case 0xCA79:
            func_CA79(); break;
        case 0xFF6A:
            func_FF6A(); break;
        case 0xFE28:
            func_FE28(); break;
        case 0xCA83:
            func_CA83(); break;
        case 0xDB2B:
            func_DB2B(); break;
        case 0xE72A:
            func_E72A(); break;
        case 0xE72B:
            func_E72B(); break;
        case 0xEE46:
            func_EE46(); break;
        case 0xEE47:
            func_EE47(); break;
        case 0xE9A2:
            func_E9A2(); break;
        case 0xE9A3:
            func_E9A3(); break;
        case 0xC627:
            func_C627(); break;
        case 0xE2AF:
            func_E2AF(); break;
        case 0xE2B0:
            func_E2B0(); break;
        case 0xEA60:
            func_EA60(); break;
        case 0xECBA:
            func_ECBA(); break;
        case 0xECBB:
            func_ECBB(); break;
        case 0xFE02:
            func_FE02(); break;
        case 0xE791:
            func_E791(); break;
        case 0xF789:
            func_F789(); break;
        case 0xFEAE:
            func_FEAE(); break;
        case 0xFEAF:
            func_FEAF(); break;
        case 0xEAFE:
            func_EAFE(); break;
        case 0xEAFF:
            func_EAFF(); break;
        case 0xEEEA:
            func_EEEA(); break;
        case 0xE340:
            func_E340(); break;
        case 0xE341:
            func_E341(); break;
        case 0xCCB8:
            func_CCB8(); break;
        case 0xFBCC:
            func_FBCC(); break;
        case 0xFBCD:
            func_FBCD(); break;
        case 0xFBA2:
            func_FBA2(); break;
        case 0xFBA3:
            func_FBA3(); break;
        case 0xEF83:
            func_EF83(); break;
        case 0xCF2E:
            func_CF2E(); break;
        case 0xCF2F:
            func_CF2F(); break;
        case 0xE104:
            func_E104(); break;
        case 0xE105:
            func_E105(); break;
        case 0xFFB0:
            func_FFB0(); break;
        case 0xFFB1:
            func_FFB1(); break;
        case 0xD8A8:
            func_D8A8(); break;
        case 0xF32B:
            func_F32B(); break;
        case 0xF32C:
            func_F32C(); break;
        case 0xD42F:
            func_D42F(); break;
        case 0xEAD3:
            func_EAD3(); break;
        case 0xF8AE:
            func_F8AE(); break;
        case 0xCEA0:
            func_CEA0(); break;
        case 0xD788:
            func_D788(); break;
        case 0xD789:
            func_D789(); break;
        case 0xFC05:
            func_FC05(); break;
        case 0xDC11:
            func_DC11(); break;
        case 0xDC12:
            func_DC12(); break;
        case 0xF151:
            func_F151(); break;
        case 0xFF11:
            func_FF11(); break;
        case 0xFF12:
            func_FF12(); break;
        case 0xDC55:
            func_DC55(); break;
        case 0xFD56:
            func_FD56(); break;
        case 0xC341:
            func_C341(); break;
        case 0xD944:
            func_D944(); break;
        case 0xD945:
            func_D945(); break;
        case 0xDB01:
            func_DB01(); break;
        case 0xDB02:
            func_DB02(); break;
        case 0xE716:
            func_E716(); break;
        case 0xE850:
            func_E850(); break;
        case 0xE851:
            func_E851(); break;
        case 0xFD12:
            func_FD12(); break;
        case 0xF146:
            func_F146(); break;
        case 0xE151:
            func_E151(); break;
        case 0xE152:
            func_E152(); break;
        case 0xF345:
            func_F345(); break;
        case 0xF346:
            func_F346(); break;
        case 0xE705:
            func_E705(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE801:
            func_E801(); break;
        case 0xE701:
            func_E701(); break;
        case 0xD052:
            func_D052(); break;
        case 0xC111:
            func_C111(); break;
        case 0xC112:
            func_C112(); break;
        case 0xCD50:
            func_CD50(); break;
        case 0xCD51:
            func_CD51(); break;
        case 0xCF15:
            func_CF15(); break;
        case 0xEB15:
            func_EB15(); break;
        case 0xEB16:
            func_EB16(); break;
        case 0xCB04:
            func_CB04(); break;
        case 0xCB05:
            func_CB05(); break;
        case 0xDE15:
            func_DE15(); break;
        case 0xDE16:
            func_DE16(); break;
        case 0xC101:
            func_C101(); break;
        case 0xC102:
            func_C102(); break;
        case 0xC140:
            func_C140(); break;
        case 0xC141:
            func_C141(); break;
        case 0xE600:
            func_E600(); break;
        case 0xE652:
            func_E652(); break;
        case 0xEE15:
            func_EE15(); break;
        case 0xEE16:
            func_EE16(); break;
        case 0xD712:
            func_D712(); break;
        case 0xF655:
            func_F655(); break;
        case 0xC556:
            func_C556(); break;
        case 0xD5C5:
            func_D5C5(); break;
        case 0xD5C6:
            func_D5C6(); break;
        case 0xCBD5:
            func_CBD5(); break;
        case 0xCBD6:
            func_CBD6(); break;
        case 0xFF51:
            func_FF51(); break;
        case 0xFF52:
            func_FF52(); break;
        case 0xFA41:
            func_FA41(); break;
        case 0xFA42:
            func_FA42(); break;
        case 0xC429:
            func_C429(); break;
        case 0xC42A:
            func_C42A(); break;
        case 0xF940:
            func_F940(); break;
        case 0xF941:
            func_F941(); break;
        case 0xE314:
            func_E314(); break;
        case 0xF74C:
            func_F74C(); break;
        case 0xC644:
            func_C644(); break;
        case 0xC645:
            func_C645(); break;
        case 0xCA46:
            func_CA46(); break;
        case 0xE044:
            func_E044(); break;
        case 0xE045:
            func_E045(); break;
        case 0xE746:
            func_E746(); break;
        case 0xF641:
            func_F641(); break;
        case 0xC305:
            func_C305(); break;
        case 0xDB05:
            func_DB05(); break;
        case 0xDB06:
            func_DB06(); break;
        case 0xEE71:
            func_EE71(); break;
        case 0xD453:
            func_D453(); break;
        case 0xD454:
            func_D454(); break;
        case 0xF5D5:
            func_F5D5(); break;
        case 0xEC00:
            func_EC00(); break;
        case 0xEC01:
            func_EC01(); break;
        case 0xE214:
            func_E214(); break;
        case 0xE215:
            func_E215(); break;
        case 0xF71E:
            func_F71E(); break;
        case 0xE0F7:
            func_E0F7(); break;
        case 0xE0F8:
            func_E0F8(); break;
        case 0xFA7E:
            func_FA7E(); break;
        case 0xF5AB:
            func_F5AB(); break;
        case 0xF060:
            func_F060(); break;
        case 0xF061:
            func_F061(); break;
        case 0xF701:
            func_F701(); break;
        case 0xF73C:
            func_F73C(); break;
        case 0xFA92:
            func_FA92(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xEE21:
            func_EE21(); break;
        case 0xE061:
            func_E061(); break;
        case 0xF75A:
            func_F75A(); break;
        case 0xFAAF:
            func_FAAF(); break;
        case 0xF629:
            func_F629(); break;
        case 0xF66B:
            func_F66B(); break;
        case 0xEE14:
            func_EE14(); break;
        case 0xFAC0:
            func_FAC0(); break;
        case 0xF631:
            func_F631(); break;
        case 0xF920:
            func_F920(); break;
        case 0xEDFA:
            func_EDFA(); break;
        case 0xF6A5:
            func_F6A5(); break;
        case 0xC84C:
            func_C84C(); break;
        case 0xC84D:
            func_C84D(); break;
        case 0xF0F7:
            func_F0F7(); break;
        case 0xF7E7:
            func_F7E7(); break;
        case 0xC820:
            func_C820(); break;
        case 0xC821:
            func_C821(); break;
        case 0xF7C9:
            func_F7C9(); break;
        case 0xFB4C:
            func_FB4C(); break;
        case 0xD060:
            func_D060(); break;
        case 0xD061:
            func_D061(); break;
        case 0xFD38:
            func_FD38(); break;
        case 0xFD03:
            func_FD03(); break;
        case 0xF0B9:
            func_F0B9(); break;
        case 0xC916:
            func_C916(); break;
        case 0xF9CA:
            func_F9CA(); break;
        case 0xE0B9:
            func_E0B9(); break;
        case 0xE0BA:
            func_E0BA(); break;
        case 0xED03:
            func_ED03(); break;
        case 0xED04:
            func_ED04(); break;
        case 0xD985:
            func_D985(); break;
        case 0xD986:
            func_D986(); break;
        case 0xDAA6:
            func_DAA6(); break;
        case 0xDAA7:
            func_DAA7(); break;
        case 0xDA85:
            func_DA85(); break;
        case 0xDA86:
            func_DA86(); break;
        case 0xC0FE:
            func_C0FE(); break;
        case 0xC54A:
            func_C54A(); break;
        case 0xC54B:
            func_C54B(); break;
        case 0xE609:
            func_E609(); break;
        case 0xE60A:
            func_E60A(); break;
        case 0xC50A:
            func_C50A(); break;
        case 0xF935:
            func_F935(); break;
        case 0xD920:
            func_D920(); break;
        case 0xD921:
            func_D921(); break;
        case 0xFE05:
            func_FE05(); break;
        case 0xFE06:
            func_FE06(); break;
        case 0xFA54:
            func_FA54(); break;
        case 0xFA6D:
            func_FA6D(); break;
        case 0xE5FB:
            func_E5FB(); break;
        case 0xD912:
            func_D912(); break;
        case 0xF903:
            func_F903(); break;
        case 0xC0FA:
            func_C0FA(); break;
        case 0xFAA3:
            func_FAA3(); break;
        case 0xFD02:
            func_FD02(); break;
        case 0xDE1D:
            func_DE1D(); break;
        case 0xDE1E:
            func_DE1E(); break;
        case 0xD64C:
            func_D64C(); break;
        case 0xD64D:
            func_D64D(); break;
        case 0xFAD7:
            func_FAD7(); break;
        case 0xC953:
            func_C953(); break;
        case 0xC92A:
            func_C92A(); break;
        case 0xF0D7:
            func_F0D7(); break;
        case 0xF0D8:
            func_F0D8(); break;
        case 0xD8C9:
            func_D8C9(); break;
        case 0xD8CA:
            func_D8CA(); break;
        case 0xC921:
            func_C921(); break;
        case 0xD220:
            func_D220(); break;
        case 0xD221:
            func_D221(); break;
        case 0xFBD3:
            func_FBD3(); break;
        case 0xC606:
            func_C606(); break;
        case 0xFC03:
            func_FC03(); break;
        case 0xE0CB:
            func_E0CB(); break;
        case 0xC220:
            func_C220(); break;
        case 0xC221:
            func_C221(); break;
        case 0xF8C3:
            func_F8C3(); break;
        case 0xF8B4:
            func_F8B4(); break;
        case 0xE501:
            func_E501(); break;
        case 0xE502:
            func_E502(); break;
        case 0xE507:
            func_E507(); break;
        case 0xFF5C:
            func_FF5C(); break;
        case 0xFD78:
            func_FD78(); break;
        case 0xFD9D:
            func_FD9D(); break;
        case 0xFD9E:
            func_FD9E(); break;
        case 0xC505:
            func_C505(); break;
        case 0xCA50:
            func_CA50(); break;
        case 0xCA51:
            func_CA51(); break;
        case 0xF716:
            func_F716(); break;
        case 0xC240:
            func_C240(); break;
        case 0xC241:
            func_C241(); break;
        case 0xCB11:
            func_CB11(); break;
        case 0xD878:
            func_D878(); break;
        case 0xD879:
            func_D879(); break;
        case 0xFB30:
            func_FB30(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xE6FA:
            func_E6FA(); break;
        case 0xE6FB:
            func_E6FB(); break;
        case 0xCADC:
            func_CADC(); break;
        case 0xCADD:
            func_CADD(); break;
        case 0xF220:
            func_F220(); break;
        case 0xF221:
            func_F221(); break;
        case 0xFEF3:
            func_FEF3(); break;
        case 0xE80A:
            func_E80A(); break;
        case 0xE80B:
            func_E80B(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD091:
            func_D091(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xE6D1:
            func_E6D1(); break;
        case 0xC080:
            func_C080(); break;
        case 0xC081:
            func_C081(); break;
        case 0xD092:
            func_D092(); break;
        case 0xC546:
            func_C546(); break;
        case 0xFF17:
            func_FF17(); break;
        case 0xFF15:
            func_FF15(); break;
        case 0xCB00:
            func_CB00(); break;
        case 0xE8B6:
            func_E8B6(); break;
        case 0xF035:
            func_F035(); break;
        case 0xF6E6:
            func_F6E6(); break;
        case 0xF6E7:
            func_F6E7(); break;
        case 0xF085:
            func_F085(); break;
        case 0xF086:
            func_F086(); break;
        case 0xF285:
            func_F285(); break;
        case 0xF286:
            func_F286(); break;
        case 0xF385:
            func_F385(); break;
        case 0xF386:
            func_F386(); break;
        case 0xC680:
            func_C680(); break;
        case 0xF6C7:
            func_F6C7(); break;
        case 0xF7A5:
            func_F7A5(); break;
        case 0xF7A6:
            func_F7A6(); break;
        case 0xF6A6:
            func_F6A6(); break;
        case 0xD0F6:
            func_D0F6(); break;
        case 0xDBA6:
            func_DBA6(); break;
        case 0xDBA7:
            func_DBA7(); break;
        case 0xF088:
            func_F088(); break;
        case 0xF089:
            func_F089(); break;
        case 0xDB85:
            func_DB85(); break;
        case 0xDB86:
            func_DB86(); break;
        case 0xF786:
            func_F786(); break;
        case 0xD45D:
            func_D45D(); break;
        case 0xEF00:
            func_EF00(); break;
        case 0xC398:
            func_C398(); break;
        case 0xFE01:
            func_FE01(); break;
        case 0xD355:
            func_D355(); break;
        case 0xEFE9:
            func_EFE9(); break;
        case 0xF08E:
            func_F08E(); break;
        case 0xF074:
            func_F074(); break;
        case 0xF044:
            func_F044(); break;
        case 0xC573:
            func_C573(); break;
        case 0xCFAC:
            func_CFAC(); break;
        case 0xE946:
            func_E946(); break;
        case 0xE960:
            func_E960(); break;
        case 0xE95D:
            func_E95D(); break;
        case 0xEFA6:
            func_EFA6(); break;
        case 0xEFF6:
            func_EFF6(); break;
        case 0xE52D:
            func_E52D(); break;
        case 0xD05B:
            func_D05B(); break;
        case 0xF5AE:
            func_F5AE(); break;
        case 0xD8A0:
            func_D8A0(); break;
        case 0xEA35:
            func_EA35(); break;
        case 0xEA78:
            func_EA78(); break;
        case 0xC9E7:
            func_C9E7(); break;
        case 0xE70C:
            func_E70C(); break;
        case 0xF102:
            func_F102(); break;
        case 0xF989:
            func_F989(); break;
        case 0xF0BB:
            func_F0BB(); break;
        case 0xFEFF:
            func_FEFF(); break;
        case 0xEFFE:
            func_EFFE(); break;
        case 0xFA0B:
            func_FA0B(); break;
        case 0xC6FF:
            func_C6FF(); break;
        case 0xC5B5:
            func_C5B5(); break;
        case 0xF2DB:
            func_F2DB(); break;
        case 0xE5D4:
            func_E5D4(); break;
        case 0xFB89:
            func_FB89(); break;
        case 0xF2A1:
            func_F2A1(); break;
        case 0x81BD:
            switch (g_current_bank) {
                case 15: func_C1BD(); break;
                case 1: func_81BD_b1(); break;
                case 2: func_81BD_b2(); break;
                case 3: func_81BD_b3(); break;
                case 5: func_81BD_b5(); break;
                case 6: func_81BD_b6(); break;
                case 7: func_81BD_b7(); break;
                case 9: func_81BD_b9(); break;
                case 11: func_81BD_b11(); break;
                case 12: func_81BD_b12(); break;
                case 13: func_81BD_b13(); break;
                case 14: func_81BD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC62A:
            func_C62A(); break;
        case 0xD78B:
            func_D78B(); break;
        case 0xCCF1:
            func_CCF1(); break;
        case 0xF03F:
            func_F03F(); break;
        case 0xDECE:
            func_DECE(); break;
        case 0x9009:
            switch (g_current_bank) {
                case 0: func_9009_b0(); break;
                case 1: func_9009_b1(); break;
                case 2: func_9009_b2(); break;
                case 5: func_9009_b5(); break;
                case 7: func_9009_b7(); break;
                case 9: func_9009_b9(); break;
                case 10: func_9009_b10(); break;
                case 12: func_9009_b12(); break;
                case 14: func_9009_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEDCF:
            func_EDCF(); break;
        case 0xCE35:
            func_CE35(); break;
        case 0xCDC5:
            func_CDC5(); break;
        case 0x82BC:
            switch (g_current_bank) {
                case 1: func_82BC_b1(); break;
                case 2: func_82BC_b2(); break;
                case 3: func_82BC_b3(); break;
                case 5: func_82BC_b5(); break;
                case 6: func_82BC_b6(); break;
                case 7: func_82BC_b7(); break;
                case 8: func_82BC_b8(); break;
                case 9: func_82BC_b9(); break;
                case 10: func_82BC_b10(); break;
                case 11: func_82BC_b11(); break;
                case 12: func_82BC_b12(); break;
                case 13: func_82BC_b13(); break;
                case 14: func_82BC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9A5:
            switch (g_current_bank) {
                case 15: func_F9A5(); break;
                case 1: func_B9A5_b1(); break;
                case 2: func_B9A5_b2(); break;
                case 3: func_B9A5_b3(); break;
                case 4: func_B9A5_b4(); break;
                case 5: func_B9A5_b5(); break;
                case 6: func_B9A5_b6(); break;
                case 8: func_B9A5_b8(); break;
                case 10: func_B9A5_b10(); break;
                case 11: func_B9A5_b11(); break;
                case 12: func_B9A5_b12(); break;
                case 13: func_B9A5_b13(); break;
                case 14: func_B9A5_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD3FA:
            func_D3FA(); break;
        case 0xFA5D:
            func_FA5D(); break;
        case 0xEF58:
            func_EF58(); break;
        case 0xD982:
            func_D982(); break;
        case 0xC1BE:
            func_C1BE(); break;
        case 0xED99:
            func_ED99(); break;
        case 0xEB97:
            func_EB97(); break;
        case 0xAD05:
            switch (g_current_bank) {
                case 0: func_AD05_b0(); break;
                case 1: func_AD05_b1(); break;
                case 2: func_AD05_b2(); break;
                case 3: func_AD05_b3(); break;
                case 4: func_AD05_b4(); break;
                case 5: func_AD05_b5(); break;
                case 6: func_AD05_b6(); break;
                case 7: func_AD05_b7(); break;
                case 8: func_AD05_b8(); break;
                case 9: func_AD05_b9(); break;
                case 11: func_AD05_b11(); break;
                case 14: func_AD05_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9905:
            switch (g_current_bank) {
                case 2: func_9905_b2(); break;
                case 3: func_9905_b3(); break;
                case 4: func_9905_b4(); break;
                case 5: func_9905_b5(); break;
                case 7: func_9905_b7(); break;
                case 8: func_9905_b8(); break;
                case 9: func_9905_b9(); break;
                case 10: func_9905_b10(); break;
                case 11: func_9905_b11(); break;
                case 12: func_9905_b12(); break;
                case 13: func_9905_b13(); break;
                case 14: func_9905_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD9ED:
            func_D9ED(); break;
        case 0xD97B:
            func_D97B(); break;
        case 0xCFAA:
            func_CFAA(); break;
        case 0xE4A1:
            func_E4A1(); break;
        case 0xFF0B:
            func_FF0B(); break;
        case 0xCCBF:
            func_CCBF(); break;
        case 0xC6AE:
            func_C6AE(); break;
        case 0xE7C7:
            func_E7C7(); break;
        case 0xEDAC:
            func_EDAC(); break;
        case 0xEDB1:
            func_EDB1(); break;
        case 0xE0AF:
            func_E0AF(); break;
        case 0xFC45:
            func_FC45(); break;
        case 0xEB07:
            func_EB07(); break;
        case 0xEADE:
            func_EADE(); break;
        case 0xD003:
            func_D003(); break;
        case 0xC5D3:
            func_C5D3(); break;
        case 0xCE7B:
            func_CE7B(); break;
        case 0xFCFC:
            func_FCFC(); break;
        case 0xE902:
            func_E902(); break;
        case 0xE906:
            func_E906(); break;
        case 0xF3A9:
            func_F3A9(); break;
        case 0xBFFA:
            func_BFFA_b15(); break;
        case 0xC3FB:
            func_C3FB(); break;
        case 0xC853:
            func_C853(); break;
        case 0xF2D1:
            func_F2D1(); break;
        case 0xFEB3:
            func_FEB3(); break;
        case 0xEDA1:
            func_EDA1(); break;
        case 0xEDA6:
            func_EDA6(); break;
        case 0xCEF9:
            func_CEF9(); break;
        case 0xEA47:
            func_EA47(); break;
        case 0xFB9F:
            func_FB9F(); break;
        case 0xEF7D:
            func_EF7D(); break;
        case 0xD917:
            func_D917(); break;
        case 0xC550:
            func_C550(); break;
        case 0xF9C8:
            func_F9C8(); break;
        case 0xF059:
            func_F059(); break;
        case 0xF6D5:
            func_F6D5(); break;
        case 0xFD2A:
            func_FD2A(); break;
        case 0x809D:
            switch (g_current_bank) {
                case 15: func_C09D(); break;
                case 0: func_809D_b0(); break;
                case 1: func_809D_b1(); break;
                case 2: func_809D_b2(); break;
                case 3: func_809D_b3(); break;
                case 6: func_809D_b6(); break;
                case 8: func_809D_b8(); break;
                case 9: func_809D_b9(); break;
                case 10: func_809D_b10(); break;
                case 11: func_809D_b11(); break;
                case 12: func_809D_b12(); break;
                case 14: func_809D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF6DF:
            func_F6DF(); break;
        case 0xF067:
            func_F067(); break;
        case 0xF230:
            func_F230(); break;
        case 0xF37B:
            func_F37B(); break;
        case 0xA393:
            switch (g_current_bank) {
                case 2: func_A393_b2(); break;
                case 5: func_A393_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA319:
            switch (g_current_bank) {
                case 3: func_A319_b3(); break;
                case 7: func_A319_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84A0:
            switch (g_current_bank) {
                case 9: func_84A0_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x811A:
            switch (g_current_bank) {
                case 5: func_811A_b5(); break;
                case 11: func_811A_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81AD:
            switch (g_current_bank) {
                case 5: func_81AD_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80CB:
            switch (g_current_bank) {
                case 5: func_80CB_b5(); break;
                case 11: func_80CB_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8603:
            switch (g_current_bank) {
                case 15: func_C603(); break;
                case 5: func_8603_b5(); break;
                case 11: func_8603_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x823D:
            switch (g_current_bank) {
                case 5: func_823D_b5(); break;
                case 11: func_823D_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83A8:
            switch (g_current_bank) {
                case 5: func_83A8_b5(); break;
                case 11: func_83A8_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83E7:
            switch (g_current_bank) {
                case 5: func_83E7_b5(); break;
                case 11: func_83E7_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83EA:
            switch (g_current_bank) {
                case 5: func_83EA_b5(); break;
                case 6: func_83EA_b6(); break;
                case 11: func_83EA_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x861B:
            switch (g_current_bank) {
                case 5: func_861B_b5(); break;
                case 11: func_861B_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82E2:
            switch (g_current_bank) {
                case 5: func_82E2_b5(); break;
                case 11: func_82E2_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D05:
            func_8D05_b7(); break;
        case 0xA004:
            nes_log_dispatch_miss(addr); return 0;
        case 0xEA31:
            func_EA31(); break;
        case 0xC6EE:
            func_C6EE(); break;
        case 0xC6CD:
            func_C6CD(); break;
        case 0xC6D1:
            func_C6D1(); break;
        case 0x81B5:
            func_81B5_b1(); break;
        case 0xA251:
            switch (g_current_bank) {
                case 2: func_A251_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1AA:
            switch (g_current_bank) {
                case 1: func_A1AA_b1(); break;
                case 2: func_A1AA_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB904:
            nes_log_dispatch_miss(addr); return 0;
        case 0x81BA:
            func_81BA_b6(); break;
        case 0x818D:
            func_818D_b13(); break;
        case 0x90B4:
            switch (g_current_bank) {
                case 12: func_90B4_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3FB:
            switch (g_current_bank) {
                case 2: func_A3FB_b2(); break;
                case 4: func_A3FB_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82B9:
            func_82B9_b10(); break;
        case 0xF8F0:
            func_F8F0(); break;
        case 0x8008:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD94D:
            func_D94D(); break;
        case 0xACBA:
            func_ACBA_b0(); break;
        case 0xACBE:
            switch (g_current_bank) {
                case 0: func_ACBE_b0(); break;
                case 14: func_ACBE_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACA9:
            func_ACA9_b0(); break;
        case 0xACAB:
            func_ACAB_b0(); break;
        case 0xACCD:
            func_ACCD_b0(); break;
        case 0xACBC:
            func_ACBC_b1(); break;
        case 0xACC0:
            func_ACC0_b1(); break;
        case 0xACB7:
            switch (g_current_bank) {
                case 2: func_ACB7_b2(); break;
                case 9: func_ACB7_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC96:
            switch (g_current_bank) {
                case 2: func_AC96_b2(); break;
                case 9: func_AC96_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACA8:
            func_ACA8_b2(); break;
        case 0xAC9A:
            func_AC9A_b2(); break;
        case 0xACC1:
            func_ACC1_b2(); break;
        case 0xACB3:
            func_ACB3_b2(); break;
        case 0xACC5:
            func_ACC5_b2(); break;
        case 0xACF1:
            func_ACF1_b2(); break;
        case 0xACAD:
            func_ACAD_b4(); break;
        case 0xB020:
            switch (g_current_bank) {
                case 4: func_B020_b4(); break;
                case 9: func_B020_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB458:
            func_B458_b5(); break;
        case 0xAC9D:
            func_AC9D_b5(); break;
        case 0xACDA:
            func_ACDA_b5(); break;
        case 0xACB4:
            switch (g_current_bank) {
                case 5: func_ACB4_b5(); break;
                case 9: func_ACB4_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACCF:
            func_ACCF_b7(); break;
        case 0xAC9B:
            func_AC9B_b8(); break;
        case 0xACCE:
            func_ACCE_b8(); break;
        case 0xAD04:
            func_AD04_b12(); break;
        case 0xACB0:
            func_ACB0_b13(); break;
        case 0xACFA:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CC0:
            switch (g_current_bank) {
                case 7: func_8CC0_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8802:
            nes_log_dispatch_miss(addr); return 0;
        case 0x98D2:
            func_98D2_b2(); break;
        case 0x98C7:
            func_98C7_b2(); break;
        case 0x8EC0:
            func_8EC0_b6(); break;
        case 0xA8FF:
            func_A8FF_b6(); break;
        case 0x93A8:
            nes_log_dispatch_miss(addr); return 0;
        case 0x9BC0:
            func_9BC0_b6(); break;
        case 0x9DBD:
            func_9DBD_b6(); break;
        case 0xA1A8:
            func_A1A8_b6(); break;
        case 0xABC0:
            switch (g_current_bank) {
                case 15: func_EBC0(); break;
                case 6: func_ABC0_b6(); break;
                case 14: func_ABC0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEB0:
            func_AEB0_b6(); break;
        case 0xC8C0:
            func_C8C0(); break;
        case 0xC9A8:
            func_C9A8(); break;
        case 0xD0A8:
            func_D0A8(); break;
        case 0xD3B0:
            func_D3B0(); break;
        case 0xD6B8:
            func_D6B8(); break;
        case 0xD9C0:
            func_D9C0(); break;
        case 0xDBB3:
            func_DBB3(); break;
        case 0xFBC0:
            func_FBC0(); break;
        case 0x9903:
            func_9903_b12(); break;
        case 0x98FD:
            func_98FD_b14(); break;
        case 0x809B:
            func_809B_b6(); break;
        case 0x808C:
            func_808C_b11(); break;
        case 0xA3E7:
            switch (g_current_bank) {
                case 3: func_A3E7_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA301:
            func_A301_b3(); break;
        case 0xA34A:
            switch (g_current_bank) {
                case 3: func_A34A_b3(); break;
                case 7: func_A34A_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA333:
            switch (g_current_bank) {
                case 3: func_A333_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC681:
            func_C681(); break;
        case 0xC6EC:
            func_C6EC(); break;
        case 0xFFFF:
            func_FFFF(); break;
        case 0xB011:
            func_B011_b2(); break;
        case 0xA561:
            switch (g_current_bank) {
                case 2: func_A561_b2(); break;
                case 1: func_A561_b1(); break;
                case 3: func_A561_b3(); break;
                case 5: func_A561_b5(); break;
                case 14: func_A561_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1B4:
            switch (g_current_bank) {
                case 2: func_A1B4_b2(); break;
                case 4: func_A1B4_b4(); break;
                case 5: func_A1B4_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA360:
            switch (g_current_bank) {
                case 2: func_A360_b2(); break;
                case 5: func_A360_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA50E:
            switch (g_current_bank) {
                case 2: func_A50E_b2(); break;
                case 5: func_A50E_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA68E:
            switch (g_current_bank) {
                case 2: func_A68E_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA796:
            switch (g_current_bank) {
                case 2: func_A796_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7BE:
            switch (g_current_bank) {
                case 2: func_A7BE_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA87D:
            switch (g_current_bank) {
                case 15: func_E87D(); break;
                case 2: func_A87D_b2(); break;
                case 5: func_A87D_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA12C:
            switch (g_current_bank) {
                case 2: func_A12C_b2(); break;
                case 5: func_A12C_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1CF:
            switch (g_current_bank) {
                case 2: func_A1CF_b2(); break;
                case 1: func_A1CF_b1(); break;
                case 5: func_A1CF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA38B:
            switch (g_current_bank) {
                case 2: func_A38B_b2(); break;
                case 1: func_A38B_b1(); break;
                case 5: func_A38B_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA422:
            switch (g_current_bank) {
                case 2: func_A422_b2(); break;
                case 5: func_A422_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA549:
            switch (g_current_bank) {
                case 2: func_A549_b2(); break;
                case 5: func_A549_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA632:
            switch (g_current_bank) {
                case 2: func_A632_b2(); break;
                case 5: func_A632_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA554:
            switch (g_current_bank) {
                case 2: func_A554_b2(); break;
                case 5: func_A554_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA171:
            func_A171_b6(); break;
        case 0xD073:
            func_D073(); break;
        case 0xA3E6:
            func_A3E6_b3(); break;
        case 0xA42D:
            switch (g_current_bank) {
                case 3: func_A42D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA485:
            switch (g_current_bank) {
                case 3: func_A485_b3(); break;
                case 2: func_A485_b2(); break;
                case 7: func_A485_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA553:
            func_A553_b2(); break;
        case 0xA7A6:
            switch (g_current_bank) {
                case 2: func_A7A6_b2(); break;
                case 1: func_A7A6_b1(); break;
                case 3: func_A7A6_b3(); break;
                case 5: func_A7A6_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA80C:
            switch (g_current_bank) {
                case 2: func_A80C_b2(); break;
                case 3: func_A80C_b3(); break;
                case 5: func_A80C_b5(); break;
                case 6: func_A80C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA833:
            switch (g_current_bank) {
                case 15: func_E833(); break;
                case 2: func_A833_b2(); break;
                case 1: func_A833_b1(); break;
                case 5: func_A833_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8C7:
            switch (g_current_bank) {
                case 2: func_A8C7_b2(); break;
                case 5: func_A8C7_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA908:
            switch (g_current_bank) {
                case 15: func_E908(); break;
                case 2: func_A908_b2(); break;
                case 1: func_A908_b1(); break;
                case 5: func_A908_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA921:
            switch (g_current_bank) {
                case 2: func_A921_b2(); break;
                case 5: func_A921_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA123:
            func_A123_b6(); break;
        case 0xA86F:
            switch (g_current_bank) {
                case 2: func_A86F_b2(); break;
                case 5: func_A86F_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0E2:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA09D:
            switch (g_current_bank) {
                case 6: func_A09D_b6(); break;
                case 1: func_A09D_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9690:
            func_9690_b0(); break;
        case 0x9494:
            func_9494_b0(); break;
        case 0x9696:
            func_9696_b0(); break;
        case 0x94B4:
            func_94B4_b0(); break;
        case 0x94D4:
            switch (g_current_bank) {
                case 0: func_94D4_b0(); break;
                case 14: func_94D4_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8381:
            func_8381_b2(); break;
        case 0x8481:
            switch (g_current_bank) {
                case 2: func_8481_b2(); break;
                case 5: func_8481_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8185:
            func_8185_b2(); break;
        case 0x8681:
            func_8681_b2(); break;
        case 0x8387:
            func_8387_b2(); break;
        case 0x8300:
            switch (g_current_bank) {
                case 2: func_8300_b2(); break;
                case 11: func_8300_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C00:
            switch (g_current_bank) {
                case 2: func_8C00_b2(); break;
                case 3: func_8C00_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA081:
            func_A081_b2(); break;
        case 0xA8A1:
            switch (g_current_bank) {
                case 15: func_E8A1(); break;
                case 2: func_A8A1_b2(); break;
                case 3: func_A8A1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x809F:
            func_809F_b2(); break;
        case 0x8800:
            switch (g_current_bank) {
                case 15: func_C800(); break;
                case 2: func_8800_b2(); break;
                case 14: func_8800_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8881:
            switch (g_current_bank) {
                case 2: func_8881_b2(); break;
                case 3: func_8881_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8292:
            func_8292_b2(); break;
        case 0x840D:
            switch (g_current_bank) {
                case 2: func_840D_b2(); break;
                case 3: func_840D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA052:
            switch (g_current_bank) {
                case 2: func_A052_b2(); break;
                case 3: func_A052_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA275:
            func_A275_b2(); break;
        case 0xA857:
            func_A857_b2(); break;
        case 0xA299:
            switch (g_current_bank) {
                case 2: func_A299_b2(); break;
                case 3: func_A299_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA27F:
            func_A27F_b2(); break;
        case 0xA7A7:
            func_A7A7_b3(); break;
        case 0xA3A2:
            func_A3A2_b3(); break;
        case 0xA4A3:
            func_A4A3_b3(); break;
        case 0xA2BA:
            func_A2BA_b3(); break;
        case 0xA3A3:
            func_A3A3_b3(); break;
        case 0x8085:
            func_8085_b3(); break;
        case 0x8786:
            func_8786_b3(); break;
        case 0x8E8D:
            func_8E8D_b3(); break;
        case 0x8082:
            func_8082_b3(); break;
        case 0x81C7:
            func_81C7_b3(); break;
        case 0x8584:
            func_8584_b3(); break;
        case 0x8086:
            func_8086_b3(); break;
        case 0x8281:
            func_8281_b3(); break;
        case 0x8403:
            func_8403_b3(); break;
        case 0xA90F:
            func_A90F_b3(); break;
        case 0xA902:
            switch (g_current_bank) {
                case 15: func_E902(); break;
                case 3: func_A902_b3(); break;
                case 14: func_A902_b14(); break;
                case 9: func_A902_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8502:
            func_8502_b3(); break;
        case 0xA56D:
            func_A56D_b3(); break;
        case 0x85FC:
            switch (g_current_bank) {
                case 3: func_85FC_b3(); break;
                case 11: func_85FC_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA579:
            func_A579_b3(); break;
        case 0x85FD:
            switch (g_current_bank) {
                case 3: func_85FD_b3(); break;
                case 6: func_85FD_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA57A:
            func_A57A_b3(); break;
        case 0x8503:
            switch (g_current_bank) {
                case 15: func_C503(); break;
                case 3: func_8503_b3(); break;
                case 6: func_8503_b6(); break;
                case 9: func_8503_b9(); break;
                case 14: func_8503_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8571:
            switch (g_current_bank) {
                case 3: func_8571_b3(); break;
                case 6: func_8571_b6(); break;
                case 9: func_8571_b9(); break;
                case 11: func_8571_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8572:
            switch (g_current_bank) {
                case 3: func_8572_b3(); break;
                case 11: func_8572_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85FA:
            switch (g_current_bank) {
                case 3: func_85FA_b3(); break;
                case 11: func_85FA_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F9:
            switch (g_current_bank) {
                case 3: func_85F9_b3(); break;
                case 14: func_85F9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85EE:
            switch (g_current_bank) {
                case 3: func_85EE_b3(); break;
                case 6: func_85EE_b6(); break;
                case 9: func_85EE_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5F8:
            func_A5F8_b3(); break;
        case 0x80A9:
            func_80A9_b3(); break;
        case 0xA900:
            switch (g_current_bank) {
                case 15: func_E900(); break;
                case 3: func_A900_b3(); break;
                case 14: func_A900_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x808D:
            switch (g_current_bank) {
                case 3: func_808D_b3(); break;
                case 14: func_808D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x852B:
            func_852B_b3(); break;
        case 0xA929:
            func_A929_b3(); break;
        case 0x8520:
            func_8520_b3(); break;
        case 0x85EF:
            func_85EF_b3(); break;
        case 0x852C:
            func_852C_b3(); break;
        case 0x852D:
            func_852D_b3(); break;
        case 0xA55A:
            func_A55A_b3(); break;
        case 0xA0E8:
            func_A0E8_b3(); break;
        case 0xA410:
            func_A410_b3(); break;
        case 0xA5FF:
            func_A5FF_b3(); break;
        case 0x9593:
            switch (g_current_bank) {
                case 3: func_9593_b3(); break;
                case 14: func_9593_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA582:
            func_A582_b3(); break;
        case 0x9594:
            func_9594_b3(); break;
        case 0x85B1:
            switch (g_current_bank) {
                case 6: func_85B1_b6(); break;
                case 9: func_85B1_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B2:
            switch (g_current_bank) {
                case 6: func_85B2_b6(); break;
                case 9: func_85B2_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B3:
            switch (g_current_bank) {
                case 6: func_85B3_b6(); break;
                case 9: func_85B3_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x859E:
            switch (g_current_bank) {
                case 15: func_C59E(); break;
                case 6: func_859E_b6(); break;
                case 9: func_859E_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x859F:
            switch (g_current_bank) {
                case 6: func_859F_b6(); break;
                case 9: func_859F_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8574:
            switch (g_current_bank) {
                case 6: func_8574_b6(); break;
                case 11: func_8574_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F8:
            switch (g_current_bank) {
                case 6: func_85F8_b6(); break;
                case 14: func_85F8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x856A:
            func_856A_b6(); break;
        case 0x856B:
            func_856B_b6(); break;
        case 0x888F:
            func_888F_b9(); break;
        case 0x9080:
            func_9080_b9(); break;
        case 0x9180:
            func_9180_b9(); break;
        case 0x9A92:
            func_9A92_b9(); break;
        case 0x939B:
            func_939B_b9(); break;
        case 0x9C94:
            func_9C94_b9(); break;
        case 0x959D:
            func_959D_b9(); break;
        case 0x9E96:
            func_9E96_b9(); break;
        case 0x80EB:
            func_80EB_b9(); break;
        case 0x8080:
            switch (g_current_bank) {
                case 15: func_C080(); break;
                case 9: func_8080_b9(); break;
                case 7: func_8080_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A0:
            switch (g_current_bank) {
                case 9: func_85A0_b9(); break;
                case 5: func_85A0_b5(); break;
                case 11: func_85A0_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B4:
            func_85B4_b9(); break;
        case 0x85A1:
            func_85A1_b9(); break;
        case 0xBE01:
            func_BE01_b13(); break;
        case 0x8BA9:
            switch (g_current_bank) {
                case 14: func_8BA9_b14(); break;
                case 3: func_8BA9_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8099:
            switch (g_current_bank) {
                case 15: func_C099(); break;
                case 14: func_8099_b14(); break;
                case 11: func_8099_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA904:
            func_A904_b14(); break;
        case 0x990C:
            func_990C_b14(); break;
        case 0x991B:
            func_991B_b14(); break;
        case 0x9D66:
            func_9D66_b14(); break;
        case 0xBEAB:
            func_BEAB_b14(); break;
        case 0xBEBE:
            func_BEBE_b14(); break;
        case 0xA9BE:
            func_A9BE_b14(); break;
        case 0xA00A:
            func_A00A_b14(); break;
        case 0xA085:
            func_A085_b14(); break;
        case 0xB485:
            func_B485_b14(); break;
        case 0xA185:
            switch (g_current_bank) {
                case 14: func_A185_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA868:
            func_A868_b14(); break;
        case 0xB903:
            func_B903_b14(); break;
        case 0x9E85:
            func_9E85_b14(); break;
        case 0x9F85:
            func_9F85_b14(); break;
        case 0x9A20:
            func_9A20_b14(); break;
        case 0xA2F8:
            switch (g_current_bank) {
                case 14: func_A2F8_b14(); break;
                case 1: func_A2F8_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9980:
            func_9980_b14(); break;
        case 0xA560:
            func_A560_b14(); break;
        case 0xA400:
            switch (g_current_bank) {
                case 15: func_E400(); break;
                case 14: func_A400_b14(); break;
                case 1: func_A400_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA52B:
            func_A52B_b14(); break;
        case 0xA903:
            func_A903_b14(); break;
        case 0x8D00:
            func_8D00_b14(); break;
        case 0x9004:
            func_9004_b14(); break;
        case 0xB012:
            func_B012_b14(); break;
        case 0xB002:
            func_B002_b14(); break;
        case 0xA508:
            func_A508_b14(); break;
        case 0x817D:
            func_817D_b14(); break;
        case 0x8A85:
            func_8A85_b14(); break;
        case 0x948F:
            func_948F_b14(); break;
        case 0x9E99:
            func_9E99_b14(); break;
        case 0xA8A3:
            func_A8A3_b14(); break;
        case 0x807B:
            func_807B_b14(); break;
        case 0xA6A2:
            switch (g_current_bank) {
                case 14: func_A6A2_b14(); break;
                case 2: func_A6A2_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0AB:
            func_B0AB_b14(); break;
        case 0xBAB5:
            func_BAB5_b14(); break;
        case 0xA2FB:
            func_A2FB_b14(); break;
        case 0x81FB:
            func_81FB_b14(); break;
        case 0xB26E:
            func_B26E_b14(); break;
        case 0x82AD:
            func_82AD_b14(); break;
        case 0xA90A:
            func_A90A_b14(); break;
        case 0xB001:
            func_B001_b14(); break;
        case 0xA29A:
            func_A29A_b14(); break;
        case 0x8600:
            func_8600_b14(); break;
        case 0xA090:
            switch (g_current_bank) {
                case 14: func_A090_b14(); break;
                case 2: func_A090_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB504:
            func_B504_b14(); break;
        case 0x9501:
            func_9501_b14(); break;
        case 0x8A80:
            func_8A80_b14(); break;
        case 0xA211:
            switch (g_current_bank) {
                case 15: func_E211(); break;
                case 14: func_A211_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E1B:
            func_8E1B_b14(); break;
        case 0xA197:
            switch (g_current_bank) {
                case 2: func_A197_b2(); break;
                case 4: func_A197_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA689:
            switch (g_current_bank) {
                case 2: func_A689_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA31A:
            switch (g_current_bank) {
                case 2: func_A31A_b2(); break;
                case 4: func_A31A_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82FC:
            func_82FC_b2(); break;
        case 0x8BEE:
            func_8BEE_b2(); break;
        case 0xC041:
            func_C041(); break;
        case 0xD95D:
            func_D95D(); break;
        case 0xA84A:
            switch (g_current_bank) {
                case 2: func_A84A_b2(); break;
                case 4: func_A84A_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3C1:
            switch (g_current_bank) {
                case 2: func_A3C1_b2(); break;
                case 4: func_A3C1_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA377:
            switch (g_current_bank) {
                case 2: func_A377_b2(); break;
                case 4: func_A377_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83FB:
            func_83FB_b2(); break;
        case 0xA905:
            switch (g_current_bank) {
                case 2: func_A905_b2(); break;
                case 3: func_A905_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA774:
            switch (g_current_bank) {
                case 3: func_A774_b3(); break;
                case 7: func_A774_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3D6:
            switch (g_current_bank) {
                case 3: func_A3D6_b3(); break;
                case 14: func_A3D6_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD04:
            switch (g_current_bank) {
                case 3: func_BD04_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1A2:
            switch (g_current_bank) {
                case 3: func_A1A2_b3(); break;
                case 14: func_A1A2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8874:
            func_8874_b3(); break;
        case 0xA5BB:
            switch (g_current_bank) {
                case 3: func_A5BB_b3(); break;
                case 6: func_A5BB_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA745:
            switch (g_current_bank) {
                case 3: func_A745_b3(); break;
                case 7: func_A745_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85BC:
            func_85BC_b3(); break;
        case 0xA52C:
            switch (g_current_bank) {
                case 3: func_A52C_b3(); break;
                case 7: func_A52C_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8539:
            func_8539_b3(); break;
        case 0xA22E:
            switch (g_current_bank) {
                case 3: func_A22E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1FF:
            switch (g_current_bank) {
                case 15: func_E1FF(); break;
                case 3: func_A1FF_b3(); break;
                case 7: func_A1FF_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8BEF:
            func_8BEF_b3(); break;
        case 0xA044:
            func_A044_b3(); break;
        case 0xA836:
            switch (g_current_bank) {
                case 3: func_A836_b3(); break;
                case 6: func_A836_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1E0:
            switch (g_current_bank) {
                case 3: func_A1E0_b3(); break;
                case 1: func_A1E0_b1(); break;
                case 6: func_A1E0_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8598:
            func_8598_b6(); break;
        case 0xAA0A:
            switch (g_current_bank) {
                case 9: func_AA0A_b9(); break;
                case 14: func_AA0A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBDE2:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD82:
            switch (g_current_bank) {
                case 9: func_BD82_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD1B:
            switch (g_current_bank) {
                case 9: func_BD1B_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBEB8:
            switch (g_current_bank) {
                case 15: func_FEB8(); break;
                case 9: func_BEB8_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA98D:
            func_A98D_b14(); break;
        case 0xB495:
            switch (g_current_bank) {
                case 14: func_B495_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9E46:
            switch (g_current_bank) {
                case 14: func_9E46_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F78:
            func_9F78_b14(); break;
        case 0x9776:
            switch (g_current_bank) {
                case 14: func_9776_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA41A:
            switch (g_current_bank) {
                case 14: func_A41A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3B0:
            switch (g_current_bank) {
                case 14: func_A3B0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x867C:
            switch (g_current_bank) {
                case 14: func_867C_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DC3:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB00C:
            func_B00C_b14(); break;
        case 0xA5BC:
            switch (g_current_bank) {
                case 14: func_A5BC_b14(); break;
                case 3: func_A5BC_b3(); break;
                case 6: func_A5BC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x949B:
            switch (g_current_bank) {
                case 14: func_949B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB11C:
            switch (g_current_bank) {
                case 14: func_B11C_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB01:
            switch (g_current_bank) {
                case 14: func_BB01_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95B9:
            switch (g_current_bank) {
                case 15: func_D5B9(); break;
                case 14: func_95B9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA942:
            func_A942_b14(); break;
        case 0x8ED3:
            switch (g_current_bank) {
                case 14: func_8ED3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8F2F:
            switch (g_current_bank) {
                case 15: func_CF2F(); break;
                case 14: func_8F2F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83FA:
            func_83FA_b2(); break;
        case 0xBAB8:
            func_BAB8_b3(); break;
        case 0x8B96:
            func_8B96_b3(); break;
        case 0xA92A:
            switch (g_current_bank) {
                case 3: func_A92A_b3(); break;
                case 7: func_A92A_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA787:
            switch (g_current_bank) {
                case 3: func_A787_b3(); break;
                case 14: func_A787_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA953:
            switch (g_current_bank) {
                case 14: func_A953_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x84B9:
            func_84B9_b14(); break;
        case 0xA8EE:
            switch (g_current_bank) {
                case 3: func_A8EE_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC02F:
            func_C02F(); break;
        case 0xC040:
            func_C040(); break;
        case 0xC05B:
            func_C05B(); break;
        case 0xC070:
            func_C070(); break;
        case 0xC0DD:
            func_C0DD(); break;
        case 0xC0E7:
            func_C0E7(); break;
        case 0xC17B:
            func_C17B(); break;
        case 0xC198:
            func_C198(); break;
        case 0xC1C1:
            func_C1C1(); break;
        case 0xC1F3:
            func_C1F3(); break;
        case 0xC200:
            func_C200(); break;
        case 0xC235:
            func_C235(); break;
        case 0xC26F:
            func_C26F(); break;
        case 0xC297:
            func_C297(); break;
        case 0xC2D2:
            func_C2D2(); break;
        case 0xC302:
            func_C302(); break;
        case 0xC32B:
            func_C32B(); break;
        case 0xC355:
            func_C355(); break;
        case 0xC372:
            func_C372(); break;
        case 0xC375:
            func_C375(); break;
        case 0xC3A3:
            func_C3A3(); break;
        case 0xC3C9:
            func_C3C9(); break;
        case 0xC3CC:
            func_C3CC(); break;
        case 0xC408:
            func_C408(); break;
        case 0xC417:
            func_C417(); break;
        case 0xC447:
            func_C447(); break;
        case 0xC44A:
            func_C44A(); break;
        case 0xC469:
            func_C469(); break;
        case 0xC49C:
            func_C49C(); break;
        case 0xC51C:
            func_C51C(); break;
        case 0xC583:
            func_C583(); break;
        case 0xC593:
            func_C593(); break;
        case 0xC599:
            func_C599(); break;
        case 0xC5BF:
            func_C5BF(); break;
        case 0xC5C3:
            func_C5C3(); break;
        case 0xC5E0:
            func_C5E0(); break;
        case 0xC5E6:
            func_C5E6(); break;
        case 0xC5F5:
            func_C5F5(); break;
        case 0xC60A:
            func_C60A(); break;
        case 0xC63E:
            func_C63E(); break;
        case 0xC669:
            func_C669(); break;
        case 0xC66B:
            func_C66B(); break;
        case 0xC682:
            func_C682(); break;
        case 0xC691:
            func_C691(); break;
        case 0xC696:
            func_C696(); break;
        case 0xC755:
            func_C755(); break;
        case 0xC75D:
            func_C75D(); break;
        case 0xC75F:
            func_C75F(); break;
        case 0xC76A:
            func_C76A(); break;
        case 0xC774:
            func_C774(); break;
        case 0xC77E:
            func_C77E(); break;
        case 0xC797:
            func_C797(); break;
        case 0xC7A4:
            func_C7A4(); break;
        case 0xC7AF:
            func_C7AF(); break;
        case 0xC7B9:
            func_C7B9(); break;
        case 0xC7D4:
            func_C7D4(); break;
        case 0xC7D8:
            func_C7D8(); break;
        case 0xC7DC:
            func_C7DC(); break;
        case 0xC8B4:
            func_C8B4(); break;
        case 0xC8D0:
            func_C8D0(); break;
        case 0xC991:
            func_C991(); break;
        case 0xC9CB:
            func_C9CB(); break;
        case 0xC9D3:
            func_C9D3(); break;
        case 0xCA10:
            func_CA10(); break;
        case 0xCAA4:
            func_CAA4(); break;
        case 0xCAB5:
            func_CAB5(); break;
        case 0xCAD3:
            func_CAD3(); break;
        case 0xCAD7:
            func_CAD7(); break;
        case 0xCAF2:
            func_CAF2(); break;
        case 0xCB49:
            func_CB49(); break;
        case 0xCB5B:
            func_CB5B(); break;
        case 0xCB78:
            func_CB78(); break;
        case 0xCB94:
            func_CB94(); break;
        case 0xCBA7:
            func_CBA7(); break;
        case 0xCBB1:
            func_CBB1(); break;
        case 0xCBF7:
            func_CBF7(); break;
        case 0xCC03:
            func_CC03(); break;
        case 0xCC99:
            func_CC99(); break;
        case 0xCCF7:
            func_CCF7(); break;
        case 0xCD41:
            func_CD41(); break;
        case 0xCD4B:
            func_CD4B(); break;
        case 0xCD5A:
            func_CD5A(); break;
        case 0xCD6A:
            func_CD6A(); break;
        case 0xCD76:
            func_CD76(); break;
        case 0xCD8B:
            func_CD8B(); break;
        case 0xCDE5:
            func_CDE5(); break;
        case 0xCDE6:
            func_CDE6(); break;
        case 0xCE16:
            func_CE16(); break;
        case 0xCE36:
            func_CE36(); break;
        case 0xCECD:
            func_CECD(); break;
        case 0xCEE4:
            func_CEE4(); break;
        case 0xCEEB:
            func_CEEB(); break;
        case 0xCF05:
            func_CF05(); break;
        case 0xCF0A:
            func_CF0A(); break;
        case 0xCF24:
            func_CF24(); break;
        case 0xCF46:
            func_CF46(); break;
        case 0xCF4B:
            func_CF4B(); break;
        case 0xCF65:
            func_CF65(); break;
        case 0xCF7B:
            func_CF7B(); break;
        case 0xCF84:
            func_CF84(); break;
        case 0xCF9B:
            func_CF9B(); break;
        case 0xCFC2:
            func_CFC2(); break;
        case 0xCFC7:
            func_CFC7(); break;
        case 0xCFD3:
            func_CFD3(); break;
        case 0xCFDF:
            func_CFDF(); break;
        case 0xD01D:
            func_D01D(); break;
        case 0xD07E:
            func_D07E(); break;
        case 0xD084:
            func_D084(); break;
        case 0xD0A6:
            func_D0A6(); break;
        case 0xD0A7:
            func_D0A7(); break;
        case 0xD0CC:
            func_D0CC(); break;
        case 0xD0D8:
            func_D0D8(); break;
        case 0xD1A6:
            func_D1A6(); break;
        case 0xD1B7:
            func_D1B7(); break;
        case 0xD1FA:
            func_D1FA(); break;
        case 0xD1FB:
            func_D1FB(); break;
        case 0xD211:
            func_D211(); break;
        case 0xD212:
            func_D212(); break;
        case 0xD24D:
            func_D24D(); break;
        case 0xD271:
            func_D271(); break;
        case 0xD292:
            func_D292(); break;
        case 0xD29F:
            func_D29F(); break;
        case 0xD2B4:
            func_D2B4(); break;
        case 0xD2D3:
            func_D2D3(); break;
        case 0xD2E1:
            func_D2E1(); break;
        case 0xD302:
            func_D302(); break;
        case 0xD36F:
            func_D36F(); break;
        case 0xD37D:
            func_D37D(); break;
        case 0xD38C:
            func_D38C(); break;
        case 0xD396:
            func_D396(); break;
        case 0xD39F:
            func_D39F(); break;
        case 0xD3A9:
            func_D3A9(); break;
        case 0xD412:
            func_D412(); break;
        case 0xD420:
            func_D420(); break;
        case 0xD43D:
            func_D43D(); break;
        case 0xD43E:
            func_D43E(); break;
        case 0xD455:
            func_D455(); break;
        case 0xD45F:
            func_D45F(); break;
        case 0xD470:
            func_D470(); break;
        case 0xD471:
            func_D471(); break;
        case 0xD48A:
            func_D48A(); break;
        case 0xD4A3:
            func_D4A3(); break;
        case 0xD4AF:
            func_D4AF(); break;
        case 0xD4C6:
            func_D4C6(); break;
        case 0xD4C7:
            func_D4C7(); break;
        case 0xD4C8:
            func_D4C8(); break;
        case 0xD508:
            func_D508(); break;
        case 0xD50B:
            func_D50B(); break;
        case 0xD51E:
            func_D51E(); break;
        case 0xD521:
            func_D521(); break;
        case 0xD53B:
            func_D53B(); break;
        case 0xD54D:
            func_D54D(); break;
        case 0xD568:
            func_D568(); break;
        case 0xD57A:
            func_D57A(); break;
        case 0xD5A4:
            func_D5A4(); break;
        case 0xD5B9:
            func_D5B9(); break;
        case 0xD5BA:
            func_D5BA(); break;
        case 0xD5D2:
            func_D5D2(); break;
        case 0xD5DF:
            func_D5DF(); break;
        case 0xD5EB:
            func_D5EB(); break;
        case 0xD5FC:
            func_D5FC(); break;
        case 0xD60B:
            func_D60B(); break;
        case 0xD60C:
            func_D60C(); break;
        case 0xD649:
            func_D649(); break;
        case 0xD656:
            func_D656(); break;
        case 0xD667:
            func_D667(); break;
        case 0xD67E:
            func_D67E(); break;
        case 0xD69D:
            func_D69D(); break;
        case 0xD6C3:
            func_D6C3(); break;
        case 0xD6C5:
            func_D6C5(); break;
        case 0xD701:
            func_D701(); break;
        case 0xD72D:
            func_D72D(); break;
        case 0xD742:
            func_D742(); break;
        case 0xD754:
            func_D754(); break;
        case 0xD757:
            func_D757(); break;
        case 0xD764:
            func_D764(); break;
        case 0xD768:
            func_D768(); break;
        case 0xD76A:
            func_D76A(); break;
        case 0xD778:
            func_D778(); break;
        case 0xD7E7:
            func_D7E7(); break;
        case 0xD7EA:
            func_D7EA(); break;
        case 0xD7F0:
            func_D7F0(); break;
        case 0xD842:
            func_D842(); break;
        case 0xD84E:
            func_D84E(); break;
        case 0xD857:
            func_D857(); break;
        case 0xD86E:
            func_D86E(); break;
        case 0xD886:
            func_D886(); break;
        case 0xD8AF:
            func_D8AF(); break;
        case 0xD8CE:
            func_D8CE(); break;
        case 0xD8D9:
            func_D8D9(); break;
        case 0xD908:
            func_D908(); break;
        case 0xD90B:
            func_D90B(); break;
        case 0xD942:
            func_D942(); break;
        case 0xD95B:
            func_D95B(); break;
        case 0xD95F:
            func_D95F(); break;
        case 0xD973:
            func_D973(); break;
        case 0xD98C:
            func_D98C(); break;
        case 0xD990:
            func_D990(); break;
        case 0xD9A8:
            func_D9A8(); break;
        case 0xD9D2:
            func_D9D2(); break;
        case 0xD9EB:
            func_D9EB(); break;
        case 0xDA02:
            func_DA02(); break;
        case 0xDA03:
            func_DA03(); break;
        case 0xDA31:
            func_DA31(); break;
        case 0xDA49:
            func_DA49(); break;
        case 0xDA55:
            func_DA55(); break;
        case 0xDA6C:
            func_DA6C(); break;
        case 0xDA70:
            func_DA70(); break;
        case 0xDA7A:
            func_DA7A(); break;
        case 0xDA82:
            func_DA82(); break;
        case 0xDA92:
            func_DA92(); break;
        case 0xDAAC:
            func_DAAC(); break;
        case 0xDAB4:
            func_DAB4(); break;
        case 0xDAC8:
            func_DAC8(); break;
        case 0xDAD1:
            func_DAD1(); break;
        case 0xDAEF:
            func_DAEF(); break;
        case 0xDB00:
            func_DB00(); break;
        case 0xDB07:
            func_DB07(); break;
        case 0xDB12:
            func_DB12(); break;
        case 0xDB2C:
            func_DB2C(); break;
        case 0xDB42:
            func_DB42(); break;
        case 0xDB88:
            func_DB88(); break;
        case 0xDBB5:
            func_DBB5(); break;
        case 0xDBFB:
            func_DBFB(); break;
        case 0xDC0E:
            func_DC0E(); break;
        case 0xDC0F:
            func_DC0F(); break;
        case 0xDC18:
            func_DC18(); break;
        case 0xDC2C:
            func_DC2C(); break;
        case 0xDC6F:
            func_DC6F(); break;
        case 0xDC73:
            func_DC73(); break;
        case 0xDC74:
            func_DC74(); break;
        case 0xDD25:
            func_DD25(); break;
        case 0xDD38:
            func_DD38(); break;
        case 0xDD3C:
            func_DD3C(); break;
        case 0xDD52:
            func_DD52(); break;
        case 0xDD54:
            func_DD54(); break;
        case 0xDD72:
            func_DD72(); break;
        case 0xDD81:
            func_DD81(); break;
        case 0xDD83:
            func_DD83(); break;
        case 0xDD96:
            func_DD96(); break;
        case 0xDDA5:
            func_DDA5(); break;
        case 0xDDC1:
            func_DDC1(); break;
        case 0xDDE2:
            func_DDE2(); break;
        case 0xDE40:
            func_DE40(); break;
        case 0xDE5D:
            func_DE5D(); break;
        case 0xDF51:
            func_DF51(); break;
        case 0xDF73:
            func_DF73(); break;
        case 0xDF83:
            func_DF83(); break;
        case 0xDFA2:
            func_DFA2(); break;
        case 0xDFC2:
            func_DFC2(); break;
        case 0xE015:
            func_E015(); break;
        case 0xE022:
            func_E022(); break;
        case 0xE023:
            func_E023(); break;
        case 0xE03D:
            func_E03D(); break;
        case 0xE05A:
            func_E05A(); break;
        case 0xE068:
            func_E068(); break;
        case 0xE079:
            func_E079(); break;
        case 0xE07D:
            func_E07D(); break;
        case 0xE08B:
            func_E08B(); break;
        case 0xE0A1:
            func_E0A1(); break;
        case 0xE0B2:
            func_E0B2(); break;
        case 0xE0BC:
            func_E0BC(); break;
        case 0xE173:
            func_E173(); break;
        case 0xE18A:
            func_E18A(); break;
        case 0xE1A7:
            func_E1A7(); break;
        case 0xE1AF:
            func_E1AF(); break;
        case 0xE1DC:
            func_E1DC(); break;
        case 0xE1E1:
            func_E1E1(); break;
        case 0xE1F7:
            func_E1F7(); break;
        case 0xE1FF:
            func_E1FF(); break;
        case 0xE222:
            func_E222(); break;
        case 0xE23A:
            func_E23A(); break;
        case 0xE23D:
            func_E23D(); break;
        case 0xE24A:
            func_E24A(); break;
        case 0xE273:
            func_E273(); break;
        case 0xE27A:
            func_E27A(); break;
        case 0xE28F:
            func_E28F(); break;
        case 0xE29D:
            func_E29D(); break;
        case 0xE2A5:
            func_E2A5(); break;
        case 0xE2D5:
            func_E2D5(); break;
        case 0xE2E8:
            func_E2E8(); break;
        case 0xE2F7:
            func_E2F7(); break;
        case 0xE2FD:
            func_E2FD(); break;
        case 0xE308:
            func_E308(); break;
        case 0xE32A:
            func_E32A(); break;
        case 0xE35E:
            func_E35E(); break;
        case 0xE372:
            func_E372(); break;
        case 0xE388:
            func_E388(); break;
        case 0xE3C6:
            func_E3C6(); break;
        case 0xE3E5:
            func_E3E5(); break;
        case 0xE3FF:
            func_E3FF(); break;
        case 0xE403:
            func_E403(); break;
        case 0xE411:
            func_E411(); break;
        case 0xE425:
            func_E425(); break;
        case 0xE430:
            func_E430(); break;
        case 0xE440:
            func_E440(); break;
        case 0xE44F:
            func_E44F(); break;
        case 0xE465:
            func_E465(); break;
        case 0xE489:
            func_E489(); break;
        case 0xE49F:
            func_E49F(); break;
        case 0xE4BB:
            func_E4BB(); break;
        case 0xE4D6:
            func_E4D6(); break;
        case 0xE4E1:
            func_E4E1(); break;
        case 0xE4EF:
            func_E4EF(); break;
        case 0xE517:
            func_E517(); break;
        case 0xE55C:
            func_E55C(); break;
        case 0xE588:
            func_E588(); break;
        case 0xE5B4:
            func_E5B4(); break;
        case 0xE5C1:
            func_E5C1(); break;
        case 0xE5DF:
            func_E5DF(); break;
        case 0xE653:
            func_E653(); break;
        case 0xE691:
            func_E691(); break;
        case 0xE6A4:
            func_E6A4(); break;
        case 0xE6B3:
            func_E6B3(); break;
        case 0xE6C1:
            func_E6C1(); break;
        case 0xE6C2:
            func_E6C2(); break;
        case 0xE6DA:
            func_E6DA(); break;
        case 0xE6E6:
            func_E6E6(); break;
        case 0xE7A1:
            func_E7A1(); break;
        case 0xE83E:
            func_E83E(); break;
        case 0xE87D:
            func_E87D(); break;
        case 0xE900:
            func_E900(); break;
        case 0xE90F:
            func_E90F(); break;
        case 0xE92D:
            func_E92D(); break;
        case 0xE97B:
            func_E97B(); break;
        case 0xE9BA:
            func_E9BA(); break;
        case 0xE9DE:
            func_E9DE(); break;
        case 0xE9E0:
            func_E9E0(); break;
        case 0xE9FC:
            func_E9FC(); break;
        case 0xEA33:
            func_EA33(); break;
        case 0xEA3B:
            func_EA3B(); break;
        case 0xEA41:
            func_EA41(); break;
        case 0xEA5B:
            func_EA5B(); break;
        case 0xEA6C:
            func_EA6C(); break;
        case 0xEAE9:
            func_EAE9(); break;
        case 0xEB09:
            func_EB09(); break;
        case 0xEB42:
            func_EB42(); break;
        case 0xEB68:
            func_EB68(); break;
        case 0xEB77:
            func_EB77(); break;
        case 0xEB7B:
            func_EB7B(); break;
        case 0xEB81:
            func_EB81(); break;
        case 0xEBB5:
            func_EBB5(); break;
        case 0xEBB9:
            func_EBB9(); break;
        case 0xEBBB:
            func_EBBB(); break;
        case 0xEBC0:
            func_EBC0(); break;
        case 0xEE12:
            func_EE12(); break;
        case 0xEE2D:
            func_EE2D(); break;
        case 0xEE57:
            func_EE57(); break;
        case 0xEF26:
            func_EF26(); break;
        case 0xEF2F:
            func_EF2F(); break;
        case 0xEF5C:
            func_EF5C(); break;
        case 0xEF65:
            func_EF65(); break;
        case 0xF04C:
            func_F04C(); break;
        case 0xF055:
            func_F055(); break;
        case 0xF091:
            func_F091(); break;
        case 0xF0A4:
            func_F0A4(); break;
        case 0xF0AF:
            func_F0AF(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xF126:
            func_F126(); break;
        case 0xF12E:
            func_F12E(); break;
        case 0xF132:
            func_F132(); break;
        case 0xF13B:
            func_F13B(); break;
        case 0xF15F:
            func_F15F(); break;
        case 0xF18B:
            func_F18B(); break;
        case 0xF19B:
            func_F19B(); break;
        case 0xF1B3:
            func_F1B3(); break;
        case 0xF1BC:
            func_F1BC(); break;
        case 0xF1CE:
            func_F1CE(); break;
        case 0xF1E3:
            func_F1E3(); break;
        case 0xF1E4:
            func_F1E4(); break;
        case 0xF1FD:
            func_F1FD(); break;
        case 0xF20C:
            func_F20C(); break;
        case 0xF244:
            func_F244(); break;
        case 0xF248:
            func_F248(); break;
        case 0xF25E:
            func_F25E(); break;
        case 0xF260:
            func_F260(); break;
        case 0xF281:
            func_F281(); break;
        case 0xF283:
            func_F283(); break;
        case 0xF28B:
            func_F28B(); break;
        case 0xF28F:
            func_F28F(); break;
        case 0xF290:
            func_F290(); break;
        case 0xF291:
            func_F291(); break;
        case 0xF2AD:
            func_F2AD(); break;
        case 0xF2B1:
            func_F2B1(); break;
        case 0xF2F7:
            func_F2F7(); break;
        case 0xF310:
            func_F310(); break;
        case 0xF596:
            func_F596(); break;
        case 0xF5C3:
            func_F5C3(); break;
        case 0xF5DA:
            func_F5DA(); break;
        case 0xF605:
            func_F605(); break;
        case 0xF614:
            func_F614(); break;
        case 0xF650:
            func_F650(); break;
        case 0xF67B:
            func_F67B(); break;
        case 0xF68A:
            func_F68A(); break;
        case 0xF6AC:
            func_F6AC(); break;
        case 0xF6BF:
            func_F6BF(); break;
        case 0xF6C5:
            func_F6C5(); break;
        case 0xF6CD:
            func_F6CD(); break;
        case 0xF6E9:
            func_F6E9(); break;
        case 0xF6FE:
            func_F6FE(); break;
        case 0xF71C:
            func_F71C(); break;
        case 0xF7A2:
            func_F7A2(); break;
        case 0xF7C7:
            func_F7C7(); break;
        case 0xF7E5:
            func_F7E5(); break;
        case 0xF7F2:
            func_F7F2(); break;
        case 0xF81A:
            func_F81A(); break;
        case 0xF8C1:
            func_F8C1(); break;
        case 0xF8D8:
            func_F8D8(); break;
        case 0xF8EC:
            func_F8EC(); break;
        case 0xF914:
            func_F914(); break;
        case 0xF929:
            func_F929(); break;
        case 0xF954:
            func_F954(); break;
        case 0xF972:
            func_F972(); break;
        case 0xF975:
            func_F975(); break;
        case 0xF97D:
            func_F97D(); break;
        case 0xF9B9:
            func_F9B9(); break;
        case 0xF9D8:
            func_F9D8(); break;
        case 0xF9F6:
            func_F9F6(); break;
        case 0xF9FE:
            func_F9FE(); break;
        case 0xFA43:
            func_FA43(); break;
        case 0xFA49:
            func_FA49(); break;
        case 0xFA51:
            func_FA51(); break;
        case 0xFA69:
            func_FA69(); break;
        case 0xFA7A:
            func_FA7A(); break;
        case 0xFAD3:
            func_FAD3(); break;
        case 0xFAF6:
            func_FAF6(); break;
        case 0xFC6E:
            func_FC6E(); break;
        case 0xFC7B:
            func_FC7B(); break;
        case 0xFCB8:
            func_FCB8(); break;
        case 0xFCFA:
            func_FCFA(); break;
        case 0xFD0D:
            func_FD0D(); break;
        case 0xFD26:
            func_FD26(); break;
        case 0xFD44:
            func_FD44(); break;
        case 0xFD8C:
            func_FD8C(); break;
        case 0xFE1B:
            func_FE1B(); break;
        case 0xFE20:
            func_FE20(); break;
        case 0xFE2E:
            func_FE2E(); break;
        case 0xFE3A:
            func_FE3A(); break;
        case 0xFE40:
            func_FE40(); break;
        case 0xFE42:
            func_FE42(); break;
        case 0xFE51:
            func_FE51(); break;
        case 0xFEC3:
            func_FEC3(); break;
        case 0xFEE2:
            func_FEE2(); break;
        case 0xFEED:
            func_FEED(); break;
        case 0xA011:
            func_A011_b1(); break;
        case 0xA02C:
            func_A02C_b1(); break;
        case 0xA039:
            switch (g_current_bank) {
                case 1: func_A039_b1(); break;
                case 3: func_A039_b3(); break;
                case 6: func_A039_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA04B:
            func_A04B_b1(); break;
        case 0xA05C:
            func_A05C_b1(); break;
        case 0xA082:
            switch (g_current_bank) {
                case 1: func_A082_b1(); break;
                case 2: func_A082_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA095:
            func_A095_b1(); break;
        case 0xA097:
            func_A097_b1(); break;
        case 0xA0A0:
            func_A0A0_b1(); break;
        case 0xA0AA:
            func_A0AA_b1(); break;
        case 0xA0AD:
            func_A0AD_b1(); break;
        case 0xA0B7:
            func_A0B7_b1(); break;
        case 0xA0B9:
            func_A0B9_b1(); break;
        case 0xA0D1:
            func_A0D1_b1(); break;
        case 0xA0DC:
            func_A0DC_b1(); break;
        case 0xA0FB:
            func_A0FB_b1(); break;
        case 0xA108:
            func_A108_b1(); break;
        case 0xA122:
            func_A122_b1(); break;
        case 0xA124:
            func_A124_b1(); break;
        case 0xA127:
            switch (g_current_bank) {
                case 1: func_A127_b1(); break;
                case 3: func_A127_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA129:
            func_A129_b1(); break;
        case 0xA139:
            switch (g_current_bank) {
                case 1: func_A139_b1(); break;
                case 2: func_A139_b2(); break;
                case 14: func_A139_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA16E:
            switch (g_current_bank) {
                case 1: func_A16E_b1(); break;
                case 2: func_A16E_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA18B:
            switch (g_current_bank) {
                case 1: func_A18B_b1(); break;
                case 7: func_A18B_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1B5:
            func_A1B5_b1(); break;
        case 0xA1F7:
            switch (g_current_bank) {
                case 15: func_E1F7(); break;
                case 1: func_A1F7_b1(); break;
                case 7: func_A1F7_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA213:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA217:
            func_A217_b1(); break;
        case 0xA22D:
            func_A22D_b1(); break;
        case 0xA23D:
            switch (g_current_bank) {
                case 15: func_E23D(); break;
                case 1: func_A23D_b1(); break;
                case 14: func_A23D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA266:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA283:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA290:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA29D:
            func_A29D_b1(); break;
        case 0xA2A9:
            func_A2A9_b1(); break;
        case 0xA2DE:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA2E9:
            func_A2E9_b1(); break;
        case 0xA2F6:
            func_A2F6_b1(); break;
        case 0xA30C:
            switch (g_current_bank) {
                case 1: func_A30C_b1(); break;
                case 2: func_A30C_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA320:
            func_A320_b1(); break;
        case 0xA341:
            func_A341_b1(); break;
        case 0xA347:
            func_A347_b1(); break;
        case 0xA34B:
            func_A34B_b1(); break;
        case 0xA34C:
            func_A34C_b1(); break;
        case 0xA35A:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA368:
            func_A368_b1(); break;
        case 0xA391:
            func_A391_b1(); break;
        case 0xA397:
            func_A397_b1(); break;
        case 0xA3A5:
            switch (g_current_bank) {
                case 2: func_A3A5_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3A8:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA3B7:
            switch (g_current_bank) {
                case 1: func_A3B7_b1(); break;
                case 3: func_A3B7_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3C5:
            func_A3C5_b1(); break;
        case 0xA3CF:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA3DE:
            func_A3DE_b1(); break;
        case 0xA3EC:
            func_A3EC_b1(); break;
        case 0xA3F2:
            func_A3F2_b1(); break;
        case 0xA40F:
            func_A40F_b1(); break;
        case 0xA41D:
            func_A41D_b1(); break;
        case 0xA427:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA431:
            func_A431_b1(); break;
        case 0xA43B:
            switch (g_current_bank) {
                case 1: func_A43B_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA43F:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA44C:
            func_A44C_b1(); break;
        case 0xA452:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA45E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA468:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA46C:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA477:
            switch (g_current_bank) {
                case 15: func_E477(); break;
                case 2: func_A477_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA481:
            switch (g_current_bank) {
                case 2: func_A481_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA483:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA494:
            func_A494_b1(); break;
        case 0xA4A0:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA4A8:
            func_A4A8_b1(); break;
        case 0xA4B8:
            func_A4B8_b1(); break;
        case 0xA4E0:
            func_A4E0_b1(); break;
        case 0xA4EB:
            func_A4EB_b1(); break;
        case 0xA4F3:
            func_A4F3_b1(); break;
        case 0xA50A:
            func_A50A_b1(); break;
        case 0xA533:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA540:
            func_A540_b1(); break;
        case 0xA599:
            switch (g_current_bank) {
                case 1: func_A599_b1(); break;
                case 2: func_A599_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5A5:
            func_A5A5_b1(); break;
        case 0xA5DD:
            func_A5DD_b1(); break;
        case 0xA5E2:
            func_A5E2_b1(); break;
        case 0xA5F0:
            func_A5F0_b1(); break;
        case 0xA603:
            func_A603_b1(); break;
        case 0xA60C:
            func_A60C_b1(); break;
        case 0xA62D:
            func_A62D_b1(); break;
        case 0xA64D:
            func_A64D_b1(); break;
        case 0xA66D:
            func_A66D_b1(); break;
        case 0xA695:
            switch (g_current_bank) {
                case 15: func_E695(); break;
                case 1: func_A695_b1(); break;
                case 3: func_A695_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6C7:
            func_A6C7_b1(); break;
        case 0xA6CF:
            func_A6CF_b1(); break;
        case 0xA6E6:
            func_A6E6_b1(); break;
        case 0xA6E7:
            func_A6E7_b1(); break;
        case 0xA6F6:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA76F:
            func_A76F_b1(); break;
        case 0xA797:
            func_A797_b1(); break;
        case 0xA7C4:
            func_A7C4_b1(); break;
        case 0xA7CF:
            switch (g_current_bank) {
                case 1: func_A7CF_b1(); break;
                case 2: func_A7CF_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7F0:
            func_A7F0_b1(); break;
        case 0xA804:
            func_A804_b1(); break;
        case 0xA816:
            func_A816_b1(); break;
        case 0xA82B:
            func_A82B_b1(); break;
        case 0xA839:
            func_A839_b1(); break;
        case 0xA843:
            switch (g_current_bank) {
                case 1: func_A843_b1(); break;
                case 9: func_A843_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA84D:
            switch (g_current_bank) {
                case 1: func_A84D_b1(); break;
                case 9: func_A84D_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA84F:
            func_A84F_b1(); break;
        case 0xA85D:
            func_A85D_b1(); break;
        case 0xA869:
            switch (g_current_bank) {
                case 1: func_A869_b1(); break;
                case 9: func_A869_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA885:
            func_A885_b1(); break;
        case 0xA892:
            func_A892_b1(); break;
        case 0xA8A9:
            switch (g_current_bank) {
                case 15: func_E8A9(); break;
                case 1: func_A8A9_b1(); break;
                case 2: func_A8A9_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8B1:
            switch (g_current_bank) {
                case 15: func_E8B1(); break;
                case 1: func_A8B1_b1(); break;
                case 2: func_A8B1_b2(); break;
                case 4: func_A8B1_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8B8:
            switch (g_current_bank) {
                case 1: func_A8B8_b1(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8C8:
            func_A8C8_b1(); break;
        case 0xA8D4:
            func_A8D4_b1(); break;
        case 0xA8D6:
            func_A8D6_b1(); break;
        case 0xA8E9:
            func_A8E9_b1(); break;
        case 0xA906:
            func_A906_b1(); break;
        case 0xA924:
            switch (g_current_bank) {
                case 1: func_A924_b1(); break;
                case 3: func_A924_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA941:
            func_A941_b1(); break;
        case 0xA943:
            func_A943_b1(); break;
        case 0xA963:
            func_A963_b1(); break;
        case 0xA965:
            func_A965_b1(); break;
        case 0xA975:
            func_A975_b1(); break;
        case 0xA009:
            switch (g_current_bank) {
                case 15: func_E009(); break;
                case 2: func_A009_b2(); break;
                case 3: func_A009_b3(); break;
                case 4: func_A009_b4(); break;
                case 5: func_A009_b5(); break;
                case 6: func_A009_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA01E:
            switch (g_current_bank) {
                case 2: func_A01E_b2(); break;
                case 4: func_A01E_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA04C:
            switch (g_current_bank) {
                case 2: func_A04C_b2(); break;
                case 6: func_A04C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA069:
            func_A069_b2(); break;
        case 0xA06E:
            switch (g_current_bank) {
                case 2: func_A06E_b2(); break;
                case 4: func_A06E_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA084:
            func_A084_b2(); break;
        case 0xA091:
            switch (g_current_bank) {
                case 2: func_A091_b2(); break;
                case 14: func_A091_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA09A:
            func_A09A_b2(); break;
        case 0xA0A4:
            func_A0A4_b2(); break;
        case 0xA0A6:
            switch (g_current_bank) {
                case 2: func_A0A6_b2(); break;
                case 7: func_A0A6_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0A7:
            func_A0A7_b2(); break;
        case 0xA0AE:
            func_A0AE_b2(); break;
        case 0xA0C5:
            switch (g_current_bank) {
                case 2: func_A0C5_b2(); break;
                case 3: func_A0C5_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0C8:
            func_A0C8_b2(); break;
        case 0xA0DD:
            func_A0DD_b2(); break;
        case 0xA0F4:
            switch (g_current_bank) {
                case 2: func_A0F4_b2(); break;
                case 3: func_A0F4_b3(); break;
                case 6: func_A0F4_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0F5:
            switch (g_current_bank) {
                case 2: func_A0F5_b2(); break;
                case 4: func_A0F5_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0F6:
            func_A0F6_b2(); break;
        case 0xA0F9:
            func_A0F9_b2(); break;
        case 0xA0FF:
            func_A0FF_b2(); break;
        case 0xA113:
            func_A113_b2(); break;
        case 0xA11E:
            func_A11E_b2(); break;
        case 0xA12B:
            func_A12B_b2(); break;
        case 0xA161:
            func_A161_b2(); break;
        case 0xA182:
            func_A182_b2(); break;
        case 0xA194:
            switch (g_current_bank) {
                case 2: func_A194_b2(); break;
                case 4: func_A194_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1A1:
            func_A1A1_b2(); break;
        case 0xA1A3:
            func_A1A3_b2(); break;
        case 0xA1B6:
            func_A1B6_b2(); break;
        case 0xA1CA:
            switch (g_current_bank) {
                case 2: func_A1CA_b2(); break;
                case 7: func_A1CA_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1D7:
            func_A1D7_b2(); break;
        case 0xA1E3:
            func_A1E3_b2(); break;
        case 0xA1F8:
            switch (g_current_bank) {
                case 2: func_A1F8_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA21B:
            func_A21B_b2(); break;
        case 0xA23C:
            func_A23C_b2(); break;
        case 0xA24D:
            func_A24D_b2(); break;
        case 0xA262:
            func_A262_b2(); break;
        case 0xA26B:
            switch (g_current_bank) {
                case 2: func_A26B_b2(); break;
                case 14: func_A26B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA28D:
            switch (g_current_bank) {
                case 2: func_A28D_b2(); break;
                case 3: func_A28D_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2B1:
            func_A2B1_b2(); break;
        case 0xA2B6:
            func_A2B6_b2(); break;
        case 0xA2C5:
            func_A2C5_b2(); break;
        case 0xA2D9:
            func_A2D9_b2(); break;
        case 0xA2DC:
            func_A2DC_b2(); break;
        case 0xA2DD:
            func_A2DD_b2(); break;
        case 0xA2E0:
            func_A2E0_b2(); break;
        case 0xA2E5:
            func_A2E5_b2(); break;
        case 0xA2EB:
            func_A2EB_b2(); break;
        case 0xA2FC:
            func_A2FC_b2(); break;
        case 0xA306:
            func_A306_b2(); break;
        case 0xA315:
            func_A315_b2(); break;
        case 0xA332:
            switch (g_current_bank) {
                case 2: func_A332_b2(); break;
                case 3: func_A332_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA343:
            func_A343_b2(); break;
        case 0xA349:
            func_A349_b2(); break;
        case 0xA357:
            func_A357_b2(); break;
        case 0xA376:
            func_A376_b2(); break;
        case 0xA382:
            switch (g_current_bank) {
                case 2: func_A382_b2(); break;
                case 4: func_A382_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA386:
            func_A386_b2(); break;
        case 0xA392:
            func_A392_b2(); break;
        case 0xA3D8:
            func_A3D8_b2(); break;
        case 0xA3FA:
            switch (g_current_bank) {
                case 2: func_A3FA_b2(); break;
                case 14: func_A3FA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA40E:
            func_A40E_b2(); break;
        case 0xA414:
            func_A414_b2(); break;
        case 0xA43D:
            func_A43D_b2(); break;
        case 0xA45D:
            func_A45D_b2(); break;
        case 0xA464:
            func_A464_b2(); break;
        case 0xA474:
            func_A474_b2(); break;
        case 0xA484:
            switch (g_current_bank) {
                case 2: func_A484_b2(); break;
                case 4: func_A484_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA499:
            func_A499_b2(); break;
        case 0xA49E:
            func_A49E_b2(); break;
        case 0xA4B9:
            switch (g_current_bank) {
                case 2: func_A4B9_b2(); break;
                case 14: func_A4B9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4D6:
            func_A4D6_b2(); break;
        case 0xA4E2:
            func_A4E2_b2(); break;
        case 0xA4EA:
            switch (g_current_bank) {
                case 2: func_A4EA_b2(); break;
                case 4: func_A4EA_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA503:
            switch (g_current_bank) {
                case 15: func_E503(); break;
                case 2: func_A503_b2(); break;
                case 14: func_A503_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA504:
            func_A504_b2(); break;
        case 0xA515:
            switch (g_current_bank) {
                case 2: func_A515_b2(); break;
                case 14: func_A515_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA522:
            func_A522_b2(); break;
        case 0xA529:
            func_A529_b2(); break;
        case 0xA534:
            func_A534_b2(); break;
        case 0xA539:
            switch (g_current_bank) {
                case 15: func_E539(); break;
                case 2: func_A539_b2(); break;
                case 3: func_A539_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA53C:
            switch (g_current_bank) {
                case 2: func_A53C_b2(); break;
                case 4: func_A53C_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA546:
            func_A546_b2(); break;
        case 0xA55D:
            switch (g_current_bank) {
                case 2: func_A55D_b2(); break;
                case 14: func_A55D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA55E:
            func_A55E_b2(); break;
        case 0xA56B:
            func_A56B_b2(); break;
        case 0xA57C:
            func_A57C_b2(); break;
        case 0xA589:
            switch (g_current_bank) {
                case 2: func_A589_b2(); break;
                case 3: func_A589_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA598:
            switch (g_current_bank) {
                case 2: func_A598_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5A6:
            switch (g_current_bank) {
                case 2: func_A5A6_b2(); break;
                case 3: func_A5A6_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5AB:
            func_A5AB_b2(); break;
        case 0xA5C1:
            switch (g_current_bank) {
                case 15: func_E5C1(); break;
                case 2: func_A5C1_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5D3:
            func_A5D3_b2(); break;
        case 0xA5DC:
            func_A5DC_b2(); break;
        case 0xA5E3:
            switch (g_current_bank) {
                case 2: func_A5E3_b2(); break;
                case 4: func_A5E3_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5E7:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA62F:
            func_A62F_b2(); break;
        case 0xA633:
            switch (g_current_bank) {
                case 2: func_A633_b2(); break;
                case 3: func_A633_b3(); break;
                case 4: func_A633_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA63C:
            func_A63C_b2(); break;
        case 0xA660:
            func_A660_b2(); break;
        case 0xA66E:
            func_A66E_b2(); break;
        case 0xA680:
            func_A680_b2(); break;
        case 0xA682:
            func_A682_b2(); break;
        case 0xA684:
            func_A684_b2(); break;
        case 0xA6B1:
            func_A6B1_b2(); break;
        case 0xA6BA:
            func_A6BA_b2(); break;
        case 0xA6C2:
            func_A6C2_b2(); break;
        case 0xA6CE:
            func_A6CE_b2(); break;
        case 0xA6E1:
            switch (g_current_bank) {
                case 15: func_E6E1(); break;
                case 2: func_A6E1_b2(); break;
                case 3: func_A6E1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6E2:
            func_A6E2_b2(); break;
        case 0xA6FC:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA724:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA732:
            func_A732_b2(); break;
        case 0xA73B:
            func_A73B_b2(); break;
        case 0xA73C:
            func_A73C_b2(); break;
        case 0xA748:
            func_A748_b2(); break;
        case 0xA75B:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA77D:
            func_A77D_b2(); break;
        case 0xA77E:
            func_A77E_b2(); break;
        case 0xA78B:
            func_A78B_b2(); break;
        case 0xA798:
            func_A798_b2(); break;
        case 0xA79B:
            switch (g_current_bank) {
                case 2: func_A79B_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7A3:
            func_A7A3_b2(); break;
        case 0xA7B1:
            func_A7B1_b2(); break;
        case 0xA7BB:
            switch (g_current_bank) {
                case 2: func_A7BB_b2(); break;
                case 3: func_A7BB_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7C2:
            func_A7C2_b2(); break;
        case 0xA7CA:
            switch (g_current_bank) {
                case 2: func_A7CA_b2(); break;
                case 14: func_A7CA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7E1:
            switch (g_current_bank) {
                case 15: func_E7E1(); break;
                case 2: func_A7E1_b2(); break;
                case 3: func_A7E1_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7E3:
            func_A7E3_b2(); break;
        case 0xA7F1:
            switch (g_current_bank) {
                case 15: func_E7F1(); break;
                case 2: func_A7F1_b2(); break;
                case 3: func_A7F1_b3(); break;
                case 7: func_A7F1_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7FE:
            func_A7FE_b2(); break;
        case 0xA801:
            func_A801_b2(); break;
        case 0xA809:
            func_A809_b2(); break;
        case 0xA81E:
            switch (g_current_bank) {
                case 2: func_A81E_b2(); break;
                case 3: func_A81E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA81F:
            switch (g_current_bank) {
                case 2: func_A81F_b2(); break;
                case 3: func_A81F_b3(); break;
                case 4: func_A81F_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA84B:
            func_A84B_b2(); break;
        case 0xA858:
            func_A858_b2(); break;
        case 0xA865:
            func_A865_b2(); break;
        case 0xA886:
            func_A886_b2(); break;
        case 0xA887:
            switch (g_current_bank) {
                case 2: func_A887_b2(); break;
                case 4: func_A887_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8AE:
            func_A8AE_b2(); break;
        case 0xA8BD:
            func_A8BD_b2(); break;
        case 0xA8DC:
            func_A8DC_b2(); break;
        case 0xA8F5:
            func_A8F5_b2(); break;
        case 0xA8F6:
            func_A8F6_b2(); break;
        case 0xA91C:
            func_A91C_b2(); break;
        case 0xA92B:
            func_A92B_b2(); break;
        case 0x8605:
            func_8605_b3(); break;
        case 0xA00C:
            switch (g_current_bank) {
                case 3: func_A00C_b3(); break;
                case 7: func_A00C_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA012:
            switch (g_current_bank) {
                case 15: func_E012(); break;
                case 3: func_A012_b3(); break;
                case 7: func_A012_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA04D:
            switch (g_current_bank) {
                case 3: func_A04D_b3(); break;
                case 6: func_A04D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA067:
            func_A067_b3(); break;
        case 0xA068:
            switch (g_current_bank) {
                case 15: func_E068(); break;
                case 3: func_A068_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA079:
            func_A079_b3(); break;
        case 0xA08B:
            func_A08B_b3(); break;
        case 0xA0B1:
            func_A0B1_b3(); break;
        case 0xA0D9:
            func_A0D9_b3(); break;
        case 0xA0DE:
            switch (g_current_bank) {
                case 15: func_E0DE(); break;
                case 3: func_A0DE_b3(); break;
                case 7: func_A0DE_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA106:
            func_A106_b3(); break;
        case 0xA128:
            func_A128_b3(); break;
        case 0xA150:
            switch (g_current_bank) {
                case 3: func_A150_b3(); break;
                case 6: func_A150_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA165:
            func_A165_b3(); break;
        case 0xA170:
            func_A170_b3(); break;
        case 0xA176:
            switch (g_current_bank) {
                case 3: func_A176_b3(); break;
                case 4: func_A176_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA188:
            switch (g_current_bank) {
                case 3: func_A188_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA198:
            func_A198_b3(); break;
        case 0xA1A0:
            func_A1A0_b3(); break;
        case 0xA1B1:
            switch (g_current_bank) {
                case 3: func_A1B1_b3(); break;
                case 4: func_A1B1_b4(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA1BA:
            func_A1BA_b3(); break;
        case 0xA1CE:
            func_A1CE_b3(); break;
        case 0xA1EF:
            func_A1EF_b3(); break;
        case 0xA204:
            func_A204_b3(); break;
        case 0xA20C:
            switch (g_current_bank) {
                case 3: func_A20C_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA228:
            switch (g_current_bank) {
                case 15: func_E228(); break;
                case 3: func_A228_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA245:
            func_A245_b3(); break;
        case 0xA272:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA28F:
            switch (g_current_bank) {
                case 15: func_E28F(); break;
                case 3: func_A28F_b3(); break;
                case 14: func_A28F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA298:
            switch (g_current_bank) {
                case 3: func_A298_b3(); break;
                case 6: func_A298_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2A8:
            func_A2A8_b3(); break;
        case 0xA2C0:
            func_A2C0_b3(); break;
        case 0xA2D2:
            func_A2D2_b3(); break;
        case 0xA2D3:
            func_A2D3_b3(); break;
        case 0xA2DA:
            switch (g_current_bank) {
                case 3: func_A2DA_b3(); break;
                case 14: func_A2DA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2E1:
            func_A2E1_b3(); break;
        case 0xA2E2:
            func_A2E2_b3(); break;
        case 0xA2E7:
            switch (g_current_bank) {
                case 3: func_A2E7_b3(); break;
                case 14: func_A2E7_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2EE:
            func_A2EE_b3(); break;
        case 0xA2F9:
            func_A2F9_b3(); break;
        case 0xA302:
            func_A302_b3(); break;
        case 0xA323:
            func_A323_b3(); break;
        case 0xA330:
            func_A330_b3(); break;
        case 0xA339:
            func_A339_b3(); break;
        case 0xA355:
            func_A355_b3(); break;
        case 0xA36C:
            func_A36C_b3(); break;
        case 0xA375:
            func_A375_b3(); break;
        case 0xA383:
            func_A383_b3(); break;
        case 0xA38A:
            func_A38A_b3(); break;
        case 0xA3A4:
            func_A3A4_b3(); break;
        case 0xA3B2:
            func_A3B2_b3(); break;
        case 0xA3B9:
            func_A3B9_b3(); break;
        case 0xA3D2:
            func_A3D2_b3(); break;
        case 0xA3E3:
            func_A3E3_b3(); break;
        case 0xA3E8:
            func_A3E8_b3(); break;
        case 0xA3F6:
            func_A3F6_b3(); break;
        case 0xA3FC:
            switch (g_current_bank) {
                case 3: func_A3FC_b3(); break;
                case 6: func_A3FC_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA40D:
            func_A40D_b3(); break;
        case 0xA418:
            func_A418_b3(); break;
        case 0xA423:
            switch (g_current_bank) {
                case 3: func_A423_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA425:
            switch (g_current_bank) {
                case 15: func_E425(); break;
                case 3: func_A425_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA46F:
            func_A46F_b3(); break;
        case 0xA482:
            func_A482_b3(); break;
        case 0xA48D:
            func_A48D_b3(); break;
        case 0xA490:
            switch (g_current_bank) {
                case 3: func_A490_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA49C:
            func_A49C_b3(); break;
        case 0xA4B2:
            func_A4B2_b3(); break;
        case 0xA4DC:
            func_A4DC_b3(); break;
        case 0xA4FD:
            func_A4FD_b3(); break;
        case 0xA50F:
            func_A50F_b3(); break;
        case 0xA51B:
            switch (g_current_bank) {
                case 3: func_A51B_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA525:
            func_A525_b3(); break;
        case 0xA535:
            func_A535_b3(); break;
        case 0xA54B:
            func_A54B_b3(); break;
        case 0xA555:
            func_A555_b3(); break;
        case 0xA559:
            switch (g_current_bank) {
                case 3: func_A559_b3(); break;
                case 14: func_A559_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA564:
            func_A564_b3(); break;
        case 0xA56E:
            func_A56E_b3(); break;
        case 0xA577:
            func_A577_b3(); break;
        case 0xA58B:
            func_A58B_b3(); break;
        case 0xA594:
            func_A594_b3(); break;
        case 0xA5A8:
            func_A5A8_b3(); break;
        case 0xA5B8:
            func_A5B8_b3(); break;
        case 0xA5C2:
            func_A5C2_b3(); break;
        case 0xA5E9:
            func_A5E9_b3(); break;
        case 0xA604:
            func_A604_b3(); break;
        case 0xA618:
            func_A618_b3(); break;
        case 0xA624:
            func_A624_b3(); break;
        case 0xA63F:
            func_A63F_b3(); break;
        case 0xA642:
            switch (g_current_bank) {
                case 3: func_A642_b3(); break;
                case 6: func_A642_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA652:
            func_A652_b3(); break;
        case 0xA653:
            func_A653_b3(); break;
        case 0xA663:
            func_A663_b3(); break;
        case 0xA67B:
            func_A67B_b3(); break;
        case 0xA688:
            func_A688_b3(); break;
        case 0xA68B:
            switch (g_current_bank) {
                case 3: func_A68B_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6A1:
            func_A6A1_b3(); break;
        case 0xA6B2:
            switch (g_current_bank) {
                case 3: func_A6B2_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA6BE:
            func_A6BE_b3(); break;
        case 0xA6EA:
            func_A6EA_b3(); break;
        case 0xA6EF:
            switch (g_current_bank) {
                case 15: func_E6EF(); break;
                case 3: func_A6EF_b3(); break;
                case 6: func_A6EF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA714:
            func_A714_b3(); break;
        case 0xA715:
            func_A715_b3(); break;
        case 0xA722:
            func_A722_b3(); break;
        case 0xA723:
            func_A723_b3(); break;
        case 0xA72F:
            func_A72F_b3(); break;
        case 0xA738:
            func_A738_b3(); break;
        case 0xA739:
            func_A739_b3(); break;
        case 0xA743:
            func_A743_b3(); break;
        case 0xA751:
            func_A751_b3(); break;
        case 0xA756:
            func_A756_b3(); break;
        case 0xA795:
            func_A795_b3(); break;
        case 0xA7B4:
            func_A7B4_b3(); break;
        case 0xA7C6:
            func_A7C6_b3(); break;
        case 0xA7C7:
            switch (g_current_bank) {
                case 15: func_E7C7(); break;
                case 3: func_A7C7_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7CE:
            func_A7CE_b3(); break;
        case 0xA7D6:
            func_A7D6_b3(); break;
        case 0xA7D7:
            func_A7D7_b3(); break;
        case 0xA7ED:
            func_A7ED_b3(); break;
        case 0xA7F8:
            func_A7F8_b3(); break;
        case 0xA800:
            func_A800_b3(); break;
        case 0xA807:
            func_A807_b3(); break;
        case 0xA81C:
            switch (g_current_bank) {
                case 3: func_A81C_b3(); break;
                case 9: func_A81C_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA835:
            func_A835_b3(); break;
        case 0xA837:
            func_A837_b3(); break;
        case 0xA83F:
            func_A83F_b3(); break;
        case 0xA84C:
            switch (g_current_bank) {
                case 3: func_A84C_b3(); break;
                case 6: func_A84C_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA854:
            func_A854_b3(); break;
        case 0xA863:
            func_A863_b3(); break;
        case 0xA874:
            switch (g_current_bank) {
                case 3: func_A874_b3(); break;
                case 6: func_A874_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA87F:
            func_A87F_b3(); break;
        case 0xA880:
            switch (g_current_bank) {
                case 15: func_E880(); break;
                case 3: func_A880_b3(); break;
                case 7: func_A880_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8D0:
            func_A8D0_b3(); break;
        case 0xA8D3:
            switch (g_current_bank) {
                case 3: func_A8D3_b3(); break;
                case 7: func_A8D3_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8D7:
            switch (g_current_bank) {
                case 3: func_A8D7_b3(); break;
                case 2: func_A8D7_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA8FC:
            func_A8FC_b3(); break;
        case 0xA907:
            func_A907_b3(); break;
        case 0xA927:
            func_A927_b3(); break;
        case 0xA92E:
            func_A92E_b3(); break;
        case 0xA969:
            func_A969_b3(); break;
        case 0xA972:
            switch (g_current_bank) {
                case 3: func_A972_b3(); break;
                case 7: func_A972_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA98F:
            func_A98F_b3(); break;
        case 0xA99C:
            func_A99C_b3(); break;
        case 0x8038:
            nes_log_dispatch_miss(addr); return 0;
        case 0x8048:
            nes_log_dispatch_miss(addr); return 0;
        case 0x8053:
            func_8053_b5(); break;
        case 0x8061:
            switch (g_current_bank) {
                case 5: func_8061_b5(); break;
                case 7: func_8061_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80A6:
            switch (g_current_bank) {
                case 11: func_80A6_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80F1:
            func_80F1_b5(); break;
        case 0x80F9:
            switch (g_current_bank) {
                case 5: func_80F9_b5(); break;
                case 14: func_80F9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8121:
            func_8121_b5(); break;
        case 0x8131:
            func_8131_b5(); break;
        case 0x814E:
            func_814E_b5(); break;
        case 0x817B:
            func_817B_b5(); break;
        case 0x8190:
            func_8190_b5(); break;
        case 0x81B0:
            func_81B0_b5(); break;
        case 0x81D6:
            func_81D6_b5(); break;
        case 0x81E6:
            func_81E6_b5(); break;
        case 0x8255:
            func_8255_b5(); break;
        case 0x8269:
            func_8269_b5(); break;
        case 0x827E:
            func_827E_b5(); break;
        case 0x8289:
            switch (g_current_bank) {
                case 5: func_8289_b5(); break;
                case 11: func_8289_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8291:
            func_8291_b5(); break;
        case 0x82D2:
            func_82D2_b5(); break;
        case 0x82EA:
            func_82EA_b5(); break;
        case 0x82F4:
            func_82F4_b5(); break;
        case 0x8301:
            func_8301_b5(); break;
        case 0x8344:
            func_8344_b5(); break;
        case 0x8352:
            func_8352_b5(); break;
        case 0x835C:
            func_835C_b5(); break;
        case 0x8372:
            func_8372_b5(); break;
        case 0x8375:
            func_8375_b5(); break;
        case 0x83CC:
            switch (g_current_bank) {
                case 15: func_C3CC(); break;
                case 5: func_83CC_b5(); break;
                case 11: func_83CC_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83F6:
            func_83F6_b5(); break;
        case 0x8422:
            switch (g_current_bank) {
                case 5: func_8422_b5(); break;
                case 6: func_8422_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8466:
            switch (g_current_bank) {
                case 5: func_8466_b5(); break;
                case 6: func_8466_b6(); break;
                case 11: func_8466_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8476:
            func_8476_b5(); break;
        case 0x848F:
            func_848F_b5(); break;
        case 0x84A3:
            func_84A3_b5(); break;
        case 0x84EC:
            func_84EC_b5(); break;
        case 0x8525:
            switch (g_current_bank) {
                case 5: func_8525_b5(); break;
                case 11: func_8525_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8543:
            func_8543_b5(); break;
        case 0x854B:
            switch (g_current_bank) {
                case 15: func_C54B(); break;
                case 5: func_854B_b5(); break;
                case 11: func_854B_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8554:
            func_8554_b5(); break;
        case 0x8565:
            func_8565_b5(); break;
        case 0x8590:
            func_8590_b5(); break;
        case 0x8591:
            switch (g_current_bank) {
                case 5: func_8591_b5(); break;
                case 11: func_8591_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8602:
            func_8602_b5(); break;
        case 0x8654:
            func_8654_b5(); break;
        case 0x803F:
            func_803F_b6(); break;
        case 0x804A:
            func_804A_b6(); break;
        case 0x8084:
            switch (g_current_bank) {
                case 6: func_8084_b6(); break;
                case 8: func_8084_b8(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80D0:
            func_80D0_b6(); break;
        case 0x810C:
            func_810C_b6(); break;
        case 0x812C:
            func_812C_b6(); break;
        case 0x813C:
            func_813C_b6(); break;
        case 0x813F:
            func_813F_b6(); break;
        case 0x8166:
            func_8166_b6(); break;
        case 0x816C:
            func_816C_b6(); break;
        case 0x817F:
            func_817F_b6(); break;
        case 0x8193:
            func_8193_b6(); break;
        case 0x81D7:
            func_81D7_b6(); break;
        case 0x81FC:
            func_81FC_b6(); break;
        case 0x8213:
            func_8213_b6(); break;
        case 0x82C6:
            switch (g_current_bank) {
                case 6: func_82C6_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82C9:
            func_82C9_b6(); break;
        case 0x82D9:
            func_82D9_b6(); break;
        case 0x82F9:
            switch (g_current_bank) {
                case 6: func_82F9_b6(); break;
                case 9: func_82F9_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8335:
            func_8335_b6(); break;
        case 0x833B:
            func_833B_b6(); break;
        case 0x8362:
            func_8362_b6(); break;
        case 0x8367:
            func_8367_b6(); break;
        case 0x839F:
            func_839F_b6(); break;
        case 0x83AF:
            switch (g_current_bank) {
                case 6: func_83AF_b6(); break;
                case 11: func_83AF_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x83DB:
            func_83DB_b6(); break;
        case 0x8450:
            func_8450_b6(); break;
        case 0x8453:
            func_8453_b6(); break;
        case 0x8460:
            func_8460_b6(); break;
        case 0x849E:
            func_849E_b6(); break;
        case 0x84C0:
            func_84C0_b6(); break;
        case 0x84CE:
            func_84CE_b6(); break;
        case 0x8544:
            func_8544_b6(); break;
        case 0x8577:
            func_8577_b6(); break;
        case 0x8589:
            func_8589_b6(); break;
        case 0x858B:
            func_858B_b6(); break;
        case 0x85E5:
            func_85E5_b6(); break;
        case 0x85F2:
            func_85F2_b6(); break;
        case 0x85FF:
            func_85FF_b6(); break;
        case 0x8617:
            func_8617_b6(); break;
        case 0x8623:
            func_8623_b6(); break;
        case 0xA00F:
            switch (g_current_bank) {
                case 6: func_A00F_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA02D:
            func_A02D_b6(); break;
        case 0xA03B:
            func_A03B_b6(); break;
        case 0xA029:
            func_A029_b7(); break;
        case 0xA046:
            func_A046_b7(); break;
        case 0xA059:
            func_A059_b7(); break;
        case 0xA05A:
            func_A05A_b7(); break;
        case 0xA05E:
            func_A05E_b7(); break;
        case 0xA061:
            func_A061_b7(); break;
        case 0xA06C:
            func_A06C_b7(); break;
        case 0xA077:
            func_A077_b7(); break;
        case 0xA083:
            func_A083_b7(); break;
        case 0xA0A2:
            switch (g_current_bank) {
                case 7: func_A0A2_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0AF:
            func_A0AF_b7(); break;
        case 0xA0D4:
            func_A0D4_b7(); break;
        case 0xA0F3:
            func_A0F3_b7(); break;
        case 0xA13E:
            switch (g_current_bank) {
                case 7: func_A13E_b7(); break;
                case 14: func_A13E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA181:
            func_A181_b7(); break;
        case 0xA1E8:
            func_A1E8_b7(); break;
        case 0x80CC:
            func_80CC_b8(); break;
        case 0x8263:
            func_8263_b8(); break;
        case 0x82A9:
            func_82A9_b8(); break;
        case 0x801B:
            switch (g_current_bank) {
                case 9: func_801B_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80ED:
            switch (g_current_bank) {
                case 9: func_80ED_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x815D:
            switch (g_current_bank) {
                case 9: func_815D_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x81CA:
            func_81CA_b9(); break;
        case 0x8518:
            func_8518_b9(); break;
        case 0x853F:
            func_853F_b9(); break;
        case 0xA015:
            switch (g_current_bank) {
                case 15: func_E015(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA021:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA027:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA03F:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA054:
            switch (g_current_bank) {
                case 14: func_A054_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA057:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA099:
            switch (g_current_bank) {
                case 15: func_E099(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0A1:
            switch (g_current_bank) {
                case 15: func_E0A1(); break;
                case 14: func_A0A1_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA0C6:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA0CF:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA10E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA13D:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA1EA:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA1F5:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA201:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA25C:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA264:
            func_A264_b9(); break;
        case 0xA27B:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA27C:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA2A7:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA2C4:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA31E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA324:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA359:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA378:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA39A:
            func_A39A_b9(); break;
        case 0xA39D:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3AD:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA41E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA43E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA4AF:
            switch (g_current_bank) {
                case 15: func_E4AF(); break;
                case 14: func_A4AF_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4B5:
            func_A4B5_b9(); break;
        case 0xA4BB:
            switch (g_current_bank) {
                case 15: func_E4BB(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4CF:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA4D0:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA4DF:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA4F9:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA524:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA551:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA597:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA7F4:
            func_A7F4_b9(); break;
        case 0xA7FD:
            func_A7FD_b9(); break;
        case 0xA861:
            func_A861_b9(); break;
        case 0xA876:
            func_A876_b9(); break;
        case 0xA8A0:
            func_A8A0_b9(); break;
        case 0xA8B3:
            func_A8B3_b9(); break;
        case 0xA8C3:
            func_A8C3_b9(); break;
        case 0xA8EC:
            switch (g_current_bank) {
                case 9: func_A8EC_b9(); break;
                case 14: func_A8EC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA915:
            func_A915_b9(); break;
        case 0xA925:
            func_A925_b9(); break;
        case 0xA93E:
            func_A93E_b9(); break;
        case 0xA977:
            func_A977_b9(); break;
        case 0xA99F:
            func_A99F_b9(); break;
        case 0xA9B5:
            switch (g_current_bank) {
                case 9: func_A9B5_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E6:
            func_A9E6_b9(); break;
        case 0xA9FA:
            func_A9FA_b9(); break;
        case 0xAA7B:
            func_AA7B_b9(); break;
        case 0xAA7E:
            func_AA7E_b9(); break;
        case 0xAA7F:
            func_AA7F_b9(); break;
        case 0xAA86:
            switch (g_current_bank) {
                case 9: func_AA86_b9(); break;
                case 14: func_AA86_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA91:
            func_AA91_b9(); break;
        case 0xAB03:
            func_AB03_b9(); break;
        case 0xAB06:
            switch (g_current_bank) {
                case 9: func_AB06_b9(); break;
                case 14: func_AB06_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAB29:
            func_AB29_b9(); break;
        case 0xAB44:
            func_AB44_b9(); break;
        case 0xAB5B:
            switch (g_current_bank) {
                case 9: func_AB5B_b9(); break;
                case 14: func_AB5B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAB68:
            func_AB68_b9(); break;
        case 0xABA5:
            func_ABA5_b9(); break;
        case 0xABCA:
            func_ABCA_b9(); break;
        case 0xABD5:
            func_ABD5_b9(); break;
        case 0xAC07:
            func_AC07_b9(); break;
        case 0xAC14:
            func_AC14_b9(); break;
        case 0xAC19:
            func_AC19_b9(); break;
        case 0xAC4B:
            switch (g_current_bank) {
                case 9: func_AC4B_b9(); break;
                case 14: func_AC4B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC4E:
            func_AC4E_b9(); break;
        case 0xAC4F:
            switch (g_current_bank) {
                case 9: func_AC4F_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC5D:
            func_AC5D_b9(); break;
        case 0xACA4:
            func_ACA4_b9(); break;
        case 0xACA7:
            switch (g_current_bank) {
                case 9: func_ACA7_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACC7:
            func_ACC7_b9(); break;
        case 0xACE7:
            func_ACE7_b9(); break;
        case 0xACEE:
            func_ACEE_b9(); break;
        case 0xAD1E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xAD24:
            func_AD24_b9(); break;
        case 0xAD32:
            func_AD32_b9(); break;
        case 0xADE0:
            switch (g_current_bank) {
                case 9: func_ADE0_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE17:
            func_AE17_b9(); break;
        case 0xAE26:
            func_AE26_b9(); break;
        case 0xAE31:
            func_AE31_b9(); break;
        case 0xAE3C:
            func_AE3C_b9(); break;
        case 0xAE47:
            func_AE47_b9(); break;
        case 0xAE5B:
            func_AE5B_b9(); break;
        case 0xAE5F:
            func_AE5F_b9(); break;
        case 0xAE7B:
            func_AE7B_b9(); break;
        case 0xAE95:
            switch (g_current_bank) {
                case 9: func_AE95_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEAC:
            func_AEAC_b9(); break;
        case 0xAEAF:
            func_AEAF_b9(); break;
        case 0xAEBB:
            func_AEBB_b9(); break;
        case 0xAEE0:
            func_AEE0_b9(); break;
        case 0xAEE3:
            func_AEE3_b9(); break;
        case 0xAEEB:
            func_AEEB_b9(); break;
        case 0xAEED:
            func_AEED_b9(); break;
        case 0xAEF5:
            func_AEF5_b9(); break;
        case 0xAEF7:
            func_AEF7_b9(); break;
        case 0xAF76:
            switch (g_current_bank) {
                case 9: func_AF76_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAFCD:
            func_AFCD_b9(); break;
        case 0xAFD2:
            switch (g_current_bank) {
                case 9: func_AFD2_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB018:
            func_B018_b9(); break;
        case 0xB02E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB03B:
            switch (g_current_bank) {
                case 9: func_B03B_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB08E:
            func_B08E_b9(); break;
        case 0xB091:
            func_B091_b9(); break;
        case 0xB0CC:
            func_B0CC_b9(); break;
        case 0xB0E1:
            func_B0E1_b9(); break;
        case 0xB108:
            func_B108_b9(); break;
        case 0xB10B:
            func_B10B_b9(); break;
        case 0xB11B:
            func_B11B_b9(); break;
        case 0xB128:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB135:
            func_B135_b9(); break;
        case 0xB166:
            func_B166_b9(); break;
        case 0xB17B:
            switch (g_current_bank) {
                case 9: func_B17B_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1A7:
            switch (g_current_bank) {
                case 9: func_B1A7_b9(); break;
                case 14: func_B1A7_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1BF:
            func_B1BF_b9(); break;
        case 0xB1DA:
            func_B1DA_b9(); break;
        case 0xB1DE:
            switch (g_current_bank) {
                case 9: func_B1DE_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB20F:
            func_B20F_b9(); break;
        case 0xB210:
            switch (g_current_bank) {
                case 15: func_F210(); break;
                case 9: func_B210_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB21F:
            func_B21F_b9(); break;
        case 0xB224:
            switch (g_current_bank) {
                case 9: func_B224_b9(); break;
                case 14: func_B224_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB244:
            func_B244_b9(); break;
        case 0xB245:
            switch (g_current_bank) {
                case 9: func_B245_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB265:
            switch (g_current_bank) {
                case 9: func_B265_b9(); break;
                case 14: func_B265_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB279:
            func_B279_b9(); break;
        case 0xB27A:
            switch (g_current_bank) {
                case 9: func_B27A_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB285:
            func_B285_b9(); break;
        case 0xB28F:
            func_B28F_b9(); break;
        case 0xB290:
            switch (g_current_bank) {
                case 15: func_F290(); break;
                case 9: func_B290_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2AB:
            switch (g_current_bank) {
                case 9: func_B2AB_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB2AF:
            switch (g_current_bank) {
                case 9: func_B2AF_b9(); break;
                case 14: func_B2AF_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB301:
            func_B301_b9(); break;
        case 0xB307:
            func_B307_b9(); break;
        case 0xB32B:
            func_B32B_b9(); break;
        case 0xB36B:
            func_B36B_b9(); break;
        case 0xB379:
            func_B379_b9(); break;
        case 0xB38A:
            switch (g_current_bank) {
                case 9: func_B38A_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB39A:
            switch (g_current_bank) {
                case 9: func_B39A_b9(); break;
                case 14: func_B39A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3A4:
            func_B3A4_b9(); break;
        case 0xB3A7:
            switch (g_current_bank) {
                case 9: func_B3A7_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3DA:
            switch (g_current_bank) {
                case 9: func_B3DA_b9(); break;
                case 14: func_B3DA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB3F8:
            func_B3F8_b9(); break;
        case 0xB418:
            func_B418_b9(); break;
        case 0xB41D:
            func_B41D_b9(); break;
        case 0xB427:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB42A:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB44A:
            func_B44A_b9(); break;
        case 0xB457:
            func_B457_b9(); break;
        case 0xB46B:
            func_B46B_b9(); break;
        case 0xB474:
            switch (g_current_bank) {
                case 9: func_B474_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB49E:
            func_B49E_b9(); break;
        case 0xB4D9:
            func_B4D9_b9(); break;
        case 0xB4E4:
            func_B4E4_b9(); break;
        case 0xB4E5:
            func_B4E5_b9(); break;
        case 0xB507:
            func_B507_b9(); break;
        case 0xB50A:
            func_B50A_b9(); break;
        case 0xB526:
            switch (g_current_bank) {
                case 9: func_B526_b9(); break;
                case 14: func_B526_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB548:
            func_B548_b9(); break;
        case 0xB55E:
            func_B55E_b9(); break;
        case 0xB56B:
            func_B56B_b9(); break;
        case 0xB573:
            func_B573_b9(); break;
        case 0xB58D:
            func_B58D_b9(); break;
        case 0xB595:
            switch (g_current_bank) {
                case 9: func_B595_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5A1:
            switch (g_current_bank) {
                case 9: func_B5A1_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5A5:
            func_B5A5_b9(); break;
        case 0xB5FA:
            func_B5FA_b9(); break;
        case 0xB5FB:
            switch (g_current_bank) {
                case 9: func_B5FB_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB664:
            switch (g_current_bank) {
                case 15: func_F664(); break;
                case 9: func_B664_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB682:
            func_B682_b9(); break;
        case 0xB68E:
            func_B68E_b9(); break;
        case 0xB6B2:
            func_B6B2_b9(); break;
        case 0xB6C7:
            func_B6C7_b9(); break;
        case 0xB6D6:
            func_B6D6_b9(); break;
        case 0xB6DB:
            switch (g_current_bank) {
                case 9: func_B6DB_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6E5:
            func_B6E5_b9(); break;
        case 0xB6E9:
            func_B6E9_b9(); break;
        case 0xB6EC:
            func_B6EC_b9(); break;
        case 0xB6ED:
            func_B6ED_b9(); break;
        case 0xB6F7:
            func_B6F7_b9(); break;
        case 0xB6FC:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB71D:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB726:
            func_B726_b9(); break;
        case 0xB732:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB756:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7C5:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB7D8:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB7EA:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB7F4:
            func_B7F4_b9(); break;
        case 0xB80A:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB815:
            func_B815_b9(); break;
        case 0xB819:
            func_B819_b9(); break;
        case 0xB81C:
            func_B81C_b9(); break;
        case 0xB82B:
            func_B82B_b9(); break;
        case 0xB830:
            switch (g_current_bank) {
                case 9: func_B830_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB847:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB85D:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB85F:
            func_B85F_b9(); break;
        case 0xB86A:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB87B:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB883:
            func_B883_b9(); break;
        case 0xB88E:
            func_B88E_b9(); break;
        case 0xB890:
            func_B890_b9(); break;
        case 0xB898:
            switch (g_current_bank) {
                case 15: func_F898(); break;
                case 9: func_B898_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8A2:
            func_B8A2_b9(); break;
        case 0xB8A3:
            switch (g_current_bank) {
                case 9: func_B8A3_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8C7:
            func_B8C7_b9(); break;
        case 0xB8D5:
            func_B8D5_b9(); break;
        case 0xB8EC:
            func_B8EC_b9(); break;
        case 0xB8F9:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8FB:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB925:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB931:
            switch (g_current_bank) {
                case 9: func_B931_b9(); break;
                case 14: func_B931_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB94A:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB972:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB973:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB989:
            switch (g_current_bank) {
                case 15: func_F989(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB996:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB9A7:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB9AF:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB9B5:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9E7:
            func_B9E7_b9(); break;
        case 0xB9EC:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA2E:
            func_BA2E_b9(); break;
        case 0xBA2F:
            switch (g_current_bank) {
                case 9: func_BA2F_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA4E:
            func_BA4E_b9(); break;
        case 0xBA62:
            func_BA62_b9(); break;
        case 0xBA79:
            func_BA79_b9(); break;
        case 0xBA7A:
            func_BA7A_b9(); break;
        case 0xBA87:
            func_BA87_b9(); break;
        case 0xBA8A:
            switch (g_current_bank) {
                case 9: func_BA8A_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA9C:
            func_BA9C_b9(); break;
        case 0xBAA6:
            switch (g_current_bank) {
                case 15: func_FAA6(); break;
                case 9: func_BAA6_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBAB6:
            func_BAB6_b9(); break;
        case 0xBACA:
            func_BACA_b9(); break;
        case 0xBACB:
            func_BACB_b9(); break;
        case 0xBADB:
            switch (g_current_bank) {
                case 9: func_BADB_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBAED:
            func_BAED_b9(); break;
        case 0xBAFC:
            func_BAFC_b9(); break;
        case 0xBB10:
            func_BB10_b9(); break;
        case 0xBB24:
            func_BB24_b9(); break;
        case 0xBB25:
            switch (g_current_bank) {
                case 9: func_BB25_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB53:
            func_BB53_b9(); break;
        case 0xBB91:
            switch (g_current_bank) {
                case 9: func_BB91_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBBD8:
            func_BBD8_b9(); break;
        case 0xBBF2:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC07:
            func_BC07_b9(); break;
        case 0xBC0A:
            switch (g_current_bank) {
                case 9: func_BC0A_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC20:
            func_BC20_b9(); break;
        case 0xBC2F:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBC34:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC36:
            switch (g_current_bank) {
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC3D:
            func_BC3D_b9(); break;
        case 0xBC48:
            func_BC48_b9(); break;
        case 0xBC5E:
            func_BC5E_b9(); break;
        case 0xBC69:
            func_BC69_b9(); break;
        case 0xBC6B:
            func_BC6B_b9(); break;
        case 0xBC75:
            func_BC75_b9(); break;
        case 0xBC7C:
            func_BC7C_b9(); break;
        case 0xBC7D:
            switch (g_current_bank) {
                case 9: func_BC7D_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBC99:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBCC2:
            func_BCC2_b9(); break;
        case 0xBCD2:
            func_BCD2_b9(); break;
        case 0xBCE6:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBCFA:
            func_BCFA_b9(); break;
        case 0xBCFB:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBD10:
            func_BD10_b9(); break;
        case 0xBD30:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBD50:
            func_BD50_b9(); break;
        case 0xBD6C:
            func_BD6C_b9(); break;
        case 0xBD81:
            func_BD81_b9(); break;
        case 0xBD98:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBD99:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBDB2:
            func_BDB2_b9(); break;
        case 0xBE4B:
            func_BE4B_b9(); break;
        case 0xBE6C:
            switch (g_current_bank) {
                case 14: func_BE6C_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBE9A:
            func_BE9A_b9(); break;
        case 0xBF14:
            nes_log_dispatch_miss(addr); return 0;
        case 0x801F:
            func_801F_b11(); break;
        case 0x8023:
            switch (g_current_bank) {
                case 15: func_C023(); break;
                case 11: func_8023_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x807A:
            func_807A_b11(); break;
        case 0x80BC:
            func_80BC_b11(); break;
        case 0x80D5:
            func_80D5_b11(); break;
        case 0x80D7:
            func_80D7_b11(); break;
        case 0x80E8:
            func_80E8_b11(); break;
        case 0x816F:
            func_816F_b11(); break;
        case 0x8181:
            func_8181_b11(); break;
        case 0x8189:
            func_8189_b11(); break;
        case 0x818F:
            func_818F_b11(); break;
        case 0x819F:
            func_819F_b11(); break;
        case 0x81E3:
            func_81E3_b11(); break;
        case 0x81E8:
            func_81E8_b11(); break;
        case 0x81F6:
            func_81F6_b11(); break;
        case 0x820A:
            func_820A_b11(); break;
        case 0x8247:
            func_8247_b11(); break;
        case 0x8249:
            func_8249_b11(); break;
        case 0x8270:
            func_8270_b11(); break;
        case 0x8273:
            func_8273_b11(); break;
        case 0x8296:
            func_8296_b11(); break;
        case 0x82A6:
            func_82A6_b11(); break;
        case 0x82AF:
            func_82AF_b11(); break;
        case 0x82DA:
            func_82DA_b11(); break;
        case 0x82E6:
            func_82E6_b11(); break;
        case 0x82FA:
            func_82FA_b11(); break;
        case 0x82FB:
            func_82FB_b11(); break;
        case 0x830A:
            func_830A_b11(); break;
        case 0x8311:
            func_8311_b11(); break;
        case 0x8320:
            func_8320_b11(); break;
        case 0x8333:
            func_8333_b11(); break;
        case 0x8349:
            func_8349_b11(); break;
        case 0x835B:
            func_835B_b11(); break;
        case 0x8368:
            func_8368_b11(); break;
        case 0x836B:
            func_836B_b11(); break;
        case 0x837F:
            func_837F_b11(); break;
        case 0x8390:
            func_8390_b11(); break;
        case 0x83BC:
            func_83BC_b11(); break;
        case 0x83BF:
            func_83BF_b11(); break;
        case 0x83DA:
            func_83DA_b11(); break;
        case 0x83EF:
            func_83EF_b11(); break;
        case 0x8406:
            func_8406_b11(); break;
        case 0x8419:
            func_8419_b11(); break;
        case 0x842A:
            func_842A_b11(); break;
        case 0x8440:
            func_8440_b11(); break;
        case 0x8454:
            func_8454_b11(); break;
        case 0x8496:
            func_8496_b11(); break;
        case 0x84A4:
            func_84A4_b11(); break;
        case 0x84EA:
            func_84EA_b11(); break;
        case 0x84ED:
            func_84ED_b11(); break;
        case 0x8529:
            func_8529_b11(); break;
        case 0x8540:
            func_8540_b11(); break;
        case 0x8547:
            func_8547_b11(); break;
        case 0x8555:
            func_8555_b11(); break;
        case 0x85E4:
            func_85E4_b11(); break;
        case 0x8607:
            func_8607_b11(); break;
        case 0x8609:
            func_8609_b11(); break;
        case 0x861D:
            func_861D_b11(); break;
        case 0x8627:
            switch (g_current_bank) {
                case 15: func_C627(); break;
                case 11: func_8627_b11(); break;
                case 14: func_8627_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x862A:
            func_862A_b11(); break;
        case 0x864C:
            func_864C_b11(); break;
        case 0x8662:
            func_8662_b11(); break;
        case 0x866B:
            func_866B_b11(); break;
        case 0x86A0:
            func_86A0_b11(); break;
        case 0x86E2:
            func_86E2_b11(); break;
        case 0x86FB:
            func_86FB_b11(); break;
        case 0x8718:
            func_8718_b11(); break;
        case 0x871D:
            func_871D_b11(); break;
        case 0x872B:
            func_872B_b11(); break;
        case 0x8733:
            func_8733_b11(); break;
        case 0x8737:
            func_8737_b11(); break;
        case 0x8740:
            func_8740_b11(); break;
        case 0x8752:
            func_8752_b11(); break;
        case 0x875B:
            func_875B_b11(); break;
        case 0x8760:
            func_8760_b11(); break;
        case 0x8763:
            func_8763_b11(); break;
        case 0x8782:
            func_8782_b11(); break;
        case 0x8797:
            func_8797_b11(); break;
        case 0x87A5:
            func_87A5_b11(); break;
        case 0x87AA:
            func_87AA_b11(); break;
        case 0x87CD:
            func_87CD_b11(); break;
        case 0x87FA:
            func_87FA_b11(); break;
        case 0x8809:
            func_8809_b11(); break;
        case 0x880C:
            func_880C_b11(); break;
        case 0x8814:
            func_8814_b11(); break;
        case 0x8835:
            func_8835_b11(); break;
        case 0x8849:
            func_8849_b11(); break;
        case 0x884C:
            func_884C_b11(); break;
        case 0x8867:
            func_8867_b11(); break;
        case 0x8870:
            func_8870_b11(); break;
        case 0x887A:
            func_887A_b11(); break;
        case 0x8884:
            func_8884_b11(); break;
        case 0x88B8:
            func_88B8_b11(); break;
        case 0x88F2:
            func_88F2_b11(); break;
        case 0x88FA:
            func_88FA_b11(); break;
        case 0x9014:
            func_9014_b12(); break;
        case 0x902E:
            func_902E_b12(); break;
        case 0x905E:
            func_905E_b12(); break;
        case 0x9075:
            func_9075_b12(); break;
        case 0x908C:
            func_908C_b12(); break;
        case 0x909D:
            func_909D_b12(); break;
        case 0x90CA:
            func_90CA_b12(); break;
        case 0x90D0:
            func_90D0_b12(); break;
        case 0x90DD:
            func_90DD_b12(); break;
        case 0x90F2:
            func_90F2_b12(); break;
        case 0x910B:
            func_910B_b12(); break;
        case 0x9126:
            func_9126_b12(); break;
        case 0x9138:
            func_9138_b12(); break;
        case 0x9164:
            switch (g_current_bank) {
                case 12: func_9164_b12(); break;
                case 14: func_9164_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9199:
            func_9199_b12(); break;
        case 0x91C8:
            func_91C8_b12(); break;
        case 0x91CA:
            func_91CA_b12(); break;
        case 0x91EC:
            func_91EC_b12(); break;
        case 0x91EF:
            func_91EF_b12(); break;
        case 0x9216:
            func_9216_b12(); break;
        case 0x9236:
            func_9236_b12(); break;
        case 0x9261:
            switch (g_current_bank) {
                case 12: func_9261_b12(); break;
                case 14: func_9261_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9279:
            func_9279_b12(); break;
        case 0x9291:
            func_9291_b12(); break;
        case 0x92A2:
            func_92A2_b12(); break;
        case 0x92D4:
            func_92D4_b12(); break;
        case 0x9316:
            func_9316_b12(); break;
        case 0x935F:
            func_935F_b12(); break;
        case 0x9371:
            func_9371_b12(); break;
        case 0x93BA:
            func_93BA_b12(); break;
        case 0x93D2:
            func_93D2_b12(); break;
        case 0x93DE:
            func_93DE_b12(); break;
        case 0x940C:
            func_940C_b12(); break;
        case 0x940F:
            func_940F_b12(); break;
        case 0x9412:
            func_9412_b12(); break;
        case 0x941C:
            func_941C_b12(); break;
        case 0x9428:
            func_9428_b12(); break;
        case 0x9449:
            func_9449_b12(); break;
        case 0x9471:
            func_9471_b12(); break;
        case 0x947F:
            func_947F_b12(); break;
        case 0x94A7:
            func_94A7_b12(); break;
        case 0x94B9:
            func_94B9_b12(); break;
        case 0x94C7:
            func_94C7_b12(); break;
        case 0x94E9:
            func_94E9_b12(); break;
        case 0x950D:
            func_950D_b12(); break;
        case 0x951D:
            func_951D_b12(); break;
        case 0x952F:
            switch (g_current_bank) {
                case 12: func_952F_b12(); break;
                case 14: func_952F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x953E:
            func_953E_b12(); break;
        case 0x9550:
            func_9550_b12(); break;
        case 0x9554:
            func_9554_b12(); break;
        case 0x955E:
            func_955E_b12(); break;
        case 0x958A:
            func_958A_b12(); break;
        case 0x95AF:
            func_95AF_b12(); break;
        case 0x95E1:
            func_95E1_b12(); break;
        case 0x9604:
            func_9604_b12(); break;
        case 0x960F:
            func_960F_b12(); break;
        case 0x964D:
            func_964D_b12(); break;
        case 0x9663:
            func_9663_b12(); break;
        case 0x96AC:
            func_96AC_b12(); break;
        case 0x96CF:
            func_96CF_b12(); break;
        case 0x96DA:
            func_96DA_b12(); break;
        case 0x9708:
            func_9708_b12(); break;
        case 0x970D:
            func_970D_b12(); break;
        case 0x971B:
            func_971B_b12(); break;
        case 0x973C:
            func_973C_b12(); break;
        case 0x9749:
            func_9749_b12(); break;
        case 0x9757:
            func_9757_b12(); break;
        case 0x9766:
            func_9766_b12(); break;
        case 0x9783:
            switch (g_current_bank) {
                case 12: func_9783_b12(); break;
                case 14: func_9783_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x97E1:
            func_97E1_b12(); break;
        case 0x9821:
            func_9821_b12(); break;
        case 0x983E:
            func_983E_b12(); break;
        case 0x987F:
            func_987F_b12(); break;
        case 0x98A2:
            func_98A2_b12(); break;
        case 0x98AD:
            switch (g_current_bank) {
                case 12: func_98AD_b12(); break;
                case 14: func_98AD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98DC:
            func_98DC_b12(); break;
        case 0x9901:
            func_9901_b12(); break;
        case 0x990B:
            func_990B_b12(); break;
        case 0x991E:
            func_991E_b12(); break;
        case 0x992B:
            func_992B_b12(); break;
        case 0x992C:
            func_992C_b12(); break;
        case 0x9961:
            func_9961_b12(); break;
        case 0x996A:
            func_996A_b12(); break;
        case 0x99A3:
            switch (g_current_bank) {
                case 12: func_99A3_b12(); break;
                case 2: func_99A3_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99BA:
            func_99BA_b12(); break;
        case 0x99CB:
            func_99CB_b12(); break;
        case 0x99CC:
            func_99CC_b12(); break;
        case 0x99F4:
            func_99F4_b12(); break;
        case 0x99F9:
            func_99F9_b12(); break;
        case 0x9A09:
            func_9A09_b12(); break;
        case 0x9A19:
            func_9A19_b12(); break;
        case 0x9A27:
            func_9A27_b12(); break;
        case 0x9A62:
            func_9A62_b12(); break;
        case 0x9A6D:
            func_9A6D_b12(); break;
        case 0x9A71:
            func_9A71_b12(); break;
        case 0x9A81:
            func_9A81_b12(); break;
        case 0x9A8B:
            func_9A8B_b12(); break;
        case 0x9AAB:
            func_9AAB_b12(); break;
        case 0x9B0E:
            func_9B0E_b12(); break;
        case 0x9B38:
            func_9B38_b12(); break;
        case 0x80E7:
            func_80E7_b14(); break;
        case 0x82C4:
            switch (g_current_bank) {
                case 14: func_82C4_b14(); break;
                case 9: func_82C4_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82CC:
            func_82CC_b14(); break;
        case 0x82CE:
            func_82CE_b14(); break;
        case 0x831E:
            func_831E_b14(); break;
        case 0x835E:
            func_835E_b14(); break;
        case 0x8360:
            func_8360_b14(); break;
        case 0x836A:
            func_836A_b14(); break;
        case 0x83AD:
            func_83AD_b14(); break;
        case 0x85C7:
            switch (g_current_bank) {
                case 14: func_85C7_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85C8:
            switch (g_current_bank) {
                case 14: func_85C8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85C9:
            switch (g_current_bank) {
                case 14: func_85C9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85D6:
            func_85D6_b14(); break;
        case 0x85D9:
            switch (g_current_bank) {
                case 14: func_85D9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8628:
            func_8628_b14(); break;
        case 0x8630:
            func_8630_b14(); break;
        case 0x863E:
            func_863E_b14(); break;
        case 0x86BC:
            func_86BC_b14(); break;
        case 0x86E4:
            func_86E4_b14(); break;
        case 0x86F0:
            func_86F0_b14(); break;
        case 0x86FC:
            func_86FC_b14(); break;
        case 0x8712:
            func_8712_b14(); break;
        case 0x8717:
            func_8717_b14(); break;
        case 0x873B:
            func_873B_b14(); break;
        case 0x874B:
            func_874B_b14(); break;
        case 0x876B:
            func_876B_b14(); break;
        case 0x8795:
            func_8795_b14(); break;
        case 0x87AC:
            func_87AC_b14(); break;
        case 0x87B3:
            func_87B3_b14(); break;
        case 0x87C6:
            func_87C6_b14(); break;
        case 0x87CB:
            switch (g_current_bank) {
                case 14: func_87CB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87DD:
            switch (g_current_bank) {
                case 14: func_87DD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x87EE:
            func_87EE_b14(); break;
        case 0x87FB:
            func_87FB_b14(); break;
        case 0x87FE:
            switch (g_current_bank) {
                case 14: func_87FE_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8821:
            func_8821_b14(); break;
        case 0x8845:
            func_8845_b14(); break;
        case 0x884A:
            func_884A_b14(); break;
        case 0x884B:
            func_884B_b14(); break;
        case 0x8863:
            func_8863_b14(); break;
        case 0x8875:
            func_8875_b14(); break;
        case 0x887D:
            switch (g_current_bank) {
                case 14: func_887D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8887:
            func_8887_b14(); break;
        case 0x8888:
            switch (g_current_bank) {
                case 14: func_8888_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8899:
            func_8899_b14(); break;
        case 0x88AD:
            func_88AD_b14(); break;
        case 0x88BB:
            func_88BB_b14(); break;
        case 0x88C8:
            func_88C8_b14(); break;
        case 0x88D6:
            switch (g_current_bank) {
                case 14: func_88D6_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x88FD:
            switch (g_current_bank) {
                case 14: func_88FD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x891A:
            func_891A_b14(); break;
        case 0x8922:
            func_8922_b14(); break;
        case 0x892F:
            func_892F_b14(); break;
        case 0x8939:
            switch (g_current_bank) {
                case 14: func_8939_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8943:
            func_8943_b14(); break;
        case 0x8947:
            switch (g_current_bank) {
                case 14: func_8947_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8956:
            func_8956_b14(); break;
        case 0x8961:
            func_8961_b14(); break;
        case 0x896D:
            func_896D_b14(); break;
        case 0x8985:
            func_8985_b14(); break;
        case 0x8992:
            func_8992_b14(); break;
        case 0x8995:
            switch (g_current_bank) {
                case 14: func_8995_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89A1:
            func_89A1_b14(); break;
        case 0x89A4:
            switch (g_current_bank) {
                case 14: func_89A4_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89B4:
            func_89B4_b14(); break;
        case 0x89B7:
            switch (g_current_bank) {
                case 14: func_89B7_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89C1:
            func_89C1_b14(); break;
        case 0x89C2:
            switch (g_current_bank) {
                case 14: func_89C2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x89DB:
            func_89DB_b14(); break;
        case 0x89F6:
            func_89F6_b14(); break;
        case 0x8A0A:
            func_8A0A_b14(); break;
        case 0x8A14:
            switch (g_current_bank) {
                case 15: func_CA14(); break;
                case 14: func_8A14_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A2E:
            func_8A2E_b14(); break;
        case 0x8A47:
            func_8A47_b14(); break;
        case 0x8A48:
            func_8A48_b14(); break;
        case 0x8A55:
            switch (g_current_bank) {
                case 14: func_8A55_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A69:
            func_8A69_b14(); break;
        case 0x8A6E:
            switch (g_current_bank) {
                case 14: func_8A6E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A78:
            func_8A78_b14(); break;
        case 0x8A79:
            switch (g_current_bank) {
                case 15: func_CA79(); break;
                case 14: func_8A79_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A98:
            switch (g_current_bank) {
                case 14: func_8A98_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8AFB:
            switch (g_current_bank) {
                case 15: func_CAFB(); break;
                case 14: func_8AFB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B0A:
            func_8B0A_b14(); break;
        case 0x8B19:
            func_8B19_b14(); break;
        case 0x8B1E:
            switch (g_current_bank) {
                case 14: func_8B1E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B42:
            func_8B42_b14(); break;
        case 0x8B51:
            func_8B51_b14(); break;
        case 0x8B58:
            switch (g_current_bank) {
                case 14: func_8B58_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B6E:
            func_8B6E_b14(); break;
        case 0x8B73:
            switch (g_current_bank) {
                case 14: func_8B73_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B7D:
            func_8B7D_b14(); break;
        case 0x8B92:
            func_8B92_b14(); break;
        case 0x8BA5:
            func_8BA5_b14(); break;
        case 0x8BA8:
            func_8BA8_b14(); break;
        case 0x8BDD:
            func_8BDD_b14(); break;
        case 0x8BEB:
            func_8BEB_b14(); break;
        case 0x8BFC:
            func_8BFC_b14(); break;
        case 0x8BFD:
            switch (g_current_bank) {
                case 14: func_8BFD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C12:
            func_8C12_b14(); break;
        case 0x8C2A:
            func_8C2A_b14(); break;
        case 0x8C2D:
            func_8C2D_b14(); break;
        case 0x8C42:
            func_8C42_b14(); break;
        case 0x8C59:
            func_8C59_b14(); break;
        case 0x8C69:
            func_8C69_b14(); break;
        case 0x8C7F:
            func_8C7F_b14(); break;
        case 0x8C80:
            switch (g_current_bank) {
                case 15: func_CC80(); break;
                case 14: func_8C80_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CCE:
            func_8CCE_b14(); break;
        case 0x8CD3:
            switch (g_current_bank) {
                case 14: func_8CD3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CEF:
            func_8CEF_b14(); break;
        case 0x8CFE:
            func_8CFE_b14(); break;
        case 0x8D03:
            switch (g_current_bank) {
                case 14: func_8D03_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D0D:
            func_8D0D_b14(); break;
        case 0x8D23:
            func_8D23_b14(); break;
        case 0x8D9C:
            func_8D9C_b14(); break;
        case 0x8DCB:
            switch (g_current_bank) {
                case 14: func_8DCB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8DED:
            func_8DED_b14(); break;
        case 0x8DFA:
            func_8DFA_b14(); break;
        case 0x8DFD:
            switch (g_current_bank) {
                case 14: func_8DFD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E11:
            func_8E11_b14(); break;
        case 0x8E14:
            switch (g_current_bank) {
                case 14: func_8E14_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8E29:
            func_8E29_b14(); break;
        case 0x8E33:
            func_8E33_b14(); break;
        case 0x8E72:
            func_8E72_b14(); break;
        case 0x8E81:
            func_8E81_b14(); break;
        case 0x8E86:
            func_8E86_b14(); break;
        case 0x8EAA:
            func_8EAA_b14(); break;
        case 0x8EAD:
            func_8EAD_b14(); break;
        case 0x8ED2:
            func_8ED2_b14(); break;
        case 0x8EF6:
            func_8EF6_b14(); break;
        case 0x8EF7:
            func_8EF7_b14(); break;
        case 0x8F01:
            func_8F01_b14(); break;
        case 0x8F04:
            func_8F04_b14(); break;
        case 0x8F1F:
            func_8F1F_b14(); break;
        case 0x8F2C:
            func_8F2C_b14(); break;
        case 0x8F39:
            func_8F39_b14(); break;
        case 0x8F8A:
            switch (g_current_bank) {
                case 14: func_8F8A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8F97:
            func_8F97_b14(); break;
        case 0x8FCF:
            func_8FCF_b14(); break;
        case 0x8FEC:
            func_8FEC_b14(); break;
        case 0x8FF9:
            func_8FF9_b14(); break;
        case 0x8FFC:
            switch (g_current_bank) {
                case 14: func_8FFC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9018:
            func_9018_b14(); break;
        case 0x9025:
            func_9025_b14(); break;
        case 0x902F:
            func_902F_b14(); break;
        case 0x9095:
            func_9095_b14(); break;
        case 0x9096:
            switch (g_current_bank) {
                case 14: func_9096_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90D6:
            func_90D6_b14(); break;
        case 0x90DE:
            func_90DE_b14(); break;
        case 0x90E2:
            switch (g_current_bank) {
                case 14: func_90E2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90EF:
            func_90EF_b14(); break;
        case 0x9107:
            func_9107_b14(); break;
        case 0x9116:
            func_9116_b14(); break;
        case 0x911C:
            func_911C_b14(); break;
        case 0x912C:
            func_912C_b14(); break;
        case 0x9141:
            func_9141_b14(); break;
        case 0x9142:
            func_9142_b14(); break;
        case 0x9151:
            func_9151_b14(); break;
        case 0x9156:
            switch (g_current_bank) {
                case 14: func_9156_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9186:
            func_9186_b14(); break;
        case 0x9187:
            func_9187_b14(); break;
        case 0x9191:
            func_9191_b14(); break;
        case 0x9194:
            switch (g_current_bank) {
                case 14: func_9194_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9203:
            func_9203_b14(); break;
        case 0x9208:
            func_9208_b14(); break;
        case 0x9209:
            func_9209_b14(); break;
        case 0x921F:
            func_921F_b14(); break;
        case 0x9224:
            switch (g_current_bank) {
                case 14: func_9224_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x922E:
            func_922E_b14(); break;
        case 0x9242:
            func_9242_b14(); break;
        case 0x9256:
            func_9256_b14(); break;
        case 0x925F:
            func_925F_b14(); break;
        case 0x926E:
            func_926E_b14(); break;
        case 0x9285:
            func_9285_b14(); break;
        case 0x9286:
            switch (g_current_bank) {
                case 14: func_9286_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9290:
            func_9290_b14(); break;
        case 0x9295:
            switch (g_current_bank) {
                case 14: func_9295_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x92A4:
            func_92A4_b14(); break;
        case 0x92AA:
            func_92AA_b14(); break;
        case 0x92B6:
            switch (g_current_bank) {
                case 14: func_92B6_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x92F5:
            func_92F5_b14(); break;
        case 0x9303:
            func_9303_b14(); break;
        case 0x9329:
            func_9329_b14(); break;
        case 0x9348:
            func_9348_b14(); break;
        case 0x9419:
            func_9419_b14(); break;
        case 0x943F:
            func_943F_b14(); break;
        case 0x9459:
            func_9459_b14(); break;
        case 0x945E:
            func_945E_b14(); break;
        case 0x945F:
            switch (g_current_bank) {
                case 15: func_D45F(); break;
                case 14: func_945F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x946E:
            func_946E_b14(); break;
        case 0x9496:
            func_9496_b14(); break;
        case 0x94AF:
            func_94AF_b14(); break;
        case 0x94F9:
            func_94F9_b14(); break;
        case 0x94FE:
            func_94FE_b14(); break;
        case 0x9526:
            func_9526_b14(); break;
        case 0x9540:
            func_9540_b14(); break;
        case 0x958F:
            func_958F_b14(); break;
        case 0x9592:
            func_9592_b14(); break;
        case 0x95B0:
            func_95B0_b14(); break;
        case 0x95BD:
            func_95BD_b14(); break;
        case 0x95DD:
            func_95DD_b14(); break;
        case 0x95E3:
            func_95E3_b14(); break;
        case 0x95E4:
            switch (g_current_bank) {
                case 14: func_95E4_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x95F9:
            func_95F9_b14(); break;
        case 0x9617:
            func_9617_b14(); break;
        case 0x9621:
            switch (g_current_bank) {
                case 15: func_D621(); break;
                case 14: func_9621_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x962C:
            func_962C_b14(); break;
        case 0x962E:
            func_962E_b14(); break;
        case 0x9639:
            func_9639_b14(); break;
        case 0x963F:
            func_963F_b14(); break;
        case 0x9643:
            func_9643_b14(); break;
        case 0x9653:
            func_9653_b14(); break;
        case 0x9655:
            func_9655_b14(); break;
        case 0x9658:
            func_9658_b14(); break;
        case 0x9659:
            switch (g_current_bank) {
                case 14: func_9659_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96C0:
            nes_log_dispatch_miss(addr); return 0;
        case 0x96C5:
            switch (g_current_bank) {
                case 15: func_D6C5(); break;
                case 14: func_96C5_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x96E5:
            func_96E5_b14(); break;
        case 0x96FD:
            func_96FD_b14(); break;
        case 0x9713:
            func_9713_b14(); break;
        case 0x9716:
            func_9716_b14(); break;
        case 0x9717:
            func_9717_b14(); break;
        case 0x9734:
            switch (g_current_bank) {
                case 14: func_9734_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9745:
            func_9745_b14(); break;
        case 0x9755:
            func_9755_b14(); break;
        case 0x9758:
            func_9758_b14(); break;
        case 0x9761:
            func_9761_b14(); break;
        case 0x9764:
            func_9764_b14(); break;
        case 0x9767:
            func_9767_b14(); break;
        case 0x9773:
            func_9773_b14(); break;
        case 0x9780:
            func_9780_b14(); break;
        case 0x978D:
            func_978D_b14(); break;
        case 0x97B3:
            func_97B3_b14(); break;
        case 0x97B9:
            func_97B9_b14(); break;
        case 0x97D0:
            func_97D0_b14(); break;
        case 0x97D1:
            func_97D1_b14(); break;
        case 0x97DB:
            func_97DB_b14(); break;
        case 0x97F6:
            func_97F6_b14(); break;
        case 0x97FB:
            func_97FB_b14(); break;
        case 0x981D:
            switch (g_current_bank) {
                case 14: func_981D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9823:
            func_9823_b14(); break;
        case 0x9872:
            func_9872_b14(); break;
        case 0x9885:
            switch (g_current_bank) {
                case 14: func_9885_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9890:
            func_9890_b14(); break;
        case 0x98B3:
            switch (g_current_bank) {
                case 14: func_98B3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98BD:
            func_98BD_b14(); break;
        case 0x98D0:
            func_98D0_b14(); break;
        case 0x98D6:
            func_98D6_b14(); break;
        case 0x98DB:
            func_98DB_b14(); break;
        case 0x98FE:
            func_98FE_b14(); break;
        case 0x990F:
            func_990F_b14(); break;
        case 0x995B:
            func_995B_b14(); break;
        case 0x9963:
            func_9963_b14(); break;
        case 0x99B1:
            func_99B1_b14(); break;
        case 0x99B6:
            switch (g_current_bank) {
                case 15: func_D9B6(); break;
                case 14: func_99B6_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99B9:
            func_99B9_b14(); break;
        case 0x99C3:
            switch (g_current_bank) {
                case 14: func_99C3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x99D7:
            func_99D7_b14(); break;
        case 0x99FB:
            func_99FB_b14(); break;
        case 0x9A0E:
            func_9A0E_b14(); break;
        case 0x9A18:
            func_9A18_b14(); break;
        case 0x9A1D:
            func_9A1D_b14(); break;
        case 0x9A1E:
            func_9A1E_b14(); break;
        case 0x9A2D:
            func_9A2D_b14(); break;
        case 0x9A32:
            func_9A32_b14(); break;
        case 0x9A41:
            func_9A41_b14(); break;
        case 0x9A4B:
            func_9A4B_b14(); break;
        case 0x9A55:
            func_9A55_b14(); break;
        case 0x9AA1:
            func_9AA1_b14(); break;
        case 0x9ABB:
            switch (g_current_bank) {
                case 14: func_9ABB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9AC8:
            func_9AC8_b14(); break;
        case 0x9ACB:
            switch (g_current_bank) {
                case 14: func_9ACB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B08:
            func_9B08_b14(); break;
        case 0x9B2B:
            func_9B2B_b14(); break;
        case 0x9B43:
            func_9B43_b14(); break;
        case 0x9B44:
            switch (g_current_bank) {
                case 14: func_9B44_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9B58:
            func_9B58_b14(); break;
        case 0x9B67:
            func_9B67_b14(); break;
        case 0x9B78:
            func_9B78_b14(); break;
        case 0x9B8D:
            func_9B8D_b14(); break;
        case 0x9BA6:
            func_9BA6_b14(); break;
        case 0x9BBD:
            func_9BBD_b14(); break;
        case 0x9BD1:
            func_9BD1_b14(); break;
        case 0x9BE1:
            func_9BE1_b14(); break;
        case 0x9BE2:
            switch (g_current_bank) {
                case 14: func_9BE2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C18:
            func_9C18_b14(); break;
        case 0x9C19:
            switch (g_current_bank) {
                case 14: func_9C19_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C2B:
            func_9C2B_b14(); break;
        case 0x9C3C:
            func_9C3C_b14(); break;
        case 0x9C55:
            func_9C55_b14(); break;
        case 0x9C56:
            switch (g_current_bank) {
                case 14: func_9C56_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C73:
            func_9C73_b14(); break;
        case 0x9CA5:
            func_9CA5_b14(); break;
        case 0x9CA6:
            func_9CA6_b14(); break;
        case 0x9CC0:
            func_9CC0_b14(); break;
        case 0x9CCB:
            switch (g_current_bank) {
                case 14: func_9CCB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9CCD:
            func_9CCD_b14(); break;
        case 0x9CD5:
            func_9CD5_b14(); break;
        case 0x9CD6:
            func_9CD6_b14(); break;
        case 0x9CF0:
            func_9CF0_b14(); break;
        case 0x9D18:
            func_9D18_b14(); break;
        case 0x9D20:
            switch (g_current_bank) {
                case 14: func_9D20_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D31:
            switch (g_current_bank) {
                case 14: func_9D31_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9D4C:
            func_9D4C_b14(); break;
        case 0x9D51:
            func_9D51_b14(); break;
        case 0x9D6B:
            func_9D6B_b14(); break;
        case 0x9D7E:
            func_9D7E_b14(); break;
        case 0x9D84:
            switch (g_current_bank) {
                case 14: func_9D84_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DA3:
            func_9DA3_b14(); break;
        case 0x9DA9:
            func_9DA9_b14(); break;
        case 0x9DB3:
            func_9DB3_b14(); break;
        case 0x9DB4:
            switch (g_current_bank) {
                case 14: func_9DB4_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9DC3:
            func_9DC3_b14(); break;
        case 0x9DE7:
            func_9DE7_b14(); break;
        case 0x9E04:
            func_9E04_b14(); break;
        case 0x9E0C:
            func_9E0C_b14(); break;
        case 0x9E31:
            func_9E31_b14(); break;
        case 0x9E45:
            func_9E45_b14(); break;
        case 0x9EA4:
            func_9EA4_b14(); break;
        case 0x9EA9:
            switch (g_current_bank) {
                case 14: func_9EA9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9EEF:
            func_9EEF_b14(); break;
        case 0x9EF7:
            func_9EF7_b14(); break;
        case 0x9F28:
            func_9F28_b14(); break;
        case 0x9F2D:
            switch (g_current_bank) {
                case 14: func_9F2D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F30:
            func_9F30_b14(); break;
        case 0x9F44:
            func_9F44_b14(); break;
        case 0x9F46:
            func_9F46_b14(); break;
        case 0x9F58:
            func_9F58_b14(); break;
        case 0x9F5D:
            switch (g_current_bank) {
                case 14: func_9F5D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9F69:
            func_9F69_b14(); break;
        case 0x9F6C:
            func_9F6C_b14(); break;
        case 0x9FE2:
            nes_log_dispatch_miss(addr); return 0;
        case 0x9FF7:
            switch (g_current_bank) {
                case 14: func_9FF7_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA007:
            func_A007_b14(); break;
        case 0xA032:
            func_A032_b14(); break;
        case 0xA04A:
            func_A04A_b14(); break;
        case 0xA075:
            func_A075_b14(); break;
        case 0xA0BC:
            func_A0BC_b14(); break;
        case 0xA0D2:
            func_A0D2_b14(); break;
        case 0xA0E7:
            func_A0E7_b14(); break;
        case 0xA0FD:
            func_A0FD_b14(); break;
        case 0xA10C:
            func_A10C_b14(); break;
        case 0xA14D:
            func_A14D_b14(); break;
        case 0xA163:
            func_A163_b14(); break;
        case 0xA1C4:
            func_A1C4_b14(); break;
        case 0xA1E1:
            func_A1E1_b14(); break;
        case 0xA1E2:
            switch (g_current_bank) {
                case 14: func_A1E2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA216:
            func_A216_b14(); break;
        case 0xA230:
            func_A230_b14(); break;
        case 0xA243:
            func_A243_b14(); break;
        case 0xA248:
            func_A248_b14(); break;
        case 0xA249:
            switch (g_current_bank) {
                case 14: func_A249_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA25D:
            func_A25D_b14(); break;
        case 0xA28A:
            func_A28A_b14(); break;
        case 0xA292:
            func_A292_b14(); break;
        case 0xA2D8:
            func_A2D8_b14(); break;
        case 0xA2EC:
            switch (g_current_bank) {
                case 14: func_A2EC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2FE:
            func_A2FE_b14(); break;
        case 0xA318:
            func_A318_b14(); break;
        case 0xA321:
            func_A321_b14(); break;
        case 0xA33D:
            func_A33D_b14(); break;
        case 0xA354:
            func_A354_b14(); break;
        case 0xA36A:
            func_A36A_b14(); break;
        case 0xA36B:
            func_A36B_b14(); break;
        case 0xA388:
            func_A388_b14(); break;
        case 0xA389:
            func_A389_b14(); break;
        case 0xA3AB:
            func_A3AB_b14(); break;
        case 0xA3BA:
            func_A3BA_b14(); break;
        case 0xA3D7:
            func_A3D7_b14(); break;
        case 0xA419:
            func_A419_b14(); break;
        case 0xA4AC:
            func_A4AC_b14(); break;
        case 0xA4BA:
            func_A4BA_b14(); break;
        case 0xA4C4:
            func_A4C4_b14(); break;
        case 0xA51A:
            func_A51A_b14(); break;
        case 0xA53E:
            func_A53E_b14(); break;
        case 0xA541:
            func_A541_b14(); break;
        case 0xA557:
            func_A557_b14(); break;
        case 0xA5FD:
            func_A5FD_b14(); break;
        case 0xA605:
            switch (g_current_bank) {
                case 14: func_A605_b14(); break;
                case 2: func_A605_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA60B:
            func_A60B_b14(); break;
        case 0xA626:
            func_A626_b14(); break;
        case 0xA627:
            func_A627_b14(); break;
        case 0xA63A:
            switch (g_current_bank) {
                case 14: func_A63A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA667:
            func_A667_b14(); break;
        case 0xA668:
            func_A668_b14(); break;
        case 0xA66B:
            switch (g_current_bank) {
                case 14: func_A66B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA67D:
            func_A67D_b14(); break;
        case 0xA693:
            func_A693_b14(); break;
        case 0xA69D:
            func_A69D_b14(); break;
        case 0xA6A0:
            func_A6A0_b14(); break;
        case 0xA6BC:
            func_A6BC_b14(); break;
        case 0xA6BD:
            func_A6BD_b14(); break;
        case 0xA726:
            func_A726_b14(); break;
        case 0xA72B:
            func_A72B_b14(); break;
        case 0xA730:
            func_A730_b14(); break;
        case 0xA74A:
            func_A74A_b14(); break;
        case 0xA76B:
            func_A76B_b14(); break;
        case 0xA780:
            func_A780_b14(); break;
        case 0xA7CB:
            switch (g_current_bank) {
                case 14: func_A7CB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7D4:
            func_A7D4_b14(); break;
        case 0xA7EB:
            func_A7EB_b14(); break;
        case 0xA805:
            switch (g_current_bank) {
                case 14: func_A805_b14(); break;
                case 7: func_A805_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA81A:
            func_A81A_b14(); break;
        case 0xA82D:
            func_A82D_b14(); break;
        case 0xA82E:
            switch (g_current_bank) {
                case 14: func_A82E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA894:
            func_A894_b14(); break;
        case 0xA8BB:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA93A:
            func_A93A_b14(); break;
        case 0xA94E:
            func_A94E_b14(); break;
        case 0xA95F:
            func_A95F_b14(); break;
        case 0xA9B3:
            func_A9B3_b14(); break;
        case 0xA9BF:
            func_A9BF_b14(); break;
        case 0xA9C9:
            func_A9C9_b14(); break;
        case 0xA9D4:
            func_A9D4_b14(); break;
        case 0xA9F7:
            func_A9F7_b14(); break;
        case 0xAA2C:
            func_AA2C_b14(); break;
        case 0xAA3A:
            func_AA3A_b14(); break;
        case 0xAA50:
            func_AA50_b14(); break;
        case 0xAA55:
            switch (g_current_bank) {
                case 14: func_AA55_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAA6D:
            func_AA6D_b14(); break;
        case 0xAA6F:
            func_AA6F_b14(); break;
        case 0xAA72:
            func_AA72_b14(); break;
        case 0xAA99:
            func_AA99_b14(); break;
        case 0xAA9A:
            switch (g_current_bank) {
                case 14: func_AA9A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAADB:
            func_AADB_b14(); break;
        case 0xAAF2:
            func_AAF2_b14(); break;
        case 0xAB09:
            switch (g_current_bank) {
                case 15: func_EB09(); break;
                case 14: func_AB09_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAB39:
            func_AB39_b14(); break;
        case 0xAB3A:
            func_AB3A_b14(); break;
        case 0xAB65:
            func_AB65_b14(); break;
        case 0xABC9:
            func_ABC9_b14(); break;
        case 0xABE9:
            func_ABE9_b14(); break;
        case 0xABEA:
            switch (g_current_bank) {
                case 14: func_ABEA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC0B:
            func_AC0B_b14(); break;
        case 0xAC16:
            switch (g_current_bank) {
                case 14: func_AC16_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC24:
            func_AC24_b14(); break;
        case 0xAC27:
            switch (g_current_bank) {
                case 14: func_AC27_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAC62:
            func_AC62_b14(); break;
        case 0xAC6F:
            func_AC6F_b14(); break;
        case 0xAC79:
            func_AC79_b14(); break;
        case 0xAC7E:
            func_AC7E_b14(); break;
        case 0xAC80:
            func_AC80_b14(); break;
        case 0xACB8:
            func_ACB8_b14(); break;
        case 0xACCB:
            func_ACCB_b14(); break;
        case 0xACE0:
            func_ACE0_b14(); break;
        case 0xAD08:
            func_AD08_b14(); break;
        case 0xAD09:
            switch (g_current_bank) {
                case 15: func_ED09(); break;
                case 14: func_AD09_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD4A:
            func_AD4A_b14(); break;
        case 0xAD4B:
            func_AD4B_b14(); break;
        case 0xAD62:
            func_AD62_b14(); break;
        case 0xAD65:
            switch (g_current_bank) {
                case 14: func_AD65_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAD91:
            func_AD91_b14(); break;
        case 0xAD99:
            func_AD99_b14(); break;
        case 0xAD9A:
            func_AD9A_b14(); break;
        case 0xADB2:
            func_ADB2_b14(); break;
        case 0xADBF:
            func_ADBF_b14(); break;
        case 0xADC2:
            switch (g_current_bank) {
                case 14: func_ADC2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xADD9:
            switch (g_current_bank) {
                case 14: func_ADD9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE27:
            func_AE27_b14(); break;
        case 0xAE28:
            switch (g_current_bank) {
                case 14: func_AE28_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAE42:
            func_AE42_b14(); break;
        case 0xAEB3:
            func_AEB3_b14(); break;
        case 0xAEC3:
            switch (g_current_bank) {
                case 14: func_AEC3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAEDF:
            func_AEDF_b14(); break;
        case 0xAEEF:
            func_AEEF_b14(); break;
        case 0xAF16:
            func_AF16_b14(); break;
        case 0xAF19:
            func_AF19_b14(); break;
        case 0xAF1A:
            func_AF1A_b14(); break;
        case 0xAF30:
            func_AF30_b14(); break;
        case 0xAF3F:
            func_AF3F_b14(); break;
        case 0xAF5C:
            func_AF5C_b14(); break;
        case 0xAF6B:
            func_AF6B_b14(); break;
        case 0xAF70:
            switch (g_current_bank) {
                case 14: func_AF70_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAF9A:
            func_AF9A_b14(); break;
        case 0xAF9B:
            func_AF9B_b14(); break;
        case 0xAFA0:
            func_AFA0_b14(); break;
        case 0xAFA5:
            switch (g_current_bank) {
                case 14: func_AFA5_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xAFC6:
            func_AFC6_b14(); break;
        case 0xAFD6:
            func_AFD6_b14(); break;
        case 0xAFD7:
            switch (g_current_bank) {
                case 14: func_AFD7_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB07F:
            switch (g_current_bank) {
                case 14: func_B07F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB096:
            func_B096_b14(); break;
        case 0xB0B5:
            func_B0B5_b14(); break;
        case 0xB0CB:
            func_B0CB_b14(); break;
        case 0xB0E0:
            func_B0E0_b14(); break;
        case 0xB0EC:
            func_B0EC_b14(); break;
        case 0xB0ED:
            func_B0ED_b14(); break;
        case 0xB0F7:
            func_B0F7_b14(); break;
        case 0xB0FC:
            switch (g_current_bank) {
                case 14: func_B0FC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB10A:
            func_B10A_b14(); break;
        case 0xB110:
            func_B110_b14(); break;
        case 0xB155:
            func_B155_b14(); break;
        case 0xB173:
            func_B173_b14(); break;
        case 0xB189:
            func_B189_b14(); break;
        case 0xB18E:
            switch (g_current_bank) {
                case 14: func_B18E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB198:
            func_B198_b14(); break;
        case 0xB1A8:
            func_B1A8_b14(); break;
        case 0xB1BD:
            switch (g_current_bank) {
                case 14: func_B1BD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1D3:
            func_B1D3_b14(); break;
        case 0xB1D8:
            switch (g_current_bank) {
                case 14: func_B1D8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1EE:
            func_B1EE_b14(); break;
        case 0xB1F5:
            func_B1F5_b14(); break;
        case 0xB1F8:
            func_B1F8_b14(); break;
        case 0xB23E:
            switch (g_current_bank) {
                case 14: func_B23E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB25A:
            func_B25A_b14(); break;
        case 0xB27E:
            func_B27E_b14(); break;
        case 0xB280:
            func_B280_b14(); break;
        case 0xB29C:
            func_B29C_b14(); break;
        case 0xB2AE:
            func_B2AE_b14(); break;
        case 0xB2DC:
            func_B2DC_b14(); break;
        case 0xB2EE:
            func_B2EE_b14(); break;
        case 0xB2F0:
            func_B2F0_b14(); break;
        case 0xB2FE:
            switch (g_current_bank) {
                case 14: func_B2FE_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB308:
            func_B308_b14(); break;
        case 0xB31F:
            func_B31F_b14(); break;
        case 0xB338:
            func_B338_b14(); break;
        case 0xB341:
            func_B341_b14(); break;
        case 0xB346:
            func_B346_b14(); break;
        case 0xB34B:
            func_B34B_b14(); break;
        case 0xB34C:
            func_B34C_b14(); break;
        case 0xB352:
            switch (g_current_bank) {
                case 14: func_B352_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB372:
            func_B372_b14(); break;
        case 0xB389:
            func_B389_b14(); break;
        case 0xB3AA:
            func_B3AA_b14(); break;
        case 0xB3D7:
            func_B3D7_b14(); break;
        case 0xB3E4:
            func_B3E4_b14(); break;
        case 0xB3E7:
            func_B3E7_b14(); break;
        case 0xB3F7:
            func_B3F7_b14(); break;
        case 0xB446:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB47C:
            switch (g_current_bank) {
                case 14: func_B47C_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB490:
            func_B490_b14(); break;
        case 0xB49F:
            func_B49F_b14(); break;
        case 0xB4B0:
            func_B4B0_b14(); break;
        case 0xB4B1:
            func_B4B1_b14(); break;
        case 0xB4C4:
            switch (g_current_bank) {
                case 15: func_F4C4(); break;
                case 14: func_B4C4_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB4EC:
            func_B4EC_b14(); break;
        case 0xB4FB:
            func_B4FB_b14(); break;
        case 0xB500:
            switch (g_current_bank) {
                case 15: func_F500(); break;
                case 14: func_B500_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB52E:
            func_B52E_b14(); break;
        case 0xB53A:
            func_B53A_b14(); break;
        case 0xB53F:
            func_B53F_b14(); break;
        case 0xB540:
            switch (g_current_bank) {
                case 14: func_B540_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB54A:
            func_B54A_b14(); break;
        case 0xB55B:
            func_B55B_b14(); break;
        case 0xB579:
            func_B579_b14(); break;
        case 0xB58B:
            func_B58B_b14(); break;
        case 0xB58E:
            switch (g_current_bank) {
                case 14: func_B58E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5B8:
            func_B5B8_b14(); break;
        case 0xB5C6:
            func_B5C6_b14(); break;
        case 0xB5CB:
            func_B5CB_b14(); break;
        case 0xB5CC:
            switch (g_current_bank) {
                case 15: func_F5CC(); break;
                case 14: func_B5CC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB5FC:
            func_B5FC_b14(); break;
        case 0xB5FD:
            func_B5FD_b14(); break;
        case 0xB60D:
            func_B60D_b14(); break;
        case 0xB61B:
            func_B61B_b14(); break;
        case 0xB62C:
            func_B62C_b14(); break;
        case 0xB636:
            func_B636_b14(); break;
        case 0xB675:
            func_B675_b14(); break;
        case 0xB68F:
            func_B68F_b14(); break;
        case 0xB694:
            func_B694_b14(); break;
        case 0xB6B8:
            func_B6B8_b14(); break;
        case 0xB6BB:
            func_B6BB_b14(); break;
        case 0xB6BC:
            switch (g_current_bank) {
                case 14: func_B6BC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB6C9:
            func_B6C9_b14(); break;
        case 0xB6E8:
            switch (g_current_bank) {
                case 14: func_B6E8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB73C:
            func_B73C_b14(); break;
        case 0xB751:
            func_B751_b14(); break;
        case 0xB752:
            func_B752_b14(); break;
        case 0xB7D9:
            func_B7D9_b14(); break;
        case 0xB7DF:
            switch (g_current_bank) {
                case 14: func_B7DF_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB853:
            switch (g_current_bank) {
                case 14: func_B853_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB860:
            func_B860_b14(); break;
        case 0xB86D:
            func_B86D_b14(); break;
        case 0xB8BD:
            switch (g_current_bank) {
                case 14: func_B8BD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB8C2:
            func_B8C2_b14(); break;
        case 0xB8C6:
            func_B8C6_b14(); break;
        case 0xB8F8:
            switch (g_current_bank) {
                case 14: func_B8F8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB92A:
            func_B92A_b14(); break;
        case 0xB963:
            func_B963_b14(); break;
        case 0xB964:
            func_B964_b14(); break;
        case 0xB979:
            func_B979_b14(); break;
        case 0xB98F:
            func_B98F_b14(); break;
        case 0xB9AC:
            switch (g_current_bank) {
                case 14: func_B9AC_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB9AE:
            func_B9AE_b14(); break;
        case 0xB9BE:
            func_B9BE_b14(); break;
        case 0xB9DF:
            func_B9DF_b14(); break;
        case 0xB9E5:
            switch (g_current_bank) {
                case 15: func_F9E5(); break;
                case 14: func_B9E5_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA0B:
            func_BA0B_b14(); break;
        case 0xBA2D:
            func_BA2D_b14(); break;
        case 0xBA41:
            func_BA41_b14(); break;
        case 0xBA42:
            func_BA42_b14(); break;
        case 0xBA57:
            func_BA57_b14(); break;
        case 0xBA6C:
            switch (g_current_bank) {
                case 15: func_FA6C(); break;
                case 14: func_BA6C_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBA8C:
            func_BA8C_b14(); break;
        case 0xBAEE:
            func_BAEE_b14(); break;
        case 0xBAF8:
            func_BAF8_b14(); break;
        case 0xBAFE:
            func_BAFE_b14(); break;
        case 0xBB16:
            func_BB16_b14(); break;
        case 0xBB27:
            func_BB27_b14(); break;
        case 0xBB2E:
            func_BB2E_b14(); break;
        case 0xBB41:
            func_BB41_b14(); break;
        case 0xBB44:
            switch (g_current_bank) {
                case 14: func_BB44_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB4E:
            func_BB4E_b14(); break;
        case 0xBB55:
            switch (g_current_bank) {
                case 14: func_BB55_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBB69:
            func_BB69_b14(); break;
        case 0xBBA3:
            func_BBA3_b14(); break;
        case 0xBBB0:
            func_BBB0_b14(); break;
        case 0xBBB6:
            func_BBB6_b14(); break;
        case 0xBBBB:
            func_BBBB_b14(); break;
        case 0xBBBE:
            switch (g_current_bank) {
                case 14: func_BBBE_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBBE9:
            func_BBE9_b14(); break;
        case 0xBBF5:
            func_BBF5_b14(); break;
        case 0xBC01:
            func_BC01_b14(); break;
        case 0xBC11:
            func_BC11_b14(); break;
        case 0xBC1D:
            func_BC1D_b14(); break;
        case 0xBC1E:
            func_BC1E_b14(); break;
        case 0xBC3E:
            func_BC3E_b14(); break;
        case 0xBC44:
            func_BC44_b14(); break;
        case 0xBC52:
            func_BC52_b14(); break;
        case 0xBCA6:
            func_BCA6_b14(); break;
        case 0xBCA7:
            func_BCA7_b14(); break;
        case 0xBCA8:
            switch (g_current_bank) {
                case 14: func_BCA8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBCBB:
            func_BCBB_b14(); break;
        case 0xBCCB:
            func_BCCB_b14(); break;
        case 0xBCD7:
            func_BCD7_b14(); break;
        case 0xBCD8:
            func_BCD8_b14(); break;
        case 0xBCE3:
            func_BCE3_b14(); break;
        case 0xBCF6:
            func_BCF6_b14(); break;
        case 0xBD05:
            switch (g_current_bank) {
                case 15: func_FD05(); break;
                case 14: func_BD05_b14(); break;
                case 3: func_BD05_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD58:
            func_BD58_b14(); break;
        case 0xBD76:
            func_BD76_b14(); break;
        case 0xBD85:
            func_BD85_b14(); break;
        case 0xBD8A:
            switch (g_current_bank) {
                case 14: func_BD8A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBD94:
            func_BD94_b14(); break;
        case 0xBDAA:
            func_BDAA_b14(); break;
        case 0xBDAD:
            func_BDAD_b14(); break;
        case 0xBDDF:
            func_BDDF_b14(); break;
        case 0xBDEE:
            func_BDEE_b14(); break;
        case 0xBDF3:
            switch (g_current_bank) {
                case 14: func_BDF3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBDF9:
            switch (g_current_bank) {
                case 14: func_BDF9_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBDFF:
            func_BDFF_b14(); break;
        case 0xBE25:
            func_BE25_b14(); break;
        case 0xBE3A:
            func_BE3A_b14(); break;
        case 0xBE49:
            func_BE49_b14(); break;
        case 0xBE68:
            func_BE68_b14(); break;
        case 0xBE72:
            func_BE72_b14(); break;
        case 0xBE8D:
            func_BE8D_b14(); break;
        case 0xBE98:
            func_BE98_b14(); break;
        case 0xBEAA:
            func_BEAA_b14(); break;
        case 0xBED1:
            func_BED1_b14(); break;
        case 0xBED2:
            switch (g_current_bank) {
                case 14: func_BED2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xBF03:
            func_BF03_b14(); break;
        case 0xBF1D:
            func_BF1D_b14(); break;
        case 0xBF25:
            func_BF25_b14(); break;
        case 0xBF3E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xBF6F:
            func_BF6F_b14(); break;
        case 0xBF77:
            func_BF77_b14(); break;
        case 0xBF7D:
            func_BF7D_b14(); break;
        case 0xBF96:
            func_BF96_b14(); break;
        case 0xA1F0:
            func_A1F0_b1(); break;
        case 0xBD03:
            nes_log_dispatch_miss(addr); return 0;
        case 0xA6E3:
            func_A6E3_b2(); break;
        case 0xA733:
            func_A733_b2(); break;
        case 0xAAEA:
            nes_log_dispatch_miss(addr); return 0;
        case 0xC400:
            func_C400(); break;
        case 0x9D22:
            nes_log_dispatch_miss(addr); return 0;
        case 0x8850:
            func_8850_b2(); break;
        case 0xB858:
            switch (g_current_bank) {
                case 2: func_B858_b2(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C6C:
            func_8C6C_b4(); break;
        case 0xA38F:
            func_A38F_b4(); break;
        case 0xA4BD:
            func_A4BD_b4(); break;
        case 0xA1D6:
            func_A1D6_b5(); break;
        case 0x8040:
            switch (g_current_bank) {
                case 15: func_C040(); break;
                case 7: func_8040_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA014:
            func_A014_b6(); break;
        case 0x9FF5:
            func_9FF5_b6(); break;
        case 0x8A00:
            func_8A00_b6(); break;
        case 0x8206:
            func_8206_b6(); break;
        case 0xAAF7:
            func_AAF7_b6(); break;
        case 0x80B9:
            func_80B9_b6(); break;
        case 0xFFC8:
            func_FFC8(); break;
        case 0xEC41:
            func_EC41(); break;
        case 0xA63B:
            func_A63B_b6(); break;
        case 0xA222:
            nes_log_dispatch_miss(addr); return 0;
        case 0xAA2A:
            func_AA2A_b7(); break;
        case 0x8869:
            func_8869_b7(); break;
        case 0x80CA:
            func_80CA_b7(); break;
        case 0xFF40:
            func_FF40(); break;
        case 0x8401:
            func_8401_b7(); break;
        case 0xA690:
            func_A690_b7(); break;
        case 0xA73D:
            func_A73D_b7(); break;
        case 0x84DF:
            func_84DF_b9(); break;
        case 0x84CF:
            func_84CF_b9(); break;
        case 0x8005:
            func_8005_b9(); break;
        case 0xACA1:
            func_ACA1_b9(); break;
        case 0xB6AD:
            func_B6AD_b9(); break;
        case 0xB7C8:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB7D0:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB814:
            func_B814_b9(); break;
        case 0xB810:
            func_B810_b9(); break;
        case 0xB81A:
            func_B81A_b9(); break;
        case 0xB834:
            func_B834_b9(); break;
        case 0xB84E:
            nes_log_dispatch_miss(addr); return 0;
        case 0xB838:
            func_B838_b9(); break;
        case 0xBCB4:
            func_BCB4_b9(); break;
        case 0xBCDC:
            func_BCDC_b9(); break;
        case 0xBD8C:
            nes_log_dispatch_miss(addr); return 0;
        case 0x8AAC:
            func_8AAC_b14(); break;
        case 0x8AC0:
            func_8AC0_b14(); break;
        case 0xEC39:
            func_EC39(); break;
        case 0x83FC:
            func_83FC_b7(); break;
        case 0x83F7:
            func_83F7_b7(); break;
        case 0x8204:
            func_8204_b7(); break;
        case 0x9750:
            func_9750_b7(); break;
        case 0xA080:
            func_A080_b7(); break;
        case 0x8BF5:
            func_8BF5_b7(); break;
        case 0xEC34:
            func_EC34(); break;
        default:
            nes_log_dispatch_miss(addr);
            return 0;
    }
    return 1;
}
