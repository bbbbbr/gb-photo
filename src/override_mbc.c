#include <gbdk/platform.h>
#include <stdint.h>
#include <stdbool.h>

volatile uint8_t AT(0x0000) rRAMG_LOCAL;
volatile uint8_t AT(0x2000) rROMB0_LOCAL;
volatile uint8_t AT(0x3000) rROMB1_LOCAL;
volatile uint8_t AT(0x4000) rRAMB_LOCAL;
