

/*
 *
 * OpenSans11x15
 *
 * created with FontCreator 2.1
 * version 2.0 written by F. Maximilian Thiele, extended by sce
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : OpenSans10x16.h
 * Date                : 07.06.2020
 * Font size in bytes  : 1326
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
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

#ifndef OPENSANS10X16_H
#define OPENSANS10X16_H

#define OPENSANS10X16_WIDTH 10
#define OPENSANS10X16_HEIGHT 16

static const uint8_t OpenSans10x16[] PROGMEM = {
    //0x05, 0x2E, // size
    0x05, 0x43, // size
    0x0A,       // width
    0x10,       // height
    0x20,       // first char
    0xB1,       // char count

    // char widths
    0x04, 0x02, 0x04, 0x0A, 0x07, 0x0A, 0x09, 0x01, 0x02, 0x02,
    0x06, 0x07, 0x02, 0x03, 0x02, 0x06, 0x07, 0x03, 0x07, 0x07,
    0x09, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02, 0x02, 0x07, 0x07,
    0x07, 0x05, 0x0B, 0x0A, 0x07, 0x07, 0x09, 0x06, 0x06, 0x09,
    0x09, 0x02, 0x03, 0x08, 0x06, 0x0A, 0x09, 0x0A, 0x07, 0x0A,
    0x07, 0x06, 0x08, 0x09, 0x09, 0x0E, 0x09, 0x08, 0x07, 0x04,
    0x06, 0x04, 0x06, 0x07, 0x03, 0x06, 0x07, 0x05, 0x07, 0x06,
    0x05, 0x08, 0x07, 0x02, 0x03, 0x06, 0x02, 0x0C, 0x07, 0x07,
    0x07, 0x07, 0x05, 0x05, 0x05, 0x07, 0x08, 0x0C, 0x06, 0x08,
    0x05, 0x05, 0x02, 0x05, 0x07, 0x07,
    0x06, 0x09, 0x06, 0x07, 0x06, 0x02, 0x04, 0x03, 0x0C, 0x0B,
    0x09, 0x08, 0x09, 0x09, 0x08, 0x09, 0x07, 0x07, 0x06, 0x0A,
    0x06, 0x0C, 0x07, 0x09, 0x09, 0x08, 0x09, 0x0B, 0x08, 0x09,
    0x08, 0x06, 0x07, 0x08, 0x09, 0x09, 0x08, 0x09, 0x08, 0x0C,
    0x0D, 0x09, 0x0A, 0x07, 0x08, 0x0D, 0x07, 0x06, 0x06, 0x07,
    0x05, 0x08, 0x06, 0x0A, 0x06, 0x07, 0x07, 0x05, 0x07, 0x08,
    0x07, 0x06, 0x07, 0x07, 0x05, 0x07, 0x07, 0x08, 0x06, 0x08,
    0x07, 0x0A, 0x0C, 0x09, 0x09, 0x06, 0x06, 0x0A, 0x06, 0x06,
    0x06,

    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                                         // 32
    0xBE, 0x7E, 0x0C, 0x0C,                                                                                                                                                 // 33
    0x1E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,                                                                                                                         // 34
    0x00, 0x10, 0x10, 0xF8, 0x16, 0x10, 0xF0, 0x1E, 0x10, 0x10, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x0D, 0x03, 0x01, 0x01, 0x00,                                                 // 35
    0x18, 0x2C, 0x44, 0xFE, 0x44, 0x84, 0x84, 0x04, 0x04, 0x04, 0x1F, 0x04, 0x06, 0x03,                                                                                     // 36
    0x7C, 0x82, 0x82, 0x7C, 0xC0, 0x60, 0xD8, 0x26, 0x20, 0xC0, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x07, 0x08, 0x08, 0x07,                                                 // 37
    0x00, 0x9C, 0x62, 0xC2, 0xA2, 0x1C, 0x00, 0x00, 0x80, 0x07, 0x0C, 0x08, 0x08, 0x09, 0x0D, 0x06, 0x06, 0x09,                                                             // 38
    0x1E, 0x00,                                                                                                                                                             // 39
    0xF8, 0x06, 0x0F, 0x30,                                                                                                                                                 // 40
    0x06, 0xF8, 0x30, 0x0F,                                                                                                                                                 // 41
    0x0C, 0x68, 0x1F, 0x1B, 0x68, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 42
    0x40, 0x40, 0x40, 0xF8, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,                                                                                     // 43
    0x00, 0x00, 0x3C, 0x04,                                                                                                                                                 // 44
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00,                                                                                                                                     // 45
    0x00, 0x00, 0x0C, 0x0C,                                                                                                                                                 // 46
    0x00, 0x00, 0xC0, 0x70, 0x0E, 0x02, 0x08, 0x0E, 0x01, 0x00, 0x00, 0x00,                                                                                                 // 47
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03,                                                                                     // 48
    0x0C, 0x04, 0xFE, 0x00, 0x00, 0x0F,                                                                                                                                     // 49
    0x04, 0x02, 0x02, 0x82, 0xC2, 0x7C, 0x18, 0x0C, 0x0E, 0x0B, 0x09, 0x08, 0x08, 0x08,                                                                                     // 50
    0x04, 0x42, 0x42, 0x42, 0x42, 0xBC, 0x98, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x07,                                                                                     // 51
    0x00, 0xC0, 0x60, 0x10, 0x08, 0x06, 0xFE, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x01, 0x01,                                                             // 52
    0x38, 0x3E, 0x22, 0x22, 0x22, 0x62, 0xC0, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03,                                                                                     // 53
    0xF0, 0x4C, 0x24, 0x22, 0x22, 0x62, 0xC0, 0x03, 0x04, 0x08, 0x08, 0x08, 0x0C, 0x07,                                                                                     // 54
    0x02, 0x02, 0x02, 0x82, 0xE2, 0x3A, 0x0E, 0x00, 0x08, 0x0E, 0x03, 0x00, 0x00, 0x00,                                                                                     // 55
    0x1C, 0xB6, 0x62, 0x42, 0x42, 0xB6, 0x1C, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x0C, 0x07,                                                                                     // 56
    0x7C, 0xC6, 0x82, 0x82, 0x82, 0x44, 0xF8, 0x00, 0x08, 0x08, 0x08, 0x0C, 0x06, 0x01,                                                                                     // 57
    0x30, 0x30, 0x0C, 0x0C,                                                                                                                                                 // 58
    0x30, 0x30, 0x3C, 0x04,                                                                                                                                                 // 59
    0x40, 0xC0, 0xA0, 0x20, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02,                                                                                     // 60
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,                                                                                     // 61
    0x08, 0x10, 0x10, 0x20, 0xA0, 0xC0, 0x40, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,                                                                                     // 62
    0x02, 0x82, 0x42, 0x3E, 0x18, 0x00, 0x0D, 0x00, 0x00, 0x00,                                                                                                             // 63
    0xF0, 0x18, 0x04, 0xE2, 0x12, 0x12, 0x12, 0xF2, 0x04, 0x0C, 0xF0, 0x03, 0x0C, 0x08, 0x11, 0x12, 0x12, 0x11, 0x11, 0x02, 0x02, 0x01,                                     // 64
    0x00, 0x00, 0xC0, 0xB8, 0x8E, 0x8E, 0xB8, 0xC0, 0x00, 0x00, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x08,                                                 // 65
    0xFE, 0x42, 0x42, 0x42, 0x42, 0xBC, 0x98, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x07,                                                                                     // 66
    0xF0, 0x1C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x03, 0x06, 0x0C, 0x08, 0x08, 0x08, 0x08,                                                                                     // 67
    0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x04, 0x1C, 0xF0, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x04, 0x07, 0x01,                                                             // 68
    0xFE, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08,                                                                                                 // 69
    0xFE, 0x42, 0x42, 0x42, 0x42, 0x02, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 70
    0xF0, 0x1C, 0x04, 0x02, 0x02, 0x42, 0x42, 0x42, 0xC2, 0x01, 0x07, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0F,                                                             // 71
    0xFE, 0xFE, 0x40, 0x40, 0x40, 0x40, 0x40, 0xFE, 0xFE, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F,                                                             // 72
    0xFE, 0xFE, 0x0F, 0x0F,                                                                                                                                                 // 73
    0x00, 0xFE, 0xFE, 0x40, 0x7F, 0x1F,                                                                                                                                     // 74
    0xFE, 0xFE, 0x40, 0xF0, 0x98, 0x0C, 0x06, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x01, 0x07, 0x0C, 0x08,                                                                         // 75
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08,                                                                                                 // 76
    0xFE, 0x0E, 0x70, 0xC0, 0x00, 0x00, 0xC0, 0x70, 0x0E, 0xFE, 0x0F, 0x00, 0x00, 0x03, 0x0E, 0x0E, 0x01, 0x00, 0x00, 0x0F,                                                 // 77
    0xFE, 0xFE, 0x0C, 0x30, 0xE0, 0x80, 0x00, 0xFE, 0xFE, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x06, 0x0F, 0x0F,                                                             // 78
    0xF0, 0x1C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x1C, 0xF0, 0x01, 0x07, 0x04, 0x08, 0x08, 0x08, 0x08, 0x04, 0x07, 0x01,                                                 // 79
    0xFE, 0xFE, 0x82, 0x82, 0x82, 0x46, 0x7C, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                     // 80
    0xF0, 0x1C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x1C, 0xF0, 0x01, 0x07, 0x04, 0x08, 0x08, 0x08, 0x18, 0x34, 0x27, 0x01,                                                 // 81
    0xFE, 0xFE, 0x42, 0x42, 0xC2, 0x26, 0x3C, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x03, 0x0C,                                                                                     // 82
    0x3C, 0x26, 0x42, 0x42, 0xC2, 0x82, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x07,                                                                                                 // 83
    0x02, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00,                                                                         // 84
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x01, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x0C, 0x07, 0x01,                                                             // 85
    0x02, 0x1E, 0xF0, 0x80, 0x00, 0x80, 0xF0, 0x1E, 0x02, 0x00, 0x00, 0x00, 0x07, 0x0C, 0x07, 0x00, 0x00, 0x00,                                                             // 86
    0x02, 0x3E, 0xE0, 0x00, 0x80, 0xF0, 0x0E, 0x1E, 0xF0, 0x80, 0x00, 0xE0, 0x3E, 0x02, 0x00, 0x00, 0x03, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0E, 0x03, 0x00, 0x00, // 87
    0x00, 0x06, 0x0C, 0xB0, 0x60, 0xB0, 0x0C, 0x06, 0x00, 0x08, 0x0C, 0x03, 0x01, 0x00, 0x01, 0x03, 0x0C, 0x08,                                                             // 88
    0x02, 0x0E, 0x38, 0xE0, 0xE0, 0x38, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00,                                                                         // 89
    0x02, 0x02, 0x82, 0xE2, 0x32, 0x1E, 0x06, 0x0C, 0x0B, 0x09, 0x08, 0x08, 0x08, 0x08,                                                                                     // 90
    0xFE, 0x02, 0x02, 0x02, 0x3F, 0x20, 0x20, 0x20,                                                                                                                         // 91
    0x02, 0x0E, 0x70, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0E, 0x08,                                                                                                 // 92
    0x02, 0x02, 0x02, 0xFE, 0x20, 0x20, 0x20, 0x3F,                                                                                                                         // 93
    0xE0, 0x38, 0x06, 0x0C, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,                                                                                     // 95
    0x02, 0x06, 0x04, 0x00, 0x00, 0x00,                                                                                                                                     // 96
    0x00, 0x90, 0x90, 0x90, 0xB0, 0xE0, 0x0F, 0x09, 0x08, 0x08, 0x04, 0x0F,                                                                                                 // 97
    0xFF, 0x60, 0x10, 0x10, 0x10, 0x30, 0xE0, 0x0F, 0x06, 0x08, 0x08, 0x08, 0x0C, 0x07,                                                                                     // 98
    0xE0, 0x30, 0x10, 0x10, 0x10, 0x07, 0x0C, 0x08, 0x08, 0x08,                                                                                                             // 99
    0xE0, 0x30, 0x10, 0x10, 0x10, 0xE0, 0xFF, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x06, 0x0F,                                                                                     // 100
    0xE0, 0xB0, 0x90, 0x90, 0xB0, 0xE0, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x08,                                                                                                 // 101
    0x10, 0x10, 0xFE, 0x11, 0x11, 0x00, 0x00, 0x0F, 0x00, 0x00,                                                                                                             // 102
    0x00, 0xE0, 0x10, 0x10, 0x10, 0xB0, 0xD0, 0x10, 0x60, 0xD4, 0x8B, 0x89, 0x89, 0x89, 0x78, 0x20,                                                                         // 103
    0xFF, 0x60, 0x10, 0x10, 0x10, 0x30, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,                                                                                     // 104
    0xF6, 0xF6, 0x0F, 0x0F,                                                                                                                                                 // 105
    0x00, 0xF6, 0xF6, 0x80, 0xFF, 0x3F,                                                                                                                                     // 106
    0xFF, 0x3F, 0x80, 0x40, 0x20, 0x10, 0x0F, 0x0F, 0x00, 0x01, 0x06, 0x0C,                                                                                                 // 107
    0xFF, 0xFF, 0x0F, 0x0F,                                                                                                                                                 // 108
    0xF0, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0xE0, 0x10, 0x10, 0x10, 0x30, 0xE0, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F,                         // 109
    0xF0, 0x60, 0x10, 0x10, 0x10, 0x30, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,                                                                                     // 110
    0xE0, 0x20, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x07,                                                                                     // 111
    0xF0, 0x60, 0x10, 0x10, 0x10, 0x30, 0xE0, 0xFF, 0x06, 0x08, 0x08, 0x08, 0x0C, 0x07,                                                                                     // 112
    0xE0, 0x30, 0x10, 0x10, 0x10, 0xE0, 0xF0, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x06, 0xFF,                                                                                     // 113
    0xF0, 0x60, 0x10, 0x10, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00,                                                                                                             // 114
    0x60, 0x90, 0x90, 0x10, 0x10, 0x08, 0x08, 0x08, 0x09, 0x07,                                                                                                             // 115
    0x10, 0xF8, 0xFC, 0x10, 0x10, 0x00, 0x07, 0x0F, 0x08, 0x08,                                                                                                             // 116
    0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x07, 0x0F,                                                                                     // 117
    0x10, 0xF0, 0x80, 0x00, 0x00, 0x80, 0xF0, 0x10, 0x00, 0x00, 0x03, 0x0E, 0x0E, 0x03, 0x00, 0x00,                                                                         // 118
    0x10, 0xF0, 0x00, 0x00, 0x80, 0x70, 0x70, 0x80, 0x00, 0x00, 0xF0, 0x10, 0x00, 0x01, 0x0F, 0x0C, 0x03, 0x00, 0x00, 0x03, 0x0C, 0x0F, 0x01, 0x00,                         // 119
    0x10, 0x60, 0xC0, 0xC0, 0x60, 0x10, 0x0C, 0x06, 0x01, 0x01, 0x06, 0x0C,                                                                                                 // 120
    0x10, 0xF0, 0x80, 0x00, 0x00, 0x80, 0xF0, 0x10, 0x80, 0x80, 0xC3, 0x7E, 0x1C, 0x03, 0x00, 0x00,                                                                         // 121
    0x10, 0x10, 0x90, 0x50, 0x30, 0x0C, 0x0B, 0x09, 0x08, 0x08,                                                                                                             // 122
    0x80, 0x80, 0x78, 0x3E, 0x02, 0x00, 0x00, 0x0F, 0x3E, 0x20,                                                                                                             // 123
    0xFF, 0xFF, 0xFF, 0xFF,                                                                                                                                                 // 124
    0x02, 0x3E, 0x78, 0x80, 0x80, 0x20, 0x3F, 0x0F, 0x00, 0x00,                                                                                                             // 125
    0x40, 0x40, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                     // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0F,                                                                                     // 127
    0xF8, 0xFA, 0x88, 0x88, 0x8A, 0x88, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10,                                                                                                 // 1025
    0x08, 0x08, 0xF8, 0xF8, 0x88, 0x88, 0x80, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x10, 0x10, 0x11, 0x0F,                                                             // 1026
    0xF8, 0x08, 0x08, 0x0A, 0x09, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 1027
    0xE0, 0xB0, 0x98, 0x88, 0x88, 0x88, 0x08, 0x07, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x10,                                                                                     // 1028
    0x70, 0x88, 0x88, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x11, 0x11, 0x0F,                                                                                                 // 1029
    0xF8, 0xF8, 0x1F, 0x1F,                                                                                                                                                 // 1030
    0x02, 0xF8, 0xF8, 0x02, 0x00, 0x1F, 0x1F, 0x00,                                                                                                                         // 1031
    0x00, 0xF8, 0xF8, 0x80, 0xFF, 0x3F,                                                                                                                                     // 1032
    0x00, 0x00, 0x80, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0x80, 0x80, 0x80, 0x00, 0x10, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x0F,                         // 1033
    0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x80, 0x80, 0x80, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x0F,                                     // 1034
    0x08, 0x08, 0xF8, 0xF8, 0x88, 0x88, 0x88, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x1F,                                                             // 1035
    0xF8, 0xF8, 0x80, 0x42, 0x21, 0x10, 0x08, 0x00, 0x1F, 0x1F, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10,                                                                         // 1036
    0xF8, 0xF8, 0x00, 0x01, 0x82, 0xC0, 0x30, 0x98, 0xF8, 0x1F, 0x1B, 0x0C, 0x03, 0x01, 0x00, 0x00, 0x1F, 0x1F,                                                             // 1037
    0x08, 0x18, 0x63, 0x82, 0x02, 0x03, 0xC0, 0x38, 0x08, 0x00, 0x10, 0x10, 0x19, 0x0F, 0x03, 0x00, 0x00, 0x00,                                                             // 1038
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x1F, 0x1F, 0x10, 0xF0, 0xF0, 0x10, 0x1F, 0x1F,                                                                         // 1039
    0x00, 0x00, 0x80, 0x70, 0x08, 0x70, 0x80, 0x00, 0x00, 0x10, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x03, 0x0E, 0x10,                                                             // 1040
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x19, 0x0F,                                                                                     // 1041
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x58, 0x70, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x19, 0x0F,                                                                                     // 1042
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,                                                                                                 // 1043
    0x00, 0x00, 0x00, 0xE0, 0x18, 0x08, 0x08, 0xF8, 0x00, 0x00, 0xF0, 0x18, 0x16, 0x11, 0x10, 0x10, 0x10, 0x1F, 0x10, 0xF0,                                                 // 1044
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10,                                                                                                 // 1045
    0x00, 0x18, 0x30, 0x60, 0x80, 0xF8, 0xF8, 0x80, 0x60, 0x30, 0x18, 0x00, 0x10, 0x18, 0x0C, 0x02, 0x01, 0x1F, 0x1F, 0x01, 0x02, 0x0C, 0x18, 0x10,                         // 1046
    0x00, 0x10, 0x88, 0x88, 0x88, 0x58, 0x70, 0x08, 0x10, 0x10, 0x10, 0x10, 0x19, 0x0F,                                                                                     // 1047
    0xF8, 0xF8, 0x00, 0x00, 0x80, 0xC0, 0x30, 0x98, 0xF8, 0x1F, 0x1B, 0x0C, 0x03, 0x01, 0x00, 0x00, 0x1F, 0x1F,                                                             // 1048
    0xF8, 0xF8, 0x00, 0x03, 0x82, 0xC2, 0x33, 0x98, 0xF8, 0x1F, 0x1B, 0x0C, 0x03, 0x01, 0x00, 0x00, 0x1F, 0x1F,                                                             // 1049
    0xF8, 0xF8, 0x80, 0x40, 0x20, 0x10, 0x08, 0x00, 0x1F, 0x1F, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10,                                                                         // 1050
    0x00, 0x00, 0x00, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x10, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F,                                                             // 1051
    0xF8, 0x08, 0x70, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x70, 0xE8, 0xF8, 0x1F, 0x00, 0x00, 0x01, 0x0E, 0x18, 0x0E, 0x01, 0x00, 0x1F, 0x1F,                                     // 1052
    0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F,                                                                         // 1053
    0xE0, 0x30, 0x18, 0x08, 0x08, 0x08, 0x18, 0x30, 0xE0, 0x07, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x07,                                                             // 1054
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F,                                                                         // 1055
    0xF8, 0x08, 0x08, 0x08, 0x88, 0xF0, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x00,                                                                                                 // 1056
    0xE0, 0x30, 0x18, 0x08, 0x08, 0x08, 0x08, 0x07, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x10,                                                                                     // 1057
    0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00,                                                                         // 1058
    0x08, 0x18, 0x60, 0x80, 0x00, 0x00, 0xC0, 0x38, 0x08, 0x00, 0x10, 0x10, 0x19, 0x0F, 0x03, 0x00, 0x00, 0x00,                                                             // 1059
    0xE0, 0x30, 0x10, 0x10, 0xF8, 0x10, 0x10, 0x30, 0xE0, 0x03, 0x06, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x06, 0x03,                                                             // 1060
    0x00, 0x18, 0x20, 0xC0, 0xC0, 0x20, 0x18, 0x00, 0x10, 0x18, 0x06, 0x01, 0x01, 0x06, 0x18, 0x10,                                                                         // 1061
    0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0xF0,                                                             // 1062
    0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F, 0x1F,                                                                         // 1063
    0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x1F,                         // 1064
    0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0xF0, 0xF0,             // 1065
    0x08, 0x08, 0x08, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x19, 0x0F,                                                             // 1066
    0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0xF8, 0xF8, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x19, 0x0F, 0x00, 0x1F, 0x1F,                                                 // 1067
    0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x19, 0x0F,                                                                                     // 1068
    0x00, 0x08, 0x88, 0x88, 0x88, 0x98, 0xB0, 0xE0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x07,                                                                         // 1069
    0xF8, 0xF8, 0x80, 0x80, 0xE0, 0x30, 0x18, 0x08, 0x08, 0x08, 0x18, 0x30, 0xE0, 0x1F, 0x1F, 0x00, 0x00, 0x03, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x07,             // 1070
    0xF0, 0x98, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x18, 0x0C, 0x03, 0x01, 0x01, 0x1F, 0x1F,                                                                                     // 1071
    0x00, 0x20, 0x20, 0x20, 0x60, 0xC0, 0x1E, 0x11, 0x11, 0x11, 0x09, 0x1F,                                                                                                 // 1072
    0xF0, 0x98, 0x48, 0x48, 0x44, 0x84, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F,                                                                                                 // 1073
    0xE0, 0x20, 0x20, 0x20, 0x20, 0xE0, 0x00, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x1E, 0x04,                                                                                     // 1074
    0xE0, 0x20, 0x20, 0x20, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00,                                                                                                             // 1075
    0x00, 0x00, 0x00, 0xE0, 0x20, 0x20, 0xE0, 0x00, 0xF0, 0x18, 0x17, 0x10, 0x10, 0x10, 0x1F, 0xF0,                                                                         // 1076
    0xC0, 0x60, 0x20, 0x20, 0x20, 0xC0, 0x0F, 0x19, 0x11, 0x11, 0x11, 0x11,                                                                                                 // 1077
    0x00, 0x60, 0xC0, 0x00, 0xE0, 0xE0, 0x00, 0xC0, 0x60, 0x00, 0x10, 0x18, 0x04, 0x03, 0x1F, 0x1F, 0x03, 0x04, 0x18, 0x10,                                                 // 1078
    0x00, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x08, 0x10, 0x11, 0x11, 0x11, 0x0E,                                                                                                 // 1079
    0xE0, 0x00, 0x00, 0x00, 0xC0, 0x60, 0xE0, 0x1F, 0x18, 0x0C, 0x03, 0x00, 0x00, 0x1F,                                                                                     // 1080
    0xE0, 0x0C, 0x08, 0x08, 0xCC, 0x60, 0xE0, 0x1F, 0x18, 0x0C, 0x03, 0x00, 0x00, 0x1F,                                                                                     // 1081
    0xE0, 0x00, 0x80, 0xC0, 0x20, 0x1F, 0x01, 0x03, 0x0C, 0x18,                                                                                                             // 1082
    0x00, 0x00, 0xE0, 0x20, 0x20, 0x20, 0xE0, 0x10, 0x18, 0x07, 0x00, 0x00, 0x00, 0x1F,                                                                                     // 1083
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0x80, 0x60, 0xE0, 0x1F, 0x00, 0x03, 0x1C, 0x1C, 0x03, 0x00, 0x1F,                                                                         // 1084
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F,                                                                                     // 1085
    0xC0, 0x60, 0x20, 0x20, 0x60, 0xC0, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F,                                                                                                 // 1086
    0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,                                                                                     // 1087
    0xE0, 0xC0, 0x20, 0x20, 0x20, 0x60, 0xC0, 0xFF, 0x0C, 0x10, 0x10, 0x10, 0x18, 0x0F,                                                                                     // 1088
    0xC0, 0x60, 0x20, 0x20, 0x20, 0x0F, 0x18, 0x10, 0x10, 0x10,                                                                                                             // 1089
    0x20, 0x20, 0x20, 0xE0, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,                                                                                     // 1090
    0x20, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x80, 0x81, 0xC7, 0x38, 0x0E, 0x01, 0x00,                                                                                     // 1091
    0x80, 0x40, 0x20, 0xFC, 0xFC, 0x20, 0x40, 0x80, 0x07, 0x08, 0x10, 0xFF, 0xFF, 0x10, 0x08, 0x07,                                                                         // 1092
    0x00, 0x60, 0xC0, 0x00, 0xC0, 0x60, 0x10, 0x18, 0x06, 0x03, 0x04, 0x18,                                                                                                 // 1093
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0xF0,                                                                         // 1094
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x03, 0x02, 0x02, 0x02, 0x01, 0x1F,                                                                                     // 1095
    0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x1F,                                                 // 1096
    0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0xF0,                         // 1097
    0x20, 0x20, 0x20, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x0E,                                                             // 1098
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x0E, 0x00, 0x00, 0x1F,                                                             // 1099
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x0E,                                                                                                 // 1100
    0x00, 0x20, 0x20, 0x20, 0x60, 0xC0, 0x10, 0x11, 0x11, 0x11, 0x09, 0x0F,                                                                                                 // 1101
    0xE0, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x20, 0x20, 0x60, 0xC0, 0x1F, 0x01, 0x01, 0x03, 0x0F, 0x10, 0x10, 0x10, 0x18, 0x0F,                                                 // 1102
    0xC0, 0x20, 0x20, 0x20, 0x20, 0xE0, 0x19, 0x0E, 0x02, 0x02, 0x02, 0x1F,                                                                                                 // 1103
    0xC0, 0x60, 0x24, 0x28, 0x20, 0xC0, 0x0F, 0x19, 0x11, 0x11, 0x11, 0x11,                                                                                                 // 1104
    0xC0, 0x68, 0x20, 0x20, 0x28, 0xC0, 0x0F, 0x19, 0x11, 0x11, 0x11, 0x11                                                                                                  // 1105
};

#endif