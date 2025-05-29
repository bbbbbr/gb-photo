#ifndef __EXPOSURE_H_INCLUDE__
#define __EXPOSURE_H_INCLUDE__

#include <string.h>

extern uint16_t EXPOSURES_MAX_INDEX;
extern uint16_t GAINS_MAX_INDEX;
extern uint16_t DITHER_PATTERNS_MAX_INDEX;
extern uint16_t ZERO_POINTS_MAX_INDEX;
extern uint16_t EDGE_RATIOS_MAX_INDEX;
extern uint16_t VOLTAGE_REFS_MAX_INDEX;
extern uint16_t EDGE_OPERATIONS_MAX_INDEX;

uint16_t GET_EXPOSURES(uint8_t index) BANKED;

void GAINS_CAPTION_SPRINTF           (const uint8_t * format, uint8_t index) BANKED;
void DITHER_PATTERNS_CAPTION_SPRINTF (const uint8_t * format, uint8_t index) BANKED;
void ZERO_POINTS_CAPTION_SPRINTF     (const uint8_t * format, uint8_t index) BANKED;
void VOLTAGE_REFS_CAPTION_SPRINTF    (const uint8_t * format, uint8_t index) BANKED;
void EDGE_RATIOS_CAPTION_SPRINTF     (const uint8_t * format, uint8_t index) BANKED;
void EDGE_OPERATIONS_CAPTION_SPRINTF (const uint8_t * format, uint8_t index) BANKED;

void RENDER_CAM_REG_EDEXOPGAIN(void) BANKED;
void RENDER_CAM_REG_EXPTIME(void) BANKED;
void RENDER_CAM_REG_EDRAINVVREF(void) BANKED;
void RENDER_CAM_REG_ZEROVOUT(void) BANKED;
void RENDER_CAM_REG_DITHERPATTERN(void) BANKED;

void RENDER_CAM_REGISTERS(void) BANKED;
void RENDER_REGS_FROM_EXPOSURE(void) BANKED;
void RENDER_EDGE_FROM_EXPOSURE(void) BANKED;

#endif