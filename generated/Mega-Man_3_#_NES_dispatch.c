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
                case 4: func_8000_b4(); break;
                case 5: func_8000_b5(); break;
                case 6: func_8000_b6(); break;
                case 7: func_8000_b7(); break;
                case 8: func_8000_b8(); break;
                case 9: func_8000_b9(); break;
                case 11: func_8000_b11(); break;
                case 12: func_8000_b12(); break;
                case 13: func_8000_b13(); break;
                case 14: func_8000_b14(); break;
                case 10: func_8000_b10(); break;
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
            func_A15B_b1(); break;
        case 0xA030:
            func_A030_b2(); break;
        case 0xA01C:
            func_A01C_b3(); break;
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
            func_85F3_b6(); break;
        case 0xC74C:
            func_C74C(); break;
        case 0xE8B4:
            func_E8B4(); break;
        case 0xEF8C:
            func_EF8C(); break;
        case 0xF835:
            func_F835(); break;
        case 0x81E1:
            func_81E1_b6(); break;
        case 0x81AA:
            func_81AA_b6(); break;
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
                case 8: func_A006_b8(); break;
                case 9: func_A006_b9(); break;
                case 10: func_A006_b10(); break;
                case 11: func_A006_b11(); break;
                case 12: func_A006_b12(); break;
                case 13: func_A006_b13(); break;
                case 14: func_A006_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA003:
            switch (g_current_bank) {
                case 15: func_E003(); break;
                case 6: func_A003_b6(); break;
                case 0: func_A003_b0(); break;
                case 1: func_A003_b1(); break;
                case 2: func_A003_b2(); break;
                case 3: func_A003_b3(); break;
                case 4: func_A003_b4(); break;
                case 5: func_A003_b5(); break;
                case 7: func_A003_b7(); break;
                case 8: func_A003_b8(); break;
                case 9: func_A003_b9(); break;
                case 10: func_A003_b10(); break;
                case 11: func_A003_b11(); break;
                case 12: func_A003_b12(); break;
                case 13: func_A003_b13(); break;
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
                case 8: func_A000_b8(); break;
                case 9: func_A000_b9(); break;
                case 10: func_A000_b10(); break;
                case 11: func_A000_b11(); break;
                case 12: func_A000_b12(); break;
                case 13: func_A000_b13(); break;
                case 14: func_A000_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xFD80:
            func_FD80(); break;
        case 0x80F6:
            func_80F6_b6(); break;
        case 0xA05F:
            func_A05F_b7(); break;
        case 0x8006:
            switch (g_current_bank) {
                case 15: func_C006(); break;
                case 8: func_8006_b8(); break;
                case 11: func_8006_b11(); break;
                case 0: func_8006_b0(); break;
                case 1: func_8006_b1(); break;
                case 2: func_8006_b2(); break;
                case 3: func_8006_b3(); break;
                case 4: func_8006_b4(); break;
                case 5: func_8006_b5(); break;
                case 6: func_8006_b6(); break;
                case 7: func_8006_b7(); break;
                case 9: func_8006_b9(); break;
                case 10: func_8006_b10(); break;
                case 12: func_8006_b12(); break;
                case 13: func_8006_b13(); break;
                case 14: func_8006_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA058:
            func_A058_b9(); break;
        case 0x806C:
            func_806C_b11(); break;
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
                case 4: func_800C_b4(); break;
                case 5: func_800C_b5(); break;
                case 6: func_800C_b6(); break;
                case 7: func_800C_b7(); break;
                case 8: func_800C_b8(); break;
                case 9: func_800C_b9(); break;
                case 10: func_800C_b10(); break;
                case 11: func_800C_b11(); break;
                case 12: func_800C_b12(); break;
                case 13: func_800C_b13(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8003:
            switch (g_current_bank) {
                case 15: func_C003(); break;
                case 0: func_8003_b0(); break;
                case 1: func_8003_b1(); break;
                case 2: func_8003_b2(); break;
                case 3: func_8003_b3(); break;
                case 4: func_8003_b4(); break;
                case 5: func_8003_b5(); break;
                case 6: func_8003_b6(); break;
                case 7: func_8003_b7(); break;
                case 8: func_8003_b8(); break;
                case 9: func_8003_b9(); break;
                case 10: func_8003_b10(); break;
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
            func_8354_b6(); break;
        case 0x836D:
            func_836D_b6(); break;
        case 0x85BD:
            func_85BD_b6(); break;
        case 0x82B6:
            func_82B6_b6(); break;
        case 0xFF5B:
            func_FF5B(); break;
        case 0xFD77:
            func_FD77(); break;
        case 0xA0C0:
            func_A0C0_b7(); break;
        case 0xC8A0:
            func_C8A0(); break;
        case 0xF89A:
            func_F89A(); break;
        case 0x804B:
            func_804B_b8(); break;
        case 0x8252:
            func_8252_b11(); break;
        case 0x82DE:
            func_82DE_b11(); break;
        case 0x8393:
            func_8393_b11(); break;
        case 0xFB7B:
            func_FB7B(); break;
        case 0x8102:
            switch (g_current_bank) {
                case 15: func_C102(); break;
                case 14: func_8102_b14(); break;
                case 11: func_8102_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8097:
            func_8097_b14(); break;
        case 0x8014:
            func_8014_b14(); break;
        case 0x8002:
            func_8002_b0(); break;
        case 0xA18E:
            func_A18E_b1(); break;
        case 0xA398:
            func_A398_b1(); break;
        case 0xA2EA:
            func_A2EA_b1(); break;
        case 0xA01D:
            func_A01D_b1(); break;
        case 0xA038:
            func_A038_b1(); break;
        case 0xA01A:
            func_A01A_b1(); break;
        case 0xA50D:
            func_A50D_b1(); break;
        case 0xA078:
            func_A078_b1(); break;
        case 0xA023:
            func_A023_b1(); break;
        case 0xA0E6:
            func_A0E6_b1(); break;
        case 0xA250:
            func_A250_b2(); break;
        case 0xA24E:
            func_A24E_b3(); break;
        case 0xA026:
            func_A026_b7(); break;
        case 0x81F3:
            func_81F3_b8(); break;
        case 0xA364:
            func_A364_b9(); break;
        case 0x80FE:
            func_80FE_b11(); break;
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
            func_838C_b6(); break;
        case 0x83C5:
            func_83C5_b6(); break;
        case 0x8430:
            func_8430_b6(); break;
        case 0x8566:
            switch (g_current_bank) {
                case 6: func_8566_b6(); break;
                case 14: func_8566_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x850F:
            switch (g_current_bank) {
                case 6: func_850F_b6(); break;
                case 3: func_850F_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xEEAB:
            func_EEAB(); break;
        case 0xF034:
            func_F034(); break;
        case 0xA137:
            func_A137_b7(); break;
        case 0xA01B:
            func_A01B_b7(); break;
        case 0x8386:
            func_8386_b11(); break;
        case 0x8118:
            func_8118_b11(); break;
        case 0x825B:
            func_825B_b11(); break;
        case 0x81C8:
            func_81C8_b11(); break;
        case 0x81D4:
            func_81D4_b11(); break;
        case 0x8684:
            func_8684_b11(); break;
        case 0x86BA:
            func_86BA_b11(); break;
        case 0x85A3:
            func_85A3_b11(); break;
        case 0x8326:
            func_8326_b11(); break;
        case 0x8023:
            func_8023_b11(); break;
        case 0x80D8:
            func_80D8_b11(); break;
        case 0x85AE:
            func_85AE_b11(); break;
        case 0x8644:
            func_8644_b11(); break;
        case 0x8636:
            func_8636_b11(); break;
        case 0x85DE:
            func_85DE_b11(); break;
        case 0x803A:
            func_803A_b11(); break;
        case 0x8592:
            switch (g_current_bank) {
                case 11: func_8592_b11(); break;
                case 14: func_8592_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8497:
            func_8497_b11(); break;
        case 0x83CD:
            func_83CD_b11(); break;
        case 0x8491:
            func_8491_b11(); break;
        case 0x847E:
            func_847E_b11(); break;
        case 0x8575:
            func_8575_b11(); break;
        case 0x871A:
            func_871A_b11(); break;
        case 0x88A0:
            func_88A0_b11(); break;
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
            func_A5F2_b1(); break;
        case 0xA681:
            func_A681_b1(); break;
        case 0xA5C3:
            func_A5C3_b1(); break;
        case 0xA765:
            func_A765_b1(); break;
        case 0xA6AF:
            func_A6AF_b1(); break;
        case 0xA61C:
            func_A61C_b1(); break;
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
                case 12: func_A593_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA77C:
            func_A77C_b1(); break;
        case 0xA7D3:
            func_A7D3_b1(); break;
        case 0xA88E:
            func_A88E_b1(); break;
        case 0x9212:
            switch (g_current_bank) {
                case 1: func_9212_b1(); break;
                case 12: func_9212_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xCBCE:
            func_CBCE(); break;
        case 0xA988:
            func_A988_b1(); break;
        case 0xA90B:
            func_A90B_b1(); break;
        case 0xA985:
            switch (g_current_bank) {
                case 15: func_E985(); break;
                case 1: func_A985_b1(); break;
                case 14: func_A985_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA946:
            func_A946_b1(); break;
        case 0xA968:
            func_A968_b1(); break;
        case 0x8020:
            switch (g_current_bank) {
                case 1: func_8020_b1(); break;
                case 0: func_8020_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            func_A0D0_b1(); break;
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
            func_8236_b8(); break;
        case 0x8106:
            func_8106_b11(); break;
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
            func_A0EF_b7(); break;
        case 0x81E4:
            func_81E4_b11(); break;
        case 0x81F1:
            func_81F1_b11(); break;
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
            func_81AE_b11(); break;
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
                case 2: func_9C00_b2(); break;
                case 3: func_9C00_b3(); break;
                case 4: func_9C00_b4(); break;
                case 5: func_9C00_b5(); break;
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
                case 4: func_800F_b4(); break;
                case 5: func_800F_b5(); break;
                case 6: func_800F_b6(); break;
                case 7: func_800F_b7(); break;
                case 8: func_800F_b8(); break;
                case 9: func_800F_b9(); break;
                case 10: func_800F_b10(); break;
                case 11: func_800F_b11(); break;
                case 12: func_800F_b12(); break;
                case 13: func_800F_b13(); break;
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
                case 4: func_8009_b4(); break;
                case 5: func_8009_b5(); break;
                case 6: func_8009_b6(); break;
                case 7: func_8009_b7(); break;
                case 8: func_8009_b8(); break;
                case 9: func_8009_b9(); break;
                case 10: func_8009_b10(); break;
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
                case 4: func_8012_b4(); break;
                case 5: func_8012_b5(); break;
                case 6: func_8012_b6(); break;
                case 7: func_8012_b7(); break;
                case 8: func_8012_b8(); break;
                case 9: func_8012_b9(); break;
                case 10: func_8012_b10(); break;
                case 11: func_8012_b11(); break;
                case 12: func_8012_b12(); break;
                case 13: func_8012_b13(); break;
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
                case 0: func_9000_b0(); break;
                case 1: func_9000_b1(); break;
                case 2: func_9000_b2(); break;
                case 3: func_9000_b3(); break;
                case 4: func_9000_b4(); break;
                case 5: func_9000_b5(); break;
                case 6: func_9000_b6(); break;
                case 7: func_9000_b7(); break;
                case 8: func_9000_b8(); break;
                case 9: func_9000_b9(); break;
                case 10: func_9000_b10(); break;
                case 11: func_9000_b11(); break;
                case 12: func_9000_b12(); break;
                case 13: func_9000_b13(); break;
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
                case 3: func_9006_b3(); break;
                case 4: func_9006_b4(); break;
                case 5: func_9006_b5(); break;
                case 6: func_9006_b6(); break;
                case 7: func_9006_b7(); break;
                case 8: func_9006_b8(); break;
                case 9: func_9006_b9(); break;
                case 10: func_9006_b10(); break;
                case 11: func_9006_b11(); break;
                case 12: func_9006_b12(); break;
                case 13: func_9006_b13(); break;
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
                case 3: func_9003_b3(); break;
                case 4: func_9003_b4(); break;
                case 5: func_9003_b5(); break;
                case 6: func_9003_b6(); break;
                case 7: func_9003_b7(); break;
                case 8: func_9003_b8(); break;
                case 9: func_9003_b9(); break;
                case 10: func_9003_b10(); break;
                case 11: func_9003_b11(); break;
                case 12: func_9003_b12(); break;
                case 13: func_9003_b13(); break;
                case 14: func_9003_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC514:
            func_C514(); break;
        case 0xA1DD:
            func_A1DD_b2(); break;
        case 0xA019:
            func_A019_b3(); break;
        case 0x82D1:
            func_82D1_b4(); break;
        case 0xA180:
            func_A180_b14(); break;
        case 0xF67C:
            func_F67C(); break;
        case 0xA0D3:
            func_A0D3_b14(); break;
        case 0xF580:
            func_F580(); break;
        case 0xA07A:
            func_A07A_b14(); break;
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
            func_A022_b2(); break;
        case 0xA277:
            func_A277_b3(); break;
        case 0x8332:
            func_8332_b4(); break;
        case 0x8439:
            func_8439_b5(); break;
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
                case 10: func_8004_b10(); break;
                case 0: func_8004_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD80C:
            func_D80C(); break;
        case 0x9C80:
            func_9C80_b13(); break;
        case 0x9C7F:
            func_9C7F_b13(); break;
        case 0xA49A:
            func_A49A_b2(); break;
        case 0xA4B3:
            func_A4B3_b3(); break;
        case 0xA424:
            func_A424_b9(); break;
        case 0x82B8:
            func_82B8_b14(); break;
        case 0x800A:
            func_800A_b0(); break;
        case 0xA44D:
            func_A44D_b2(); break;
        case 0xA62B:
            func_A62B_b3(); break;
        case 0xABD6:
            func_ABD6_b9(); break;
        case 0xA6E5:
            func_A6E5_b2(); break;
        case 0xA698:
            func_A698_b3(); break;
        case 0xA7BA:
            func_A7BA_b9(); break;
        case 0xA13C:
            func_A13C_b2(); break;
        case 0xA472:
            func_A472_b3(); break;
        case 0xAC97:
            func_AC97_b9(); break;
        case 0x9D06:
            func_9D06_b1(); break;
        case 0xA465:
            func_A465_b2(); break;
        case 0xA8E0:
            func_A8E0_b3(); break;
        case 0xAD25:
            func_AD25_b9(); break;
        case 0x9410:
            func_9410_b12(); break;
        case 0x9034:
            func_9034_b14(); break;
        case 0xC909:
            func_C909(); break;
        case 0xC9B3:
            func_C9B3(); break;
        case 0x9ABE:
            func_9ABE_b12(); break;
        case 0x985D:
            func_985D_b12(); break;
        case 0xC50D:
            func_C50D(); break;
        case 0xA1DC:
            func_A1DC_b2(); break;
        case 0xA252:
            func_A252_b2(); break;
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
            func_A0EC_b14(); break;
        case 0xA104:
            func_A104_b14(); break;
        case 0xA293:
            func_A293_b14(); break;
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
            func_A308_b3(); break;
        case 0xA2B0:
            func_A2B0_b3(); break;
        case 0xF759:
            func_F759(); break;
        case 0xA2C3:
            func_A2C3_b3(); break;
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
            func_A518_b2(); break;
        case 0xA498:
            func_A498_b2(); break;
        case 0xA617:
            func_A617_b3(); break;
        case 0xA612:
            func_A612_b3(); break;
        case 0xA35D:
            func_A35D_b3(); break;
        case 0xA13A:
            func_A13A_b2(); break;
        case 0xA433:
            func_A433_b3(); break;
        case 0xA451:
            func_A451_b2(); break;
        case 0xA43C:
            func_A43C_b2(); break;
        case 0x9581:
            func_9581_b12(); break;
        case 0x9936:
            func_9936_b12(); break;
        case 0x94D6:
            func_94D6_b12(); break;
        case 0x954A:
            func_954A_b12(); break;
        case 0xA8DD:
            func_A8DD_b12(); break;
        case 0x93E9:
            func_93E9_b12(); break;
        case 0x93FE:
            func_93FE_b12(); break;
        case 0x98F2:
            func_98F2_b12(); break;
        case 0x9ABC:
            func_9ABC_b12(); break;
        case 0xA879:
            func_A879_b12(); break;
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
            func_968C_b12(); break;
        case 0x995C:
            func_995C_b12(); break;
        case 0x99FA:
            func_99FA_b12(); break;
        case 0x970B:
            func_970B_b12(); break;
        case 0x97EC:
            func_97EC_b12(); break;
        case 0x9A87:
            func_9A87_b12(); break;
        case 0x9681:
            func_9681_b12(); break;
        case 0x9762:
            func_9762_b12(); break;
        case 0x9258:
            func_9258_b12(); break;
        case 0x9509:
            func_9509_b12(); break;
        case 0xA8DB:
            func_A8DB_b12(); break;
        case 0x9155:
            func_9155_b12(); break;
        case 0xEA8F:
            func_EA8F(); break;
        case 0xE6B7:
            func_E6B7(); break;
        case 0xE79F:
            func_E79F(); break;
        case 0x96FC:
            func_96FC_b12(); break;
        case 0x99DC:
            func_99DC_b12(); break;
        case 0x9A58:
            func_9A58_b12(); break;
        case 0x9300:
            func_9300_b12(); break;
        case 0x9A4F:
            func_9A4F_b12(); break;
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
        case 0xC4F9:
            func_C4F9(); break;
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
        case 0xC8BE:
            func_C8BE(); break;
        case 0xC4C8:
            func_C4C8(); break;
        case 0xDABD:
            func_DABD(); break;
        case 0xDABE:
            func_DABE(); break;
        case 0xC4DA:
            func_C4DA(); break;
        case 0xC4DB:
            func_C4DB(); break;
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
        case 0xC4CA:
            func_C4CA(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDBAE:
            func_DBAE(); break;
        case 0xC4DC:
            func_C4DC(); break;
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
        case 0xC4ED:
            func_C4ED(); break;
        case 0xEF7A:
            func_EF7A(); break;
        case 0xC4EF:
            func_C4EF(); break;
        case 0xC4F0:
            func_C4F0(); break;
        case 0xC4F2:
            func_C4F2(); break;
        case 0xC4F3:
            func_C4F3(); break;
        case 0xD2AD:
            func_D2AD(); break;
        case 0xD2AE:
            func_D2AE(); break;
        case 0xC4D3:
            func_C4D3(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xF5B9:
            func_F5B9(); break;
        case 0xF5BA:
            func_F5BA(); break;
        case 0xC4F5:
            func_C4F5(); break;
        case 0xC4F6:
            func_C4F6(); break;
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
        case 0xC4D4:
            func_C4D4(); break;
        case 0xC4D5:
            func_C4D5(); break;
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
        case 0xC4D6:
            func_C4D6(); break;
        case 0xC4D7:
            func_C4D7(); break;
        case 0xC4E8:
            func_C4E8(); break;
        case 0xC4E9:
            func_C4E9(); break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xC152:
            func_C152(); break;
        case 0xC153:
            func_C153(); break;
        case 0xD8AE:
            func_D8AE(); break;
        case 0xC4D8:
            func_C4D8(); break;
        case 0xEAAD:
            func_EAAD(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xC4EA:
            func_C4EA(); break;
        case 0xC4EB:
            func_C4EB(); break;
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
        case 0xC198:
            func_C198(); break;
        case 0xD297:
            func_D297(); break;
        case 0xCCA3:
            func_CCA3(); break;
        case 0xCCA4:
            func_CCA4(); break;
        case 0xC49C:
            func_C49C(); break;
        case 0xC49D:
            func_C49D(); break;
        case 0xC1C4:
            func_C1C4(); break;
        case 0xC1C5:
            func_C1C5(); break;
        case 0xC1C1:
            func_C1C1(); break;
        case 0xC2C1:
            func_C2C1(); break;
        case 0xC2C2:
            func_C2C2(); break;
        case 0xC2C3:
            func_C2C3(); break;
        case 0xC3C3:
            func_C3C3(); break;
        case 0xC3C4:
            func_C3C4(); break;
        case 0xC4C3:
            func_C4C3(); break;
        case 0xC4C4:
            func_C4C4(); break;
        case 0xC4C5:
            func_C4C5(); break;
        case 0xFFC5:
            func_FFC5(); break;
        case 0xFF01:
            func_FF01(); break;
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
        case 0xC6D8:
            func_C6D8(); break;
        case 0xC6D9:
            func_C6D9(); break;
        case 0xD9B9:
            func_D9B9(); break;
        case 0xD9BA:
            func_D9BA(); break;
        case 0xDAB9:
            func_DAB9(); break;
        case 0xDABA:
            func_DABA(); break;
        case 0xC6DB:
            func_C6DB(); break;
        case 0xDBB9:
            func_DBB9(); break;
        case 0xDBBA:
            func_DBBA(); break;
        case 0xC6DC:
            func_C6DC(); break;
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
        case 0xC708:
            func_C708(); break;
        case 0xC709:
            func_C709(); break;
        case 0xC70B:
            func_C70B(); break;
        case 0xC70C:
            func_C70C(); break;
        case 0xC803:
            func_C803(); break;
        case 0xC8C9:
            func_C8C9(); break;
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
        case 0xF159:
            func_F159(); break;
        case 0xE028:
            func_E028(); break;
        case 0xF1E0:
            func_F1E0(); break;
        case 0xF1E1:
            func_F1E1(); break;
        case 0xF1B8:
            func_F1B8(); break;
        case 0xF1B9:
            func_F1B9(); break;
        case 0xF120:
            func_F120(); break;
        case 0xF168:
            func_F168(); break;
        case 0xF169:
            func_F169(); break;
        case 0xD8D0:
            func_D8D0(); break;
        case 0xF1D8:
            func_F1D8(); break;
        case 0xF1D9:
            func_F1D9(); break;
        case 0xF290:
            func_F290(); break;
        case 0xF291:
            func_F291(); break;
        case 0xF240:
            func_F240(); break;
        case 0xD058:
            func_D058(); break;
        case 0xF2D1:
            func_F2D1(); break;
        case 0xF279:
            func_F279(); break;
        case 0xF228:
            func_F228(); break;
        case 0xF229:
            func_F229(); break;
        case 0xF2A8:
            func_F2A8(); break;
        case 0xE490:
            func_E490(); break;
        case 0xE491:
            func_E491(); break;
        case 0xE428:
            func_E428(); break;
        case 0xE429:
            func_E429(); break;
        case 0xE468:
            func_E468(); break;
        case 0xE469:
            func_E469(); break;
        case 0xE480:
            func_E480(); break;
        case 0xE411:
            func_E411(); break;
        case 0xC003:
            func_C003(); break;
        case 0xC004:
            func_C004(); break;
        case 0xE418:
            func_E418(); break;
        case 0xE419:
            func_E419(); break;
        case 0xE4A0:
            func_E4A0(); break;
        case 0xE4A1:
            func_E4A1(); break;
        case 0xE440:
            func_E440(); break;
        case 0xE441:
            func_E441(); break;
        case 0xE498:
            func_E498(); break;
        case 0xE499:
            func_E499(); break;
        case 0xE430:
            func_E430(); break;
        case 0xE431:
            func_E431(); break;
        case 0xE003:
            func_E003(); break;
        case 0xE004:
            func_E004(); break;
        case 0xE804:
            func_E804(); break;
        case 0xF0A2:
            func_F0A2(); break;
        case 0xD0F1:
            func_D0F1(); break;
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
        case 0xC8B9:
            func_C8B9(); break;
        case 0xC8BA:
            func_C8BA(); break;
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
        case 0xCD0C:
            func_CD0C(); break;
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
        case 0xC74D:
            func_C74D(); break;
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
        case 0xCCF9:
            func_CCF9(); break;
        case 0xF9BE:
            func_F9BE(); break;
        case 0xCCFA:
            func_CCFA(); break;
        case 0xFABD:
            func_FABD(); break;
        case 0xCCFB:
            func_CCFB(); break;
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
        case 0xCD1E:
            func_CD1E(); break;
        case 0xCD1F:
            func_CD1F(); break;
        case 0xCD35:
            func_CD35(); break;
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
        case 0xCD9A:
            func_CD9A(); break;
        case 0xCDB0:
            func_CDB0(); break;
        case 0xCDB1:
            func_CDB1(); break;
        case 0xFD07:
            func_FD07(); break;
        case 0xEBFD:
            func_EBFD(); break;
        case 0xEBFE:
            func_EBFE(); break;
        case 0xD3BF:
            func_D3BF(); break;
        case 0xE1D3:
            func_E1D3(); break;
        case 0xCC79:
            func_CC79(); break;
        case 0xCC7A:
            func_CC7A(); break;
        case 0xCE8C:
            func_CE8C(); break;
        case 0xCE8D:
            func_CE8D(); break;
        case 0xD0CF:
            func_D0CF(); break;
        case 0xD3D0:
            func_D3D0(); break;
        case 0xD3D1:
            func_D3D1(); break;
        case 0xD4D3:
            func_D4D3(); break;
        case 0xD4D4:
            func_D4D4(); break;
        case 0xD5D5:
            func_D5D5(); break;
        case 0xD6D6:
            func_D6D6(); break;
        case 0xD6D7:
            func_D6D7(); break;
        case 0xD8D6:
            func_D8D6(); break;
        case 0xD8D7:
            func_D8D7(); break;
        case 0xD8D9:
            func_D8D9(); break;
        case 0xD9D8:
            func_D9D8(); break;
        case 0xD9DA:
            func_D9DA(); break;
        case 0xDBD9:
            func_DBD9(); break;
        case 0xDBDA:
            func_DBDA(); break;
        case 0xD7DB:
            func_D7DB(); break;
        case 0xD7DC:
            func_D7DC(); break;
        case 0xCDD7:
            func_CDD7(); break;
        case 0xCDD8:
            func_CDD8(); break;
        case 0xDDCD:
            func_DDCD(); break;
        case 0xDDCE:
            func_DDCE(); break;
        case 0xDDDD:
            func_DDDD(); break;
        case 0xDDDE:
            func_DDDE(); break;
        case 0xDEDD:
            func_DEDD(); break;
        case 0xDEDE:
            func_DEDE(); break;
        case 0xDFDF:
            func_DFDF(); break;
        case 0xDFE0:
            func_DFE0(); break;
        case 0xE0DF:
            func_E0DF(); break;
        case 0xE061:
            func_E061(); break;
        case 0xE062:
            func_E062(); break;
        case 0xCFE0:
            func_CFE0(); break;
        case 0xCFE1:
            func_CFE1(); break;
        case 0xCECF:
            func_CECF(); break;
        case 0xCED0:
            func_CED0(); break;
        case 0xCFCE:
            func_CFCE(); break;
        case 0xF67D:
            func_F67D(); break;
        case 0xCD02:
            func_CD02(); break;
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
        case 0xC8CE:
            func_C8CE(); break;
        case 0xC8CF:
            func_C8CF(); break;
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
        case 0xD820:
            func_D820(); break;
        case 0xD821:
            func_D821(); break;
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
        case 0xD355:
            func_D355(); break;
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
        case 0xD33E:
            func_D33E(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xF0F9:
            func_F0F9(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xDECE:
            func_DECE(); break;
        case 0xDECF:
            func_DECF(); break;
        case 0xD30F:
            func_D30F(); break;
        case 0xD349:
            func_D349(); break;
        case 0xD31C:
            func_D31C(); break;
        case 0xD31D:
            func_D31D(); break;
        case 0xC099:
            func_C099(); break;
        case 0xC09A:
            func_C09A(); break;
        case 0xE099:
            func_E099(); break;
        case 0xE09A:
            func_E09A(); break;
        case 0xD323:
            func_D323(); break;
        case 0xD32F:
            func_D32F(); break;
        case 0xD330:
            func_D330(); break;
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
        case 0xD320:
            func_D320(); break;
        case 0xD321:
            func_D321(); break;
        case 0xD33B:
            func_D33B(); break;
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
        case 0xD293:
            func_D293(); break;
        case 0xD294:
            func_D294(); break;
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
        case 0xFC0A:
            func_FC0A(); break;
        case 0xFC0B:
            func_FC0B(); break;
        case 0xFFFC:
            func_FFFC(); break;
        case 0xFFFD:
            func_FFFD(); break;
        case 0xCDA3:
            func_CDA3(); break;
        case 0xCDA4:
            func_CDA4(); break;
        case 0xC0BD:
            func_C0BD(); break;
        case 0xC0BE:
            func_C0BE(); break;
        case 0xFB12:
            func_FB12(); break;
        case 0xFB13:
            func_FB13(); break;
        case 0xD3A6:
            func_D3A6(); break;
        case 0xD3A7:
            func_D3A7(); break;
        case 0xD1A6:
            func_D1A6(); break;
        case 0xD1A7:
            func_D1A7(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xD2D2:
            func_D2D2(); break;
        case 0xD1D3:
            func_D1D3(); break;
        case 0xD2D3:
            func_D2D3(); break;
        case 0xD1D1:
            func_D1D1(); break;
        case 0xFFF0:
            func_FFF0(); break;
        case 0xFFF1:
            func_FFF1(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE801:
            func_E801(); break;
        case 0xFFE9:
            func_FFE9(); break;
        case 0xFE01:
            func_FE01(); break;
        case 0xFE02:
            func_FE02(); break;
        case 0xC616:
            func_C616(); break;
        case 0xC617:
            func_C617(); break;
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
        case 0xCD0A:
            func_CD0A(); break;
        case 0xCD0B:
            func_CD0B(); break;
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
        case 0xCD14:
            func_CD14(); break;
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
        case 0xF1BA:
            func_F1BA(); break;
        case 0xD7F1:
            func_D7F1(); break;
        case 0xD801:
            func_D801(); break;
        case 0xD811:
            func_D811(); break;
        case 0xD812:
            func_D812(); break;
        case 0xD822:
            func_D822(); break;
        case 0xF77A:
            func_F77A(); break;
        case 0xE6F7:
            func_E6F7(); break;
        case 0xE6F8:
            func_E6F8(); break;
        case 0xD03F:
            func_D03F(); break;
        case 0xE100:
            func_E100(); break;
        case 0xE101:
            func_E101(); break;
        case 0xF100:
            func_F100(); break;
        case 0xF180:
            func_F180(); break;
        case 0xF181:
            func_F181(); break;
        case 0xFD00:
            func_FD00(); break;
        case 0xFDFD:
            func_FDFD(); break;
        case 0xFDFE:
            func_FDFE(); break;
        case 0xFEFE:
            func_FEFE(); break;
        case 0xFEFF:
            func_FEFF(); break;
        case 0xFDF1:
            func_FDF1(); break;
        case 0xFEFD:
            func_FEFD(); break;
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
        case 0xDCA9:
            func_DCA9(); break;
        case 0xDCAA:
            func_DCAA(); break;
        case 0xD8BD:
            func_D8BD(); break;
        case 0xD910:
            func_D910(); break;
        case 0xD911:
            func_D911(); break;
        case 0xD2D0:
            func_D2D0(); break;
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
        case 0xDD0C:
            func_DD0C(); break;
        case 0xDD0D:
            func_DD0D(); break;
        case 0xC907:
            func_C907(); break;
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
        case 0xDCE1:
            func_DCE1(); break;
        case 0xD1B9:
            func_D1B9(); break;
        case 0xD1BA:
            func_D1BA(); break;
        case 0xDC71:
            func_DC71(); break;
        case 0xDC72:
            func_DC72(); break;
        case 0xDC89:
            func_DC89(); break;
        case 0xDC8A:
            func_DC8A(); break;
        case 0xDCA1:
            func_DCA1(); break;
        case 0xDCA2:
            func_DCA2(); break;
        case 0xDCB9:
            func_DCB9(); break;
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
        case 0xCD13:
            func_CD13(); break;
        case 0xC023:
            func_C023(); break;
        case 0xC219:
            func_C219(); break;
        case 0xC21A:
            func_C21A(); break;
        case 0xDEC2:
            func_DEC2(); break;
        case 0xE674:
            func_E674(); break;
        case 0xE675:
            func_E675(); break;
        case 0xC200:
            func_C200(); break;
        case 0xFB00:
            func_FB00(); break;
        case 0xFB01:
            func_FB01(); break;
        case 0xFAFB:
            func_FAFB(); break;
        case 0xFAFC:
            func_FAFC(); break;
        case 0xFBFB:
            func_FBFB(); break;
        case 0xC078:
            func_C078(); break;
        case 0xC079:
            func_C079(); break;
        case 0xCCF1:
            func_CCF1(); break;
        case 0xD481:
            func_D481(); break;
        case 0xF8D5:
            func_F8D5(); break;
        case 0xD4F8:
            func_D4F8(); break;
        case 0xD4F9:
            func_D4F9(); break;
        case 0xF8C5:
            func_F8C5(); break;
        case 0xF8C6:
            func_F8C6(); break;
        case 0xDDA6:
            func_DDA6(); break;
        case 0xFAE5:
            func_FAE5(); break;
        case 0xFAE6:
            func_FAE6(); break;
        case 0xDC99:
            func_DC99(); break;
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
        case 0xDE5F:
            func_DE5F(); break;
        case 0xD06C:
            func_D06C(); break;
        case 0xDE72:
            func_DE72(); break;
        case 0xDE73:
            func_DE73(); break;
        case 0xDE86:
            func_DE86(); break;
        case 0xDE87:
            func_DE87(); break;
        case 0xDE9A:
            func_DE9A(); break;
        case 0xDE9B:
            func_DE9B(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD091:
            func_D091(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xE6A1:
            func_E6A1(); break;
        case 0xD9B6:
            func_D9B6(); break;
        case 0xDF27:
            func_DF27(); break;
        case 0xDF28:
            func_DF28(); break;
        case 0xD0DF:
            func_D0DF(); break;
        case 0xF938:
            func_F938(); break;
        case 0xDF1B:
            func_DF1B(); break;
        case 0xC01D:
            func_C01D(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xC014:
            func_C014(); break;
        case 0xC015:
            func_C015(); break;
        case 0xCD07:
            func_CD07(); break;
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
        case 0xEE8E:
            func_EE8E(); break;
        case 0xEC85:
            func_EC85(); break;
        case 0xE0FF:
            func_E0FF(); break;
        case 0xFCE5:
            func_FCE5(); break;
        case 0xFCE6:
            func_FCE6(); break;
        case 0xC62D:
            func_C62D(); break;
        case 0xCD10:
            func_CD10(); break;
        case 0xCD11:
            func_CD11(); break;
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
        case 0xC720:
            func_C720(); break;
        case 0xC721:
            func_C721(); break;
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
        case 0xC6FB:
            func_C6FB(); break;
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
        case 0xC6E8:
            func_C6E8(); break;
        case 0xC6E9:
            func_C6E9(); break;
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
        case 0xC6F0:
            func_C6F0(); break;
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
        case 0xC6F3:
            func_C6F3(); break;
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
        case 0xC8C6:
            func_C8C6(); break;
        case 0xC8C7:
            func_C8C7(); break;
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
        case 0xD30A:
            func_D30A(); break;
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
        case 0xDF2A:
            func_DF2A(); break;
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
        case 0xDCB5:
            func_DCB5(); break;
        case 0xDC95:
            func_DC95(); break;
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
        case 0xDD15:
            func_DD15(); break;
        case 0xDD16:
            func_DD16(); break;
        case 0xC398:
            func_C398(); break;
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
        case 0x9009:
            switch (g_current_bank) {
                case 0: func_9009_b0(); break;
                case 1: func_9009_b1(); break;
                case 2: func_9009_b2(); break;
                case 3: func_9009_b3(); break;
                case 4: func_9009_b4(); break;
                case 5: func_9009_b5(); break;
                case 6: func_9009_b6(); break;
                case 7: func_9009_b7(); break;
                case 8: func_9009_b8(); break;
                case 9: func_9009_b9(); break;
                case 10: func_9009_b10(); break;
                case 11: func_9009_b11(); break;
                case 12: func_9009_b12(); break;
                case 13: func_9009_b13(); break;
                case 14: func_9009_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0xC498:
            func_C498(); break;
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
        case 0xC6C5:
            func_C6C5(); break;
        case 0xC681:
            func_C681(); break;
        case 0xC6CD:
            func_C6CD(); break;
        case 0xC6D1:
            func_C6D1(); break;
        case 0xF102:
            func_F102(); break;
        case 0xF989:
            func_F989(); break;
        case 0xC6EE:
            func_C6EE(); break;
        case 0xE09D:
            func_E09D(); break;
        case 0xF28B:
            func_F28B(); break;
        case 0xF230:
            func_F230(); break;
        case 0xF2A1:
            func_F2A1(); break;
        case 0xE489:
            func_E489(); break;
        case 0xE41A:
            func_E41A(); break;
        case 0xE425:
            func_E425(); break;
        case 0xF0BB:
            func_F0BB(); break;
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
        case 0xC6F1:
            func_C6F1(); break;
        case 0xE5D4:
            func_E5D4(); break;
        case 0xFB89:
            func_FB89(); break;
        case 0x81BD:
            switch (g_current_bank) {
                case 15: func_C1BD(); break;
                case 0: func_81BD_b0(); break;
                case 1: func_81BD_b1(); break;
                case 2: func_81BD_b2(); break;
                case 3: func_81BD_b3(); break;
                case 4: func_81BD_b4(); break;
                case 5: func_81BD_b5(); break;
                case 6: func_81BD_b6(); break;
                case 7: func_81BD_b7(); break;
                case 8: func_81BD_b8(); break;
                case 9: func_81BD_b9(); break;
                case 10: func_81BD_b10(); break;
                case 11: func_81BD_b11(); break;
                case 12: func_81BD_b12(); break;
                case 13: func_81BD_b13(); break;
                case 14: func_81BD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xC62A:
            func_C62A(); break;
        case 0xCD86:
            func_CD86(); break;
        case 0xFCFC:
            func_FCFC(); break;
        case 0xCE5E:
            func_CE5E(); break;
        case 0xCE35:
            func_CE35(); break;
        case 0xD48A:
            func_D48A(); break;
        case 0xD4AF:
            func_D4AF(); break;
        case 0xD4C7:
            func_D4C7(); break;
        case 0xD78B:
            func_D78B(); break;
        case 0xF03F:
            func_F03F(); break;
        case 0xC5E8:
            func_C5E8(); break;
        case 0xEDCF:
            func_EDCF(); break;
        case 0xCDC5:
            func_CDC5(); break;
        case 0x82BC:
            switch (g_current_bank) {
                case 0: func_82BC_b0(); break;
                case 1: func_82BC_b1(); break;
                case 2: func_82BC_b2(); break;
                case 3: func_82BC_b3(); break;
                case 4: func_82BC_b4(); break;
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
                case 0: func_B9A5_b0(); break;
                case 1: func_B9A5_b1(); break;
                case 2: func_B9A5_b2(); break;
                case 3: func_B9A5_b3(); break;
                case 4: func_B9A5_b4(); break;
                case 5: func_B9A5_b5(); break;
                case 6: func_B9A5_b6(); break;
                case 7: func_B9A5_b7(); break;
                case 8: func_B9A5_b8(); break;
                case 9: func_B9A5_b9(); break;
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
                case 10: func_AD05_b10(); break;
                case 11: func_AD05_b11(); break;
                case 12: func_AD05_b12(); break;
                case 13: func_AD05_b13(); break;
                case 14: func_AD05_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9905:
            switch (g_current_bank) {
                case 0: func_9905_b0(); break;
                case 1: func_9905_b1(); break;
                case 2: func_9905_b2(); break;
                case 3: func_9905_b3(); break;
                case 4: func_9905_b4(); break;
                case 5: func_9905_b5(); break;
                case 6: func_9905_b6(); break;
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
        case 0xFA5D:
            func_FA5D(); break;
        case 0xEF58:
            func_EF58(); break;
        case 0xD982:
            func_D982(); break;
        case 0xC1BE:
            func_C1BE(); break;
        case 0xC070:
            func_C070(); break;
        case 0xDDA5:
            func_DDA5(); break;
        case 0xED99:
            func_ED99(); break;
        case 0xEB97:
            func_EB97(); break;
        case 0xD9ED:
            func_D9ED(); break;
        case 0xD97B:
            func_D97B(); break;
        case 0xCFAA:
            func_CFAA(); break;
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
        case 0xE902:
            func_E902(); break;
        case 0xE906:
            func_E906(); break;
        case 0xF3A9:
            func_F3A9(); break;
        case 0xBFFA:
            func_BFFA_b15(); break;
        case 0xC6E4:
            func_C6E4(); break;
        case 0xC6EC:
            func_C6EC(); break;
        case 0xC3FB:
            func_C3FB(); break;
        case 0xC853:
            func_C853(); break;
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
                case 4: func_809D_b4(); break;
                case 5: func_809D_b5(); break;
                case 6: func_809D_b6(); break;
                case 7: func_809D_b7(); break;
                case 8: func_809D_b8(); break;
                case 9: func_809D_b9(); break;
                case 10: func_809D_b10(); break;
                case 11: func_809D_b11(); break;
                case 12: func_809D_b12(); break;
                case 13: func_809D_b13(); break;
                case 14: func_809D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xF6DF:
            func_F6DF(); break;
        case 0xF067:
            func_F067(); break;
        case 0xF37B:
            func_F37B(); break;
        case 0x90B4:
            func_90B4_b12(); break;
        case 0xA393:
            func_A393_b2(); break;
        case 0xA319:
            func_A319_b3(); break;
        case 0x84A0:
            func_84A0_b4(); break;
        case 0x811A:
            func_811A_b5(); break;
        case 0x81AD:
            func_81AD_b5(); break;
        case 0x80CB:
            func_80CB_b5(); break;
        case 0x8603:
            switch (g_current_bank) {
                case 15: func_C603(); break;
                case 5: func_8603_b5(); break;
                case 3: func_8603_b3(); break;
                case 14: func_8603_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x823D:
            func_823D_b5(); break;
        case 0x83A8:
            func_83A8_b5(); break;
        case 0x83E7:
            func_83E7_b5(); break;
        case 0x83EA:
            switch (g_current_bank) {
                case 5: func_83EA_b5(); break;
                case 6: func_83EA_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x861B:
            func_861B_b5(); break;
        case 0x82E2:
            func_82E2_b5(); break;
        case 0x8D05:
            func_8D05_b7(); break;
        case 0xA004:
            func_A004_b13(); break;
        case 0xEA31:
            func_EA31(); break;
        case 0x81B5:
            func_81B5_b1(); break;
        case 0xA251:
            func_A251_b1(); break;
        case 0xA1AA:
            func_A1AA_b1(); break;
        case 0xB904:
            func_B904_b3(); break;
        case 0x81BA:
            func_81BA_b6(); break;
        case 0x818D:
            switch (g_current_bank) {
                case 15: func_C18D(); break;
                case 13: func_818D_b13(); break;
                case 6: func_818D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA3FB:
            func_A3FB_b2(); break;
        case 0x82B9:
            func_82B9_b10(); break;
        case 0xF8F0:
            func_F8F0(); break;
        case 0x8008:
            switch (g_current_bank) {
                case 10: func_8008_b10(); break;
                case 0: func_8008_b0(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xACBA:
            func_ACBA_b0(); break;
        case 0xACBE:
            func_ACBE_b0(); break;
        case 0xACA9:
            func_ACA9_b0(); break;
        case 0xACAB:
            switch (g_current_bank) {
                case 0: func_ACAB_b0(); break;
                case 9: func_ACAB_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
            func_AC96_b2(); break;
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
            func_B020_b4(); break;
        case 0xB458:
            func_B458_b5(); break;
        case 0xAC9D:
            func_AC9D_b5(); break;
        case 0xACDA:
            func_ACDA_b5(); break;
        case 0xACB4:
            func_ACB4_b5(); break;
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
                case 13: func_ACFA_b13(); break;
                case 12: func_ACFA_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8CC0:
            switch (g_current_bank) {
                case 13: func_8CC0_b13(); break;
                case 7: func_8CC0_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8802:
            switch (g_current_bank) {
                case 13: func_8802_b13(); break;
                case 11: func_8802_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x98D2:
            func_98D2_b2(); break;
        case 0x98C7:
            func_98C7_b2(); break;
        case 0x8EC0:
            func_8EC0_b6(); break;
        case 0xA8FF:
            func_A8FF_b6(); break;
        case 0x93A8:
            func_93A8_b6(); break;
        case 0x9BC0:
            func_9BC0_b6(); break;
        case 0x9DBD:
            func_9DBD_b6(); break;
        case 0xA1A8:
            switch (g_current_bank) {
                case 6: func_A1A8_b6(); break;
                case 14: func_A1A8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xABC0:
            switch (g_current_bank) {
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
        case 0xD94D:
            func_D94D(); break;
        case 0x809B:
            func_809B_b6(); break;
        case 0x808C:
            func_808C_b11(); break;
        case 0xA3E7:
            func_A3E7_b3(); break;
        case 0xA301:
            func_A301_b3(); break;
        case 0xA34A:
            func_A34A_b3(); break;
        case 0xA333:
            func_A333_b3(); break;
        case 0xFFFF:
            func_FFFF(); break;
        case 0xB011:
            func_B011_b2(); break;
        case 0xA561:
            func_A561_b2(); break;
        case 0xA1B4:
            func_A1B4_b2(); break;
        case 0xA360:
            func_A360_b2(); break;
        case 0xA50E:
            func_A50E_b2(); break;
        case 0xA68E:
            func_A68E_b2(); break;
        case 0xA796:
            func_A796_b2(); break;
        case 0xA7BE:
            func_A7BE_b2(); break;
        case 0xA87D:
            func_A87D_b2(); break;
        case 0xA12C:
            func_A12C_b2(); break;
        case 0xA1CF:
            func_A1CF_b2(); break;
        case 0xA38B:
            func_A38B_b2(); break;
        case 0xA422:
            func_A422_b2(); break;
        case 0xA549:
            func_A549_b2(); break;
        case 0xA632:
            func_A632_b2(); break;
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
            func_A42D_b3(); break;
        case 0xA485:
            func_A485_b3(); break;
        case 0xA553:
            func_A553_b2(); break;
        case 0xA7A6:
            func_A7A6_b2(); break;
        case 0xA80C:
            func_A80C_b2(); break;
        case 0xA833:
            func_A833_b2(); break;
        case 0xA8C7:
            func_A8C7_b2(); break;
        case 0xA908:
            func_A908_b2(); break;
        case 0xA921:
            func_A921_b2(); break;
        case 0xA123:
            func_A123_b6(); break;
        case 0xA86F:
            func_A86F_b2(); break;
        case 0xA0E2:
            func_A0E2_b6(); break;
        case 0xA09D:
            func_A09D_b6(); break;
        case 0x9690:
            func_9690_b0(); break;
        case 0x9494:
            func_9494_b0(); break;
        case 0x9696:
            func_9696_b0(); break;
        case 0x94B4:
            func_94B4_b0(); break;
        case 0x94D4:
            func_94D4_b0(); break;
        case 0xAAFF:
            func_AAFF_b0(); break;
        case 0xAB7F:
            func_AB7F_b0(); break;
        case 0xB4B2:
            func_B4B2_b0(); break;
        case 0xB6A1:
            func_B6A1_b0(); break;
        case 0xA6B7:
            func_A6B7_b0(); break;
        case 0xB6B6:
            switch (g_current_bank) {
                case 0: func_B6B6_b0(); break;
                case 12: func_B6B6_b12(); break;
                case 14: func_B6B6_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B5:
            func_85B5_b0(); break;
        case 0xB6A6:
            func_B6A6_b0(); break;
        case 0xB6B7:
            func_B6B7_b0(); break;
        case 0xA9E3:
            func_A9E3_b1(); break;
        case 0x8505:
            switch (g_current_bank) {
                case 15: func_C505(); break;
                case 1: func_8505_b1(); break;
                case 3: func_8505_b3(); break;
                case 11: func_8505_b11(); break;
                case 14: func_8505_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA600:
            func_A600_b1(); break;
        case 0xA0B4:
            func_A0B4_b1(); break;
        case 0xA8A7:
            func_A8A7_b1(); break;
        case 0xA8A8:
            switch (g_current_bank) {
                case 1: func_A8A8_b1(); break;
                case 12: func_A8A8_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA00D:
            switch (g_current_bank) {
                case 1: func_A00D_b1(); break;
                case 6: func_A00D_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8404:
            switch (g_current_bank) {
                case 15: func_C404(); break;
                case 1: func_8404_b1(); break;
                case 6: func_8404_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA00E:
            func_A00E_b1(); break;
        case 0xB91F:
            func_B91F_b1(); break;
        case 0x8501:
            switch (g_current_bank) {
                case 15: func_C501(); break;
                case 1: func_8501_b1(); break;
                case 11: func_8501_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8531:
            func_8531_b1(); break;
        case 0x8523:
            switch (g_current_bank) {
                case 1: func_8523_b1(); break;
                case 11: func_8523_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA92E:
            switch (g_current_bank) {
                case 1: func_A92E_b1(); break;
                case 11: func_A92E_b11(); break;
                case 3: func_A92E_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA980:
            switch (g_current_bank) {
                case 1: func_A980_b1(); break;
                case 11: func_A980_b11(); break;
                case 14: func_A980_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x851A:
            func_851A_b1(); break;
        case 0xA5F4:
            func_A5F4_b1(); break;
        case 0x8522:
            switch (g_current_bank) {
                case 1: func_8522_b1(); break;
                case 3: func_8522_b3(); break;
                case 14: func_8522_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA960:
            switch (g_current_bank) {
                case 15: func_E960(); break;
                case 1: func_A960_b1(); break;
                case 14: func_A960_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8502:
            switch (g_current_bank) {
                case 15: func_C502(); break;
                case 1: func_8502_b1(); break;
                case 2: func_8502_b2(); break;
                case 3: func_8502_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA930:
            switch (g_current_bank) {
                case 1: func_A930_b1(); break;
                case 14: func_A930_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8514:
            func_8514_b1(); break;
        case 0xA933:
            func_A933_b1(); break;
        case 0xA95A:
            switch (g_current_bank) {
                case 1: func_A95A_b1(); break;
                case 2: func_A95A_b2(); break;
                case 3: func_A95A_b3(); break;
                case 14: func_A95A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8540:
            func_8540_b1(); break;
        case 0xA910:
            switch (g_current_bank) {
                case 1: func_A910_b1(); break;
                case 2: func_A910_b2(); break;
                case 14: func_A910_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8504:
            switch (g_current_bank) {
                case 15: func_C504(); break;
                case 1: func_8504_b1(); break;
                case 2: func_8504_b2(); break;
                case 3: func_8504_b3(); break;
                case 14: func_8504_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA923:
            switch (g_current_bank) {
                case 1: func_A923_b1(); break;
                case 2: func_A923_b2(); break;
                case 14: func_A923_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D00:
            switch (g_current_bank) {
                case 1: func_8D00_b1(); break;
                case 2: func_8D00_b2(); break;
                case 14: func_8D00_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA92A:
            switch (g_current_bank) {
                case 1: func_A92A_b1(); break;
                case 3: func_A92A_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D01:
            switch (g_current_bank) {
                case 1: func_8D01_b1(); break;
                case 11: func_8D01_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x808D:
            switch (g_current_bank) {
                case 1: func_808D_b1(); break;
                case 2: func_808D_b2(); break;
                case 3: func_808D_b3(); break;
                case 14: func_808D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA903:
            switch (g_current_bank) {
                case 15: func_E903(); break;
                case 1: func_A903_b1(); break;
                case 14: func_A903_b14(); break;
                case 3: func_A903_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA90E:
            func_A90E_b1(); break;
        case 0x8D10:
            func_8D10_b1(); break;
        case 0x81FB:
            switch (g_current_bank) {
                case 1: func_81FB_b1(); break;
                case 9: func_81FB_b9(); break;
                case 14: func_81FB_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB26E:
            switch (g_current_bank) {
                case 1: func_B26E_b1(); break;
                case 9: func_B26E_b9(); break;
                case 14: func_B26E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x82AD:
            switch (g_current_bank) {
                case 1: func_82AD_b1(); break;
                case 9: func_82AD_b9(); break;
                case 14: func_82AD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x93EF:
            switch (g_current_bank) {
                case 1: func_93EF_b1(); break;
                case 9: func_93EF_b9(); break;
                case 14: func_93EF_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA905:
            switch (g_current_bank) {
                case 2: func_A905_b2(); break;
                case 11: func_A905_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8500:
            switch (g_current_bank) {
                case 2: func_8500_b2(); break;
                case 3: func_8500_b3(); break;
                case 6: func_8500_b6(); break;
                case 9: func_8500_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA902:
            switch (g_current_bank) {
                case 15: func_E902(); break;
                case 2: func_A902_b2(); break;
                case 3: func_A902_b3(); break;
                case 14: func_A902_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA09F:
            switch (g_current_bank) {
                case 2: func_A09F_b2(); break;
                case 7: func_A09F_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA120:
            func_A120_b2(); break;
        case 0xA232:
            func_A232_b2(); break;
        case 0xA3A3:
            switch (g_current_bank) {
                case 2: func_A3A3_b2(); break;
                case 3: func_A3A3_b3(); break;
                case 7: func_A3A3_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8381:
            func_8381_b2(); break;
        case 0x8481:
            func_8481_b2(); break;
        case 0x8185:
            func_8185_b2(); break;
        case 0x8681:
            func_8681_b2(); break;
        case 0x8387:
            func_8387_b2(); break;
        case 0x8300:
            func_8300_b2(); break;
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
        case 0xAEB5:
            func_AEB5_b2(); break;
        case 0x809F:
            func_809F_b2(); break;
        case 0x8800:
            func_8800_b2(); break;
        case 0x8881:
            switch (g_current_bank) {
                case 2: func_8881_b2(); break;
                case 3: func_8881_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8292:
            func_8292_b2(); break;
        case 0xAC00:
            func_AC00_b2(); break;
        case 0x85FF:
            switch (g_current_bank) {
                case 2: func_85FF_b2(); break;
                case 11: func_85FF_b11(); break;
                case 6: func_85FF_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA929:
            switch (g_current_bank) {
                case 2: func_A929_b2(); break;
                case 3: func_A929_b3(); break;
                case 11: func_A929_b11(); break;
                case 14: func_A929_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x851F:
            switch (g_current_bank) {
                case 2: func_851F_b2(); break;
                case 11: func_851F_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA924:
            func_A924_b2(); break;
        case 0x8571:
            switch (g_current_bank) {
                case 2: func_8571_b2(); break;
                case 3: func_8571_b3(); break;
                case 6: func_8571_b6(); break;
                case 9: func_8571_b9(); break;
                case 11: func_8571_b11(); break;
                case 14: func_8571_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8572:
            switch (g_current_bank) {
                case 2: func_8572_b2(); break;
                case 3: func_8572_b3(); break;
                case 11: func_8572_b11(); break;
                case 14: func_8572_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85F8:
            switch (g_current_bank) {
                case 2: func_85F8_b2(); break;
                case 6: func_85F8_b6(); break;
                case 14: func_85F8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8518:
            func_8518_b2(); break;
        case 0x8385:
            func_8385_b2(); break;
        case 0x8601:
            func_8601_b2(); break;
        case 0x8701:
            func_8701_b2(); break;
        case 0x8801:
            func_8801_b2(); break;
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
        case 0xA918:
            func_A918_b2(); break;
        case 0x856A:
            switch (g_current_bank) {
                case 2: func_856A_b2(); break;
                case 6: func_856A_b6(); break;
                case 14: func_856A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8503:
            switch (g_current_bank) {
                case 15: func_C503(); break;
                case 2: func_8503_b2(); break;
                case 3: func_8503_b3(); break;
                case 6: func_8503_b6(); break;
                case 9: func_8503_b9(); break;
                case 14: func_8503_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x852B:
            switch (g_current_bank) {
                case 15: func_C52B(); break;
                case 2: func_852B_b2(); break;
                case 3: func_852B_b3(); break;
                case 14: func_852B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8520:
            switch (g_current_bank) {
                case 2: func_8520_b2(); break;
                case 3: func_8520_b3(); break;
                case 14: func_8520_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA901:
            switch (g_current_bank) {
                case 2: func_A901_b2(); break;
                case 11: func_A901_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8510:
            switch (g_current_bank) {
                case 15: func_C510(); break;
                case 2: func_8510_b2(); break;
                case 3: func_8510_b3(); break;
                case 11: func_8510_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA52E:
            func_A52E_b2(); break;
        case 0xA202:
            func_A202_b2(); break;
        case 0x86FF:
            func_86FF_b2(); break;
        case 0xA912:
            func_A912_b2(); break;
        case 0xA58D:
            func_A58D_b2(); break;
        case 0xA907:
            switch (g_current_bank) {
                case 2: func_A907_b2(); break;
                case 6: func_A907_b6(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA403:
            func_A403_b2(); break;
        case 0x85E7:
            func_85E7_b2(); break;
        case 0xA606:
            func_A606_b2(); break;
        case 0xA0E8:
            switch (g_current_bank) {
                case 15: func_E0E8(); break;
                case 2: func_A0E8_b2(); break;
                case 3: func_A0E8_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8403:
            switch (g_current_bank) {
                case 2: func_8403_b2(); break;
                case 3: func_8403_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA410:
            switch (g_current_bank) {
                case 2: func_A410_b2(); break;
                case 3: func_A410_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA904:
            switch (g_current_bank) {
                case 15: func_E904(); break;
                case 2: func_A904_b2(); break;
                case 14: func_A904_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA506:
            func_A506_b2(); break;
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
        case 0x847B:
            func_847B_b2(); break;
        case 0x841F:
            func_841F_b2(); break;
        case 0xB901:
            func_B901_b2(); break;
        case 0x844C:
            func_844C_b2(); break;
        case 0xA936:
            switch (g_current_bank) {
                case 3: func_A936_b3(); break;
                case 14: func_A936_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA7A7:
            func_A7A7_b3(); break;
        case 0xA3A2:
            switch (g_current_bank) {
                case 3: func_A3A2_b3(); break;
                case 5: func_A3A2_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA4A3:
            switch (g_current_bank) {
                case 3: func_A4A3_b3(); break;
                case 5: func_A4A3_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2BA:
            func_A2BA_b3(); break;
        case 0xA46D:
            func_A46D_b3(); break;
        case 0xAC6D:
            func_AC6D_b3(); break;
        case 0x8085:
            switch (g_current_bank) {
                case 3: func_8085_b3(); break;
                case 11: func_8085_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8786:
            func_8786_b3(); break;
        case 0x8E8D:
            switch (g_current_bank) {
                case 15: func_CE8D(); break;
                case 3: func_8E8D_b3(); break;
                case 14: func_8E8D_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8082:
            func_8082_b3(); break;
        case 0x81C7:
            func_81C7_b3(); break;
        case 0x8584:
            func_8584_b3(); break;
        case 0x8086:
            func_8086_b3(); break;
        case 0x8281:
            switch (g_current_bank) {
                case 3: func_8281_b3(); break;
                case 9: func_8281_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x801F:
            func_801F_b3(); break;
        case 0xA90F:
            func_A90F_b3(); break;
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
        case 0x8515:
            switch (g_current_bank) {
                case 3: func_8515_b3(); break;
                case 11: func_8515_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA215:
            func_A215_b3(); break;
        case 0xB501:
            func_B501_b3(); break;
        case 0xA814:
            func_A814_b3(); break;
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
                case 14: func_85EE_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5F8:
            switch (g_current_bank) {
                case 15: func_E5F8(); break;
                case 3: func_A5F8_b3(); break;
                case 14: func_A5F8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x855A:
            switch (g_current_bank) {
                case 3: func_855A_b3(); break;
                case 6: func_855A_b6(); break;
                case 9: func_855A_b9(); break;
                case 11: func_855A_b11(); break;
                case 14: func_855A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA948:
            switch (g_current_bank) {
                case 3: func_A948_b3(); break;
                case 14: func_A948_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8574:
            switch (g_current_bank) {
                case 3: func_8574_b3(); break;
                case 6: func_8574_b6(); break;
                case 14: func_8574_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80A9:
            switch (g_current_bank) {
                case 15: func_C0A9(); break;
                case 3: func_80A9_b3(); break;
                case 11: func_80A9_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA900:
            switch (g_current_bank) {
                case 3: func_A900_b3(); break;
                case 14: func_A900_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0FA:
            switch (g_current_bank) {
                case 3: func_B0FA_b3(); break;
                case 14: func_B0FA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA906:
            func_A906_b3(); break;
        case 0x85EF:
            func_85EF_b3(); break;
        case 0x852C:
            func_852C_b3(); break;
        case 0x852D:
            func_852D_b3(); break;
        case 0xA55A:
            func_A55A_b3(); break;
        case 0x8576:
            switch (g_current_bank) {
                case 3: func_8576_b3(); break;
                case 14: func_8576_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B3:
            switch (g_current_bank) {
                case 3: func_85B3_b3(); break;
                case 6: func_85B3_b6(); break;
                case 9: func_85B3_b9(); break;
                case 14: func_85B3_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85E8:
            switch (g_current_bank) {
                case 15: func_C5E8(); break;
                case 3: func_85E8_b3(); break;
                case 14: func_85E8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA504:
            switch (g_current_bank) {
                case 15: func_E504(); break;
                case 3: func_A504_b3(); break;
                case 14: func_A504_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A48:
            func_8A48_b3(); break;
        case 0xA541:
            func_A541_b3(); break;
        case 0xA5FD:
            switch (g_current_bank) {
                case 3: func_A5FD_b3(); break;
                case 14: func_A5FD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA502:
            func_A502_b3(); break;
        case 0xA29A:
            switch (g_current_bank) {
                case 3: func_A29A_b3(); break;
                case 14: func_A29A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8600:
            switch (g_current_bank) {
                case 15: func_C600(); break;
                case 3: func_8600_b3(); break;
                case 14: func_8600_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA090:
            switch (g_current_bank) {
                case 3: func_A090_b3(); break;
                case 14: func_A090_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB504:
            switch (g_current_bank) {
                case 3: func_B504_b3(); break;
                case 14: func_B504_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA5FF:
            switch (g_current_bank) {
                case 3: func_A5FF_b3(); break;
                case 5: func_A5FF_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9593:
            switch (g_current_bank) {
                case 3: func_9593_b3(); break;
                case 5: func_9593_b5(); break;
                case 14: func_9593_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA582:
            switch (g_current_bank) {
                case 3: func_A582_b3(); break;
                case 5: func_A582_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9594:
            switch (g_current_bank) {
                case 3: func_9594_b3(); break;
                case 5: func_9594_b5(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA983:
            func_A983_b3(); break;
        case 0x9508:
            func_9508_b3(); break;
        case 0xA981:
            switch (g_current_bank) {
                case 3: func_A981_b3(); break;
                case 14: func_A981_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9501:
            switch (g_current_bank) {
                case 3: func_9501_b3(); break;
                case 14: func_9501_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D8D:
            func_8D8D_b4(); break;
        case 0xBAB7:
            func_BAB7_b5(); break;
        case 0xA4A6:
            func_A4A6_b5(); break;
        case 0xACAC:
            func_ACAC_b5(); break;
        case 0xA5A4:
            switch (g_current_bank) {
                case 5: func_A5A4_b5(); break;
                case 12: func_A5A4_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B1:
            switch (g_current_bank) {
                case 6: func_85B1_b6(); break;
                case 9: func_85B1_b9(); break;
                case 14: func_85B1_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B2:
            switch (g_current_bank) {
                case 6: func_85B2_b6(); break;
                case 9: func_85B2_b9(); break;
                case 14: func_85B2_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB1B1:
            func_B1B1_b6(); break;
        case 0x85AA:
            switch (g_current_bank) {
                case 6: func_85AA_b6(); break;
                case 14: func_85AA_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x860F:
            func_860F_b6(); break;
        case 0x859E:
            switch (g_current_bank) {
                case 15: func_C59E(); break;
                case 6: func_859E_b6(); break;
                case 9: func_859E_b9(); break;
                case 14: func_859E_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x859F:
            switch (g_current_bank) {
                case 6: func_859F_b6(); break;
                case 9: func_859F_b9(); break;
                case 14: func_859F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x856B:
            switch (g_current_bank) {
                case 6: func_856B_b6(); break;
                case 14: func_856B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8D09:
            func_8D09_b6(); break;
        case 0xA1A1:
            func_A1A1_b7(); break;
        case 0xA2A2:
            switch (g_current_bank) {
                case 7: func_A2A2_b7(); break;
                case 10: func_A2A2_b10(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA222:
            func_A222_b7(); break;
        case 0x9C9B:
            switch (g_current_bank) {
                case 7: func_9C9B_b7(); break;
                case 9: func_9C9B_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C9D:
            func_9C9D_b7(); break;
        case 0x9D9C:
            func_9D9C_b7(); break;
        case 0x9E9C:
            func_9E9C_b7(); break;
        case 0xB39F:
            func_B39F_b7(); break;
        case 0xB4B4:
            func_B4B4_b7(); break;
        case 0xB6B5:
            switch (g_current_bank) {
                case 7: func_B6B5_b7(); break;
                case 12: func_B6B5_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB058:
            func_B058_b8(); break;
        case 0x80B0:
            func_80B0_b8(); break;
        case 0x8080:
            switch (g_current_bank) {
                case 15: func_C080(); break;
                case 8: func_8080_b8(); break;
                case 9: func_8080_b9(); break;
                case 0: func_8080_b0(); break;
                case 7: func_8080_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80D0:
            func_80D0_b8(); break;
        case 0xB0C0:
            switch (g_current_bank) {
                case 15: func_F0C0(); break;
                case 8: func_B0C0_b8(); break;
                case 14: func_B0C0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0B0:
            switch (g_current_bank) {
                case 8: func_B0B0_b8(); break;
                case 14: func_B0B0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xB0A0:
            switch (g_current_bank) {
                case 15: func_F0A0(); break;
                case 8: func_B0A0_b8(); break;
                case 14: func_B0A0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x888F:
            switch (g_current_bank) {
                case 9: func_888F_b9(); break;
                case 11: func_888F_b11(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9080:
            func_9080_b9(); break;
        case 0x9180:
            func_9180_b9(); break;
        case 0x9A92:
            func_9A92_b9(); break;
        case 0x939B:
            switch (g_current_bank) {
                case 9: func_939B_b9(); break;
                case 12: func_939B_b12(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9C94:
            func_9C94_b9(); break;
        case 0x959D:
            func_959D_b9(); break;
        case 0x9E96:
            func_9E96_b9(); break;
        case 0xB3B2:
            func_B3B2_b9(); break;
        case 0xB5B4:
            func_B5B4_b9(); break;
        case 0x80EB:
            func_80EB_b9(); break;
        case 0x807F:
            func_807F_b9(); break;
        case 0x8483:
            func_8483_b9(); break;
        case 0x8685:
            switch (g_current_bank) {
                case 9: func_8685_b9(); break;
                case 14: func_8685_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8887:
            switch (g_current_bank) {
                case 9: func_8887_b9(); break;
                case 14: func_8887_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8A89:
            func_8A89_b9(); break;
        case 0x8C8B:
            switch (g_current_bank) {
                case 9: func_8C8B_b9(); break;
                case 10: func_8C8B_b10(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9269:
            func_9269_b9(); break;
        case 0x9369:
            func_9369_b9(); break;
        case 0x9393:
            func_9393_b9(); break;
        case 0x9600:
            func_9600_b9(); break;
        case 0x9897:
            func_9897_b9(); break;
        case 0x9A99:
            func_9A99_b9(); break;
        case 0x85A0:
            switch (g_current_bank) {
                case 9: func_85A0_b9(); break;
                case 14: func_85A0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85B4:
            switch (g_current_bank) {
                case 9: func_85B4_b9(); break;
                case 14: func_85B4_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85A1:
            switch (g_current_bank) {
                case 9: func_85A1_b9(); break;
                case 14: func_85A1_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA2A1:
            func_A2A1_b10(); break;
        case 0x8988:
            switch (g_current_bank) {
                case 10: func_8988_b10(); break;
                case 13: func_8988_b13(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8989:
            switch (g_current_bank) {
                case 10: func_8989_b10(); break;
                case 13: func_8989_b13(); break;
                case 14: func_8989_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8B8A:
            func_8B8A_b10(); break;
        case 0x8B8B:
            switch (g_current_bank) {
                case 10: func_8B8B_b10(); break;
                case 14: func_8B8B_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x8C8C:
            func_8C8C_b10(); break;
        case 0x82D6:
            func_82D6_b10(); break;
        case 0x82C5:
            func_82C5_b10(); break;
        case 0x82D5:
            func_82D5_b10(); break;
        case 0x82C4:
            func_82C4_b10(); break;
        case 0x82D7:
            func_82D7_b10(); break;
        case 0x81C5:
            func_81C5_b11(); break;
        case 0x821E:
            func_821E_b11(); break;
        case 0x8226:
            func_8226_b11(); break;
        case 0x822D:
            func_822D_b11(); break;
        case 0x8234:
            func_8234_b11(); break;
        case 0x824A:
            func_824A_b11(); break;
        case 0x85CE:
            func_85CE_b11(); break;
        case 0x85D0:
            switch (g_current_bank) {
                case 11: func_85D0_b11(); break;
                case 14: func_85D0_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x85D1:
            func_85D1_b11(); break;
        case 0x85D7:
            func_85D7_b11(); break;
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
        case 0x84D9:
            func_84D9_b11(); break;
        case 0x84DD:
            func_84DD_b11(); break;
        case 0x84E1:
            func_84E1_b11(); break;
        case 0x84E8:
            func_84E8_b11(); break;
        case 0x84F1:
            func_84F1_b11(); break;
        case 0x84FF:
            func_84FF_b11(); break;
        case 0x851B:
            func_851B_b11(); break;
        case 0x8527:
            func_8527_b11(); break;
        case 0x8580:
            switch (g_current_bank) {
                case 11: func_8580_b11(); break;
                case 14: func_8580_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
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
        case 0x8888:
            func_8888_b11(); break;
        case 0x8886:
            func_8886_b11(); break;
        case 0x8880:
            func_8880_b11(); break;
        case 0x806F:
            func_806F_b11(); break;
        case 0xAD8B:
            func_AD8B_b11(); break;
        case 0x8388:
            func_8388_b11(); break;
        case 0x8F80:
            func_8F80_b11(); break;
        case 0x8383:
            func_8383_b11(); break;
        case 0x868D:
            func_868D_b11(); break;
        case 0x868B:
            func_868B_b11(); break;
        case 0x8689:
            func_8689_b11(); break;
        case 0x85B6:
            func_85B6_b11(); break;
        case 0x9373:
            func_9373_b11(); break;
        case 0x8090:
            func_8090_b11(); break;
        case 0x80AE:
            func_80AE_b11(); break;
        case 0x80AD:
            switch (g_current_bank) {
                case 15: func_C0AD(); break;
                case 11: func_80AD_b11(); break;
                case 14: func_80AD_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x80A6:
            func_80A6_b11(); break;
        case 0x80A7:
            func_80A7_b11(); break;
        case 0x87A9:
            func_87A9_b11(); break;
        case 0x8578:
            switch (g_current_bank) {
                case 11: func_8578_b11(); break;
                case 14: func_8578_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA9E8:
            switch (g_current_bank) {
                case 11: func_A9E8_b11(); break;
                case 14: func_A9E8_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x857A:
            switch (g_current_bank) {
                case 11: func_857A_b11(); break;
                case 14: func_857A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x90A9:
            func_90A9_b11(); break;
        case 0x8099:
            switch (g_current_bank) {
                case 15: func_C099(); break;
                case 11: func_8099_b11(); break;
                case 14: func_8099_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9900:
            func_9900_b11(); break;
        case 0x8605:
            func_8605_b11(); break;
        case 0x8406:
            func_8406_b11(); break;
        case 0xA507:
            func_A507_b11(); break;
        case 0xA503:
            func_A503_b11(); break;
        case 0x850A:
            switch (g_current_bank) {
                case 15: func_C50A(); break;
                case 11: func_850A_b11(); break;
                case 14: func_850A_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9490:
            func_9490_b12(); break;
        case 0x9B97:
            func_9B97_b12(); break;
        case 0x928F:
            func_928F_b12(); break;
        case 0x9996:
            func_9996_b12(); break;
        case 0x9591:
            func_9591_b12(); break;
        case 0x9598:
            func_9598_b12(); break;
        case 0x929D:
            func_929D_b12(); break;
        case 0x949D:
            func_949D_b12(); break;
        case 0x9B98:
            func_9B98_b12(); break;
        case 0x948F:
            switch (g_current_bank) {
                case 12: func_948F_b12(); break;
                case 14: func_948F_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9498:
            switch (g_current_bank) {
                case 12: func_9498_b12(); break;
                case 14: func_9498_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x918D:
            func_918D_b12(); break;
        case 0x9095:
            func_9095_b12(); break;
        case 0x9794:
            func_9794_b12(); break;
        case 0x929C:
            func_929C_b12(); break;
        case 0x9894:
            switch (g_current_bank) {
                case 15: func_D894(); break;
                case 12: func_9894_b12(); break;
                case 14: func_9894_b14(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x9602:
            func_9602_b12(); break;
        case 0x9B9C:
            func_9B9C_b12(); break;
        case 0x9899:
            func_9899_b12(); break;
        case 0x9694:
            func_9694_b12(); break;
        case 0xA5A5:
            func_A5A5_b12(); break;
        case 0xAAA9:
            func_AAA9_b12(); break;
        case 0xAAAA:
            func_AAAA_b12(); break;
        case 0xB8B7:
            func_B8B7_b12(); break;
        case 0xB8B8:
            func_B8B8_b12(); break;
        case 0xA9C8:
            func_A9C8_b12(); break;
        case 0x850C:
            func_850C_b12(); break;
        case 0xA9F4:
            func_A9F4_b12(); break;
        case 0x850E:
            func_850E_b12(); break;
        case 0x9191:
            func_9191_b13(); break;
        case 0x82EF:
            func_82EF_b13(); break;
        case 0x82F0:
            func_82F0_b13(); break;
        case 0x82F1:
            func_82F1_b13(); break;
        case 0x82EC:
            func_82EC_b13(); break;
        case 0x82ED:
            func_82ED_b13(); break;
        case 0x82EE:
            func_82EE_b13(); break;
        case 0x82F5:
            func_82F5_b13(); break;
        case 0x82F6:
            func_82F6_b13(); break;
        case 0x82F3:
            func_82F3_b13(); break;
        case 0x82F4:
            func_82F4_b13(); break;
        case 0xBE01:
            func_BE01_b13(); break;
        case 0x974C:
            func_974C_b14(); break;
        case 0x8555:
            func_8555_b14(); break;
        case 0x8506:
            func_8506_b14(); break;
        case 0xAFAD:
            func_AFAD_b14(); break;
        case 0x8583:
            func_8583_b14(); break;
        case 0xAD00:
            func_AD00_b14(); break;
        case 0x83BB:
            func_83BB_b14(); break;
        case 0xA9A7:
            func_A9A7_b14(); break;
        case 0x8D08:
            func_8D08_b14(); break;
        case 0xB4AD:
            func_B4AD_b14(); break;
        case 0x83C0:
            func_83C0_b14(); break;
        case 0xA6A3:
            func_A6A3_b14(); break;
        case 0xA1A7:
            func_A1A7_b14(); break;
        case 0xA1A9:
            func_A1A9_b14(); break;
        case 0x855D:
            func_855D_b14(); break;
        case 0x8A85:
            func_8A85_b14(); break;
        case 0x8B9D:
            func_8B9D_b14(); break;
        case 0x9F9F:
            func_9F9F_b14(); break;
        case 0x9796:
            func_9796_b14(); break;
        case 0x8D8F:
            func_8D8F_b14(); break;
        case 0x908D:
            func_908D_b14(); break;
        case 0xA990:
            func_A990_b14(); break;
        case 0x859A:
            func_859A_b14(); break;
        case 0xAA85:
            func_AA85_b14(); break;
        case 0x9BA6:
            func_9BA6_b14(); break;
        case 0x92A9:
            func_92A9_b14(); break;
        case 0x8E85:
            func_8E85_b14(); break;
        case 0x85B9:
            func_85B9_b14(); break;
        case 0x8585:
            func_8585_b14(); break;
        case 0xB5B5:
            func_B5B5_b14(); break;
        case 0xAAB5:
            func_AAB5_b14(); break;
        case 0x9599:
            func_9599_b14(); break;
        case 0xBBBB:
            func_BBBB_b14(); break;
        case 0x9F85:
            func_9F85_b14(); break;
        case 0xB885:
            func_B885_b14(); break;
        case 0xBEBD:
            func_BEBD_b14(); break;
        case 0x9585:
            func_9585_b14(); break;
        case 0xB891:
            func_B891_b14(); break;
        case 0xB985:
            func_B985_b14(); break;
        case 0xB991:
            func_B991_b14(); break;
        case 0xBF94:
            func_BF94_b14(); break;
        case 0x8A8A:
            func_8A8A_b14(); break;
        case 0xBBBA:
            func_BBBA_b14(); break;
        case 0xBDBC:
            func_BDBC_b14(); break;
        case 0xBBBD:
            func_BBBD_b14(); break;
        case 0xA0A0:
            func_A0A0_b14(); break;
        case 0xB002:
            func_B002_b14(); break;
        case 0xA92B:
            func_A92B_b14(); break;
        case 0x8630:
            func_8630_b14(); break;
        case 0x8BA9:
            switch (g_current_bank) {
                case 14: func_8BA9_b14(); break;
                case 3: func_8BA9_b3(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0x990C:
            func_990C_b14(); break;
        case 0x991B:
            func_991B_b14(); break;
        case 0x8509:
            func_8509_b14(); break;
        case 0x85B0:
            func_85B0_b14(); break;
        case 0x858E:
            func_858E_b14(); break;
        case 0xA9B3:
            func_A9B3_b14(); break;
        case 0xA9EC:
            func_A9EC_b14(); break;
        case 0xA955:
            func_A955_b14(); break;
        case 0x9D00:
            func_9D00_b14(); break;
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
        case 0x8558:
            func_8558_b14(); break;
        case 0x840F:
            func_840F_b14(); break;
        case 0xA40E:
            func_A40E_b14(); break;
        case 0xB90E:
            func_B90E_b14(); break;
        case 0x855E:
            func_855E_b14(); break;
        case 0xA97B:
            func_A97B_b14(); break;
        case 0xADE8:
            func_ADE8_b14(); break;
        case 0xAA81:
            func_AA81_b14(); break;
        case 0xA46F:
            func_A46F_b14(); break;
        case 0x859C:
            func_859C_b14(); break;
        case 0xA9A2:
            func_A9A2_b14(); break;
        case 0xB903:
            func_B903_b14(); break;
        case 0x9E85:
            func_9E85_b14(); break;
        case 0x9A20:
            func_9A20_b14(); break;
        case 0xA2F8:
            func_A2F8_b14(); break;
        case 0x9980:
            func_9980_b14(); break;
        case 0x9F03:
            func_9F03_b14(); break;
        case 0xA6B4:
            func_A6B4_b14(); break;
        case 0xA603:
            func_A603_b14(); break;
        case 0xA6D3:
            func_A6D3_b14(); break;
        case 0xB92A:
            func_B92A_b14(); break;
        case 0xA560:
            func_A560_b14(); break;
        case 0xA400:
            func_A400_b14(); break;
        case 0xA52B:
            func_A52B_b14(); break;
        case 0x8528:
            func_8528_b14(); break;
        case 0x8628:
            func_8628_b14(); break;
        case 0x9004:
            func_9004_b14(); break;
        case 0xB012:
            func_B012_b14(); break;
        case 0xA508:
            func_A508_b14(); break;
        case 0x817D:
            func_817D_b14(); break;
        case 0x9E99:
            func_9E99_b14(); break;
        case 0xA8A3:
            func_A8A3_b14(); break;
        case 0x807B:
            func_807B_b14(); break;
        case 0xA6A2:
            func_A6A2_b14(); break;
        case 0xB0AB:
            func_B0AB_b14(); break;
        case 0xBAB5:
            func_BAB5_b14(); break;
        case 0xA2FB:
            func_A2FB_b14(); break;
        case 0xA90A:
            func_A90A_b14(); break;
        case 0xB001:
            func_B001_b14(); break;
        case 0x9D20:
            func_9D20_b14(); break;
        case 0xA9C5:
            func_A9C5_b14(); break;
        case 0xA224:
            func_A224_b14(); break;
        case 0x85C8:
            func_85C8_b14(); break;
        case 0xA994:
            func_A994_b14(); break;
        case 0xA993:
            func_A993_b14(); break;
        case 0x8A80:
            func_8A80_b14(); break;
        case 0xA211:
            func_A211_b14(); break;
        case 0x8E1B:
            func_8E1B_b14(); break;
        case 0xA9F6:
            func_A9F6_b14(); break;
        case 0x8DF0:
            func_8DF0_b14(); break;
        case 0x8507:
            func_8507_b14(); break;
        case 0x857F:
            func_857F_b0(); break;
        case 0xCCB3:
            func_CCB3(); break;
        case 0xA0E0:
            func_A0E0_b0(); break;
        case 0x8E02:
            func_8E02_b0(); break;
        case 0x8A86:
            switch (g_current_bank) {
                case 0: func_8A86_b0(); break;
                case 9: func_8A86_b9(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xD808:
            func_D808(); break;
        case 0x84F3:
            func_84F3_b1(); break;
        case 0xA0AA:
            func_A0AA_b1(); break;
        case 0xA892:
            func_A892_b1(); break;
        case 0xA3A5:
            func_A3A5_b1(); break;
        case 0x83F2:
            func_83F2_b1(); break;
        case 0xA477:
            func_A477_b1(); break;
        case 0x8533:
            func_8533_b1(); break;
        case 0xA8CE:
            func_A8CE_b1(); break;
        case 0xA8D8:
            func_A8D8_b1(); break;
        case 0xA599:
            func_A599_b2(); break;
        case 0xA197:
            func_A197_b2(); break;
        case 0xA689:
            func_A689_b2(); break;
        case 0xA31A:
            func_A31A_b2(); break;
        case 0x82FC:
            func_82FC_b2(); break;
        case 0x8BEE:
            func_8BEE_b2(); break;
        case 0xC041:
            func_C041(); break;
        case 0xD95D:
            func_D95D(); break;
        case 0xAE8F:
            func_AE8F_b2(); break;
        case 0xA84A:
            func_A84A_b2(); break;
        case 0xA3C1:
            func_A3C1_b2(); break;
        case 0xA377:
            func_A377_b2(); break;
        case 0xABCF:
            func_ABCF_b2(); break;
        case 0xABC3:
            func_ABC3_b2(); break;
        case 0xA5C1:
            func_A5C1_b2(); break;
        case 0xA53C:
            func_A53C_b2(); break;
        case 0xA5E3:
            func_A5E3_b2(); break;
        case 0xA919:
            func_A919_b2(); break;
        case 0xA2FC:
            func_A2FC_b2(); break;
        case 0xA81F:
            func_A81F_b2(); break;
        case 0xA79B:
            func_A79B_b2(); break;
        case 0x83FB:
            func_83FB_b2(); break;
        case 0x8CD5:
            func_8CD5_b2(); break;
        case 0xA484:
            func_A484_b2(); break;
        case 0x83F7:
            switch (g_current_bank) {
                case 2: func_83F7_b2(); break;
                case 7: func_83F7_b7(); break;
                default: nes_log_dispatch_miss(addr); return 0;
            }
            break;
        case 0xA774:
            func_A774_b3(); break;
        case 0xA3D6:
            func_A3D6_b3(); break;
        case 0xBD04:
            func_BD04_b3(); break;
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
            func_A5BB_b3(); break;
        case 0xA745:
            func_A745_b3(); break;
        case 0x85BC:
            func_85BC_b3(); break;
        case 0xA52C:
            func_A52C_b3(); break;
        case 0x8539:
            func_8539_b3(); break;
        case 0xA8EE:
            func_A8EE_b3(); break;
        case 0xA22E:
            func_A22E_b3(); break;
        case 0xA1FF:
            func_A1FF_b3(); break;
        case 0x8BEF:
            func_8BEF_b3(); break;
        case 0xA044:
            func_A044_b3(); break;
        case 0xA836:
            func_A836_b3(); break;
        case 0xA1E0:
            func_A1E0_b3(); break;
        case 0x84F4:
            func_84F4_b3(); break;
        case 0xA6B2:
            func_A6B2_b3(); break;
        case 0x854B:
            func_854B_b5(); break;
        case 0x8525:
            func_8525_b5(); break;
        case 0x8591:
            func_8591_b5(); break;
        case 0xA565:
            func_A565_b5(); break;
        case 0x8598:
            func_8598_b6(); break;
        case 0x8CA1:
            func_8CA1_b6(); break;
        case 0x8CD0:
            func_8CD0_b6(); break;
        case 0x8CCA:
            func_8CCA_b6(); break;
        case 0x8040:
            func_8040_b7(); break;
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
        case 0xE10F:
            func_E10F(); break;
        case 0xAA0A:
            func_AA0A_b9(); break;
        case 0xBDE2:
            func_BDE2_b9(); break;
        case 0xBD82:
            func_BD82_b9(); break;
        case 0xBD1B:
            func_BD1B_b9(); break;
        case 0xBEB8:
            func_BEB8_b9(); break;
        case 0xA9B5:
            func_A9B5_b9(); break;
        case 0xAC4F:
            func_AC4F_b9(); break;
        case 0xACA7:
            func_ACA7_b9(); break;
        case 0xAFD2:
            func_AFD2_b9(); break;
        case 0xAF76:
            func_AF76_b9(); break;
        case 0xB224:
            func_B224_b9(); break;
        case 0xB2AB:
            func_B2AB_b9(); break;
        case 0xFD8C:
            func_FD8C(); break;
        case 0xB5FB:
            func_B5FB_b9(); break;
        case 0xB595:
            func_B595_b9(); break;
        case 0xB5A1:
            func_B5A1_b9(); break;
        case 0xB732:
            func_B732_b9(); break;
        case 0xB756:
            func_B756_b9(); break;
        case 0xB6DB:
            func_B6DB_b9(); break;
        case 0xB6FC:
            func_B6FC_b9(); break;
        case 0xB8A3:
            func_B8A3_b9(); break;
        case 0xB94A:
            func_B94A_b9(); break;
        case 0x8C5D:
            func_8C5D_b9(); break;
        case 0x82A7:
            func_82A7_b9(); break;
        case 0x82A9:
            func_82A9_b10(); break;
        case 0x874B:
            func_874B_b11(); break;
        case 0xA8BB:
            func_A8BB_b11(); break;
        case 0x9961:
            func_9961_b12(); break;
        case 0x9138:
            func_9138_b12(); break;
        case 0x9783:
            func_9783_b12(); break;
        case 0xAA9B:
            func_AA9B_b12(); break;
        case 0xAAA4:
            func_AAA4_b12(); break;
        case 0xB8AB:
            func_B8AB_b12(); break;
        case 0xB8B4:
            func_B8B4_b12(); break;
        case 0xA9C3:
            func_A9C3_b12(); break;
        case 0x9185:
            func_9185_b13(); break;
        case 0x9200:
            func_9200_b13(); break;
        case 0x9734:
            func_9734_b14(); break;
        case 0xB0F7:
            func_B0F7_b14(); break;
        case 0xB0FC:
            func_B0FC_b14(); break;
        case 0x84B9:
            func_84B9_b14(); break;
        case 0xAF9A:
            func_AF9A_b14(); break;
        case 0xA98D:
            func_A98D_b14(); break;
        case 0x8DC3:
            func_8DC3_b14(); break;
        case 0xA69D:
            func_A69D_b14(); break;
        case 0x8F2F:
            func_8F2F_b14(); break;
        case 0x9F78:
            func_9F78_b14(); break;
        case 0x981D:
            func_981D_b14(); break;
        case 0x9776:
            func_9776_b14(); break;
        case 0x95B9:
            func_95B9_b14(); break;
        case 0xB963:
            func_B963_b14(); break;
        case 0x89A4:
            func_89A4_b14(); break;
        case 0x89B7:
            func_89B7_b14(); break;
        case 0xBDF3:
            func_BDF3_b14(); break;
        case 0xA95F:
            func_A95F_b14(); break;
        case 0xA41A:
            func_A41A_b14(); break;
        case 0xBD05:
            func_BD05_b14(); break;
        case 0xA5BC:
            func_A5BC_b14(); break;
        case 0xA953:
            func_A953_b14(); break;
        case 0xEE57:
            func_EE57(); break;
        case 0x867C:
            func_867C_b14(); break;
        case 0x9E46:
            func_9E46_b14(); break;
        case 0xA3B0:
            func_A3B0_b14(); break;
        case 0xB11C:
            func_B11C_b14(); break;
        case 0xB00C:
            func_B00C_b14(); break;
        case 0x949B:
            func_949B_b14(); break;
        case 0xBB01:
            func_BB01_b14(); break;
        case 0x85D9:
            func_85D9_b14(); break;
        case 0xA942:
            func_A942_b14(); break;
        case 0x8ED3:
            func_8ED3_b14(); break;
        case 0x8DFD:
            func_8DFD_b14(); break;
        case 0xA201:
            func_A201_b0(); break;
        case 0xC700:
            func_C700(); break;
        case 0xA02C:
            func_A02C_b0(); break;
        case 0x801A:
            func_801A_b0(); break;
        case 0x801E:
            func_801E_b0(); break;
        case 0x83A5:
            func_83A5_b1(); break;
        case 0x83FA:
            func_83FA_b2(); break;
        case 0xBAB8:
            func_BAB8_b3(); break;
        case 0x8B96:
            func_8B96_b3(); break;
        case 0xA787:
            func_A787_b3(); break;
        case 0xA7F1:
            func_A7F1_b3(); break;
        case 0xA880:
            func_A880_b3(); break;
        case 0xA7C7:
            func_A7C7_b3(); break;
        case 0xC040:
            func_C040(); break;
        case 0xA0A6:
            func_A0A6_b7(); break;
        case 0x83FC:
            func_83FC_b7(); break;
        case 0x8204:
            func_8204_b7(); break;
        case 0x9750:
            func_9750_b7(); break;
        case 0xA080:
            func_A080_b7(); break;
        case 0x82C6:
            func_82C6_b7(); break;
        case 0xA805:
            func_A805_b7(); break;
        case 0x8BF5:
            func_8BF5_b7(); break;
        case 0xB6AD:
            func_B6AD_b9(); break;
        case 0x916B:
            func_916B_b13(); break;
        case 0xBCF6:
            func_BCF6_b14(); break;
        case 0xA8D3:
            func_A8D3_b3(); break;
        case 0xA7C6:
            func_A7C6_b3(); break;
        case 0xA0A2:
            func_A0A2_b7(); break;
        case 0x8061:
            func_8061_b7(); break;
        default:
            nes_log_dispatch_miss(addr);
            return 0;
    }
    return 1;
}
