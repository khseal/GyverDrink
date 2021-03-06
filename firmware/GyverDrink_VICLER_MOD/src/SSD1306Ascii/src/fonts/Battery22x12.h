

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Battery22x12.h
 * Date                : 18.06.2020
 * Font size in bytes  : 2656
 * Font width          : 22
 * Font height         : -12
 * Font first char     : 48
 * Font last char      : 58
 * Font used chars     : 10
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef Battery22x12_H
#define Battery22x12_H

#define Battery22x12_WIDTH 22
#define Battery22x12_HEIGHT 12

static const uint8_t Battery22x12[] PROGMEM = {
    0x0A, 0x60, // size
    0x16, // width
    0x0C, // height
    0x30, // first char
    0x0A, // char count
    
    // char widths
    0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 
    
    
    // font data
    0xFC, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x00, // 48
    0xFC, 0x06, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x50, 0x50, 0x50, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x00, // 49
    0xFC, 0x06, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x50, 0x50, 0x50, 0x40, 0x50, 0x50, 0x50, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x00, // 50
    0xFC, 0x06, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x50, 0x50, 0x50, 0x40, 0x50, 0x50, 0x50, 0x40, 0x50, 0x50, 0x50, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x00, // 51
    0xFC, 0x06, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0xFA, 0xFA, 0xFA, 0x02, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x50, 0x50, 0x50, 0x40, 0x50, 0x50, 0x50, 0x40, 0x50, 0x50, 0x50, 0x40, 0x50, 0x50, 0x50, 0x40, 0x60, 0x30, 0x00, // 52
    0xFC, 0x06, 0x02, 0x02, 0x0A, 0x12, 0x22, 0x42, 0x82, 0x02, 0xFA, 0x0A, 0x12, 0x22, 0x42, 0x82, 0x02, 0x02, 0x02, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x50, 0x50, 0x40, 0x40, 0x40, 0x40, 0x40, 0x50, 0x40, 0x40, 0x60, 0x30, 0x00, // 53
    0xFC, 0x06, 0x02, 0x62, 0xF2, 0x62, 0x02, 0x02, 0x62, 0x62, 0x62, 0x62, 0xF2, 0xF2, 0xF2, 0xFA, 0xFA, 0xF2, 0x62, 0x06, 0xFC, 0xF0, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x50, 0x50, 0x40, 0x40, 0x60, 0x30, 0x00, // 54
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 57
    
};

#endif
