#ifndef __MBC_H_INCLUDE__
#define __MBC_H_INCLUDE__

#include <gbdk/platform.h>
#include <stdint.h>
#include <stdbool.h>

extern volatile uint8_t AT(0x0000) rRAMG_LOCAL;
extern volatile uint8_t AT(0x2000) rROMB0_LOCAL;
extern volatile uint8_t AT(0x3000) rROMB1_LOCAL;
extern volatile uint8_t AT(0x4000) rRAMB_LOCAL;

#define SWITCH_ROM_FORCE_MBC3(b) (_current_bank = (b), rROMB0_LOCAL = (b))
#define SWITCH_RAM_FORCE_MBC3(b) (rRAMB_LOCAL = (b))
#define ENABLE_RAM_FORCE_MBC3 (rRAMG_LOCAL = 0x0A)
#define DISABLE_RAM_FORCE_MBC3 (rRAMG_LOCAL = 0x00)


#endif