/*******************************************************************************
 * Size: 18 px
 * Bpp: 4
 * Opts: --bpp 4 --size 18 --font D:\projects\SquareLine_Projects\OV_Watch\DateDaySet_Page\assets\方正粗圆简体.TTF -o D:\projects\SquareLine_Projects\OV_Watch\DateDaySet_Page\assets\ui_font_Cuyuan18.c --format lvgl --symbols 改写选择开发中今日步数 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_CUYUAN18
#define UI_FONT_CUYUAN18 1
#endif

#if UI_FONT_CUYUAN18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+4E2D "中" */
    0x0, 0x0, 0x0, 0xe, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x0,
    0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9,
    0xdf, 0x61, 0x11, 0x4f, 0xe1, 0x11, 0x19, 0xf9,
    0xdf, 0x40, 0x0, 0x3f, 0xe0, 0x0, 0x8, 0xf9,
    0xdf, 0x40, 0x0, 0x3f, 0xe0, 0x0, 0x8, 0xf9,
    0xdf, 0x40, 0x0, 0x3f, 0xe0, 0x0, 0x8, 0xf9,
    0xdf, 0x50, 0x0, 0x3f, 0xe0, 0x0, 0x8, 0xf9,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9,
    0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5,
    0x0, 0x11, 0x11, 0x4f, 0xe1, 0x11, 0x11, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1e, 0xa0, 0x0, 0x0, 0x0,

    /* U+4ECA "今" */
    0x0, 0x0, 0x0, 0x0, 0x67, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1c, 0xff, 0xb1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xef, 0xff, 0xfe,
    0x40, 0x0, 0x0, 0x0, 0x1, 0x9f, 0xfd, 0x21,
    0xcf, 0xf9, 0x10, 0x0, 0x0, 0x7e, 0xff, 0xa3,
    0x82, 0x9, 0xff, 0xe6, 0x0, 0xd, 0xff, 0xd4,
    0x9, 0xfe, 0x10, 0x5e, 0xff, 0xc0, 0xd, 0xc6,
    0x0, 0x1, 0xef, 0xc0, 0x0, 0x7e, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x4f, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0x80, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x0, 0x2, 0xcd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdf, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3c, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x3, 0x7c, 0xff, 0xf5, 0x0, 0x0, 0x0,
    0x7, 0xdf, 0xff, 0xff, 0xf9, 0x10, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xfd, 0xa6, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x31, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+5199 "写" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0xb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0xbf, 0x64, 0xa3, 0x11, 0x11, 0x11,
    0x17, 0xfd, 0xb, 0xf4, 0xaf, 0x71, 0x11, 0x11,
    0x10, 0x9f, 0xb0, 0x9f, 0x2c, 0xff, 0xff, 0xff,
    0xff, 0xec, 0xf5, 0x0, 0x0, 0xef, 0xff, 0xff,
    0xff, 0xff, 0x23, 0x0, 0x0, 0xf, 0xf2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x32,
    0x22, 0x22, 0x22, 0x20, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf1, 0x0, 0x1, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xf4, 0xc, 0xee,
    0xee, 0xee, 0xee, 0xee, 0x60, 0xbf, 0x41, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0xc, 0xf4, 0x1,
    0x33, 0x33, 0x33, 0x33, 0x35, 0x10, 0xef, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3c, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x10,
    0x0,

    /* U+53D1 "发" */
    0x0, 0x3, 0x20, 0xc, 0xc0, 0x0, 0x62, 0x0,
    0x0, 0x0, 0x2f, 0xf0, 0x2f, 0xf0, 0x4, 0xfe,
    0x30, 0x0, 0x0, 0x9f, 0x90, 0x5f, 0xc0, 0x0,
    0xaf, 0xe0, 0x0, 0x0, 0xff, 0x40, 0x8f, 0x90,
    0x0, 0x9, 0xc0, 0x0, 0x5, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb0, 0x2, 0xcd, 0xdd,
    0xff, 0xdd, 0xdd, 0xdd, 0xdd, 0x90, 0x0, 0x0,
    0x3, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xdd, 0xdd, 0xdd, 0xa0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xff, 0xff, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x5f, 0xef, 0xf2, 0x0, 0x7f,
    0xe0, 0x0, 0x0, 0x0, 0xcf, 0x5b, 0xfa, 0x0,
    0xef, 0x60, 0x0, 0x0, 0x6, 0xfe, 0x2, 0xff,
    0x7b, 0xfc, 0x0, 0x0, 0x0, 0x1e, 0xf5, 0x0,
    0x5f, 0xff, 0xe1, 0x0, 0x0, 0x0, 0xbf, 0xb0,
    0x0, 0x4e, 0xff, 0xc2, 0x0, 0x0, 0x9, 0xfe,
    0x13, 0x7c, 0xff, 0xef, 0xff, 0xa4, 0x0, 0x3f,
    0xf4, 0xdf, 0xff, 0xe6, 0x2, 0x9f, 0xff, 0xd1,
    0x6, 0x20, 0xce, 0x94, 0x0, 0x0, 0x1, 0x8e,
    0xe1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+5F00 "开" */
    0x6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0xf, 0xf2, 0x0, 0x2,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf2, 0x0,
    0x2, 0xfd, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf2,
    0x0, 0x2, 0xfd, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xf2, 0x0, 0x2, 0xfd, 0x0, 0x0, 0x1, 0x22,
    0x2f, 0xf5, 0x22, 0x25, 0xfe, 0x22, 0x20, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6,
    0xc, 0xee, 0xef, 0xfe, 0xee, 0xee, 0xff, 0xee,
    0xd4, 0x0, 0x0, 0x2f, 0xf0, 0x0, 0x2, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xe0, 0x0, 0x2,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xa0, 0x0,
    0x2, 0xfd, 0x0, 0x0, 0x0, 0x4, 0xff, 0x50,
    0x0, 0x2, 0xfd, 0x0, 0x0, 0x0, 0x2e, 0xfd,
    0x0, 0x0, 0x2, 0xfd, 0x0, 0x0, 0x1, 0xef,
    0xf3, 0x0, 0x0, 0x2, 0xfd, 0x0, 0x0, 0x2,
    0xed, 0x30, 0x0, 0x0, 0x0, 0xea, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+62E9 "择" */
    0x0, 0x6, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x5f, 0xff, 0xff, 0xff,
    0xfe, 0x30, 0x0, 0x1f, 0xd0, 0x6f, 0xff, 0xff,
    0xff, 0xff, 0x40, 0x5, 0xcf, 0xfb, 0x38, 0xfc,
    0x10, 0xc, 0xfa, 0x0, 0xa, 0xff, 0xff, 0x71,
    0xef, 0xd5, 0xbf, 0xd0, 0x0, 0x0, 0x4f, 0xd3,
    0x0, 0x2d, 0xff, 0xfc, 0x10, 0x0, 0x0, 0x1f,
    0xd0, 0x1, 0x6d, 0xff, 0xff, 0xb7, 0x30, 0x0,
    0x1f, 0xe7, 0x3f, 0xff, 0xda, 0xbf, 0xff, 0xf6,
    0x0, 0x4f, 0xff, 0x5c, 0xa4, 0x3f, 0xb0, 0x47,
    0x92, 0x9, 0xff, 0xf6, 0x8, 0xbb, 0xcf, 0xeb,
    0xba, 0x0, 0xf, 0xff, 0xd0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0x30, 0x2, 0x2f, 0xd0, 0x2, 0x44,
    0x7f, 0xd4, 0x43, 0x0, 0x0, 0x1f, 0xd0, 0x0,
    0x0, 0x4f, 0xc0, 0x0, 0x0, 0x0, 0x1f, 0xd0,
    0xaf, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x2f,
    0xd0, 0x9e, 0xee, 0xff, 0xfe, 0xee, 0xc0, 0x8,
    0xff, 0xc0, 0x0, 0x0, 0x4f, 0xc0, 0x0, 0x0,
    0x4, 0xbb, 0x50, 0x0, 0x0, 0x2f, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0,
    0x0, 0x0,

    /* U+6539 "改" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x20, 0x0, 0x0,
    0x1, 0x66, 0x66, 0x64, 0x0, 0xef, 0x20, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xf1, 0x3f, 0xf4, 0x33,
    0x32, 0x2, 0x99, 0x99, 0xff, 0x27, 0xff, 0xff,
    0xff, 0xf3, 0x0, 0x0, 0xd, 0xf2, 0xdf, 0xdb,
    0xbf, 0xfb, 0x10, 0x0, 0x0, 0xdf, 0x6f, 0xf4,
    0x0, 0xff, 0x0, 0xd, 0xff, 0xff, 0xfd, 0xff,
    0x80, 0xf, 0xe0, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x2, 0xfc, 0x0, 0x3f, 0xc0, 0x0, 0xbf,
    0x8f, 0xf2, 0x6f, 0x90, 0x3, 0xfb, 0x0, 0x7,
    0xa0, 0xcf, 0x8b, 0xf5, 0x0, 0x3f, 0xb0, 0x0,
    0x0, 0x6, 0xfe, 0xff, 0x0, 0x3, 0xfb, 0x0,
    0x1, 0x0, 0xe, 0xff, 0x90, 0x0, 0x3f, 0xb0,
    0x3a, 0xfa, 0x0, 0xcf, 0xf6, 0x0, 0x3, 0xfe,
    0xcf, 0xff, 0x71, 0xbf, 0xff, 0xf4, 0x0, 0x3f,
    0xff, 0xe8, 0x15, 0xef, 0xf4, 0xbf, 0xf7, 0x0,
    0x78, 0x40, 0x6, 0xff, 0xd2, 0x0, 0xaf, 0xf3,
    0x0, 0x0, 0x0, 0x2c, 0x80, 0x0, 0x0, 0x69,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+6570 "数" */
    0x1, 0x40, 0x6, 0x20, 0x42, 0x2, 0x60, 0x0,
    0x0, 0x8, 0xf4, 0x2f, 0xa2, 0xfa, 0xa, 0xf1,
    0x0, 0x0, 0x2, 0xfd, 0x3f, 0xb9, 0xf4, 0xd,
    0xf8, 0x77, 0x72, 0x0, 0x69, 0x3f, 0xb6, 0x80,
    0xf, 0xff, 0xff, 0xfb, 0xa, 0xff, 0xff, 0xff,
    0xff, 0x4f, 0xd8, 0x9f, 0xe4, 0x7, 0xcd, 0xff,
    0xec, 0xca, 0x8f, 0x70, 0x3f, 0xb0, 0x0, 0xb,
    0xff, 0xba, 0x50, 0xdf, 0x50, 0x4f, 0xa0, 0x2,
    0xdf, 0xdf, 0xef, 0xfa, 0xff, 0x80, 0x7f, 0x70,
    0xe, 0xf8, 0x4f, 0x74, 0xef, 0xff, 0xc0, 0xaf,
    0x40, 0x7, 0x63, 0xef, 0x22, 0x13, 0x8f, 0xf1,
    0xef, 0x10, 0xf, 0xff, 0xff, 0xff, 0xf5, 0xa,
    0xfb, 0xfc, 0x0, 0x9, 0xcf, 0xeb, 0xbd, 0xf8,
    0x4, 0xff, 0xf7, 0x0, 0x0, 0xbf, 0xd5, 0x2d,
    0xe1, 0x0, 0xcf, 0xf1, 0x0, 0x0, 0x7e, 0xff,
    0xff, 0x70, 0x5, 0xff, 0xf9, 0x0, 0x0, 0x17,
    0xff, 0xff, 0xf6, 0x8f, 0xfa, 0xff, 0x90, 0xa,
    0xff, 0xe8, 0x26, 0xbf, 0xff, 0x70, 0x3e, 0xf6,
    0x6, 0x94, 0x0, 0x0, 0x2f, 0xd3, 0x0, 0x1,
    0x82, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+65E5 "日" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0x61, 0x11,
    0x11, 0x11, 0x15, 0xfe, 0xdf, 0x40, 0x0, 0x0,
    0x0, 0x3, 0xfe, 0xdf, 0x40, 0x0, 0x0, 0x0,
    0x3, 0xfe, 0xdf, 0x40, 0x0, 0x0, 0x0, 0x3,
    0xfe, 0xdf, 0xee, 0xee, 0xee, 0xee, 0xee, 0xfe,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xdf,
    0x74, 0x44, 0x44, 0x44, 0x46, 0xfe, 0xdf, 0x40,
    0x0, 0x0, 0x0, 0x3, 0xfe, 0xdf, 0x40, 0x0,
    0x0, 0x0, 0x3, 0xfe, 0xdf, 0x40, 0x0, 0x0,
    0x0, 0x3, 0xfe, 0xdf, 0x40, 0x0, 0x0, 0x0,
    0x3, 0xfe, 0xdf, 0x63, 0x33, 0x33, 0x33, 0x35,
    0xfe, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+6B65 "步" */
    0x0, 0x0, 0x0, 0x0, 0x89, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0x70, 0x0, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xf1, 0x0, 0xff, 0xee,
    0xee, 0xec, 0x0, 0x0, 0xd, 0xf1, 0x0, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0xd, 0xf1, 0x0,
    0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0xd, 0xf1,
    0x0, 0xff, 0x10, 0x0, 0x0, 0x0, 0x4d, 0xdf,
    0xfd, 0xdd, 0xff, 0xdd, 0xdd, 0xdd, 0xc1, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x8, 0xf6, 0x0, 0xfe, 0x0, 0x1,
    0xdf, 0x10, 0x0, 0x8f, 0xf7, 0x0, 0xfe, 0x0,
    0xb, 0xfd, 0x0, 0x7, 0xff, 0xa0, 0x0, 0xfe,
    0x0, 0xbf, 0xf3, 0x0, 0x5f, 0xfb, 0x0, 0x0,
    0xfe, 0x4d, 0xff, 0x40, 0x0, 0x4f, 0x80, 0x0,
    0x0, 0xff, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x1,
    0x47, 0xbf, 0xff, 0xf9, 0x10, 0x0, 0x0, 0xa,
    0xff, 0xff, 0xff, 0xb6, 0x10, 0x0, 0x0, 0x0,
    0x7, 0xfe, 0xb8, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+9009 "选" */
    0x0, 0x30, 0x0, 0x0, 0x0, 0x37, 0x0, 0x0,
    0x0, 0x9, 0xfb, 0x0, 0x4, 0x90, 0xbf, 0x40,
    0x0, 0x0, 0x2, 0xdf, 0xd1, 0xe, 0xf4, 0xbf,
    0x50, 0x0, 0x0, 0x0, 0x1b, 0xf3, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0x20, 0x0, 0x0, 0x21, 0xff,
    0xee, 0xff, 0xfe, 0xed, 0x20, 0x0, 0x0, 0x5,
    0xfc, 0x0, 0xbf, 0x40, 0x0, 0x0, 0x8, 0x99,
    0x44, 0xfd, 0xbb, 0xef, 0xdb, 0xbb, 0x90, 0x2f,
    0xff, 0xd9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x4, 0x7f, 0xd0, 0x33, 0xaf, 0x7e, 0xf5, 0x33,
    0x20, 0x0, 0x1f, 0xd0, 0x0, 0xcf, 0x2e, 0xf2,
    0x1, 0x30, 0x0, 0x1f, 0xd0, 0x4, 0xfe, 0xe,
    0xf2, 0xa, 0xf1, 0x0, 0x1f, 0xd0, 0x3e, 0xf8,
    0xe, 0xf4, 0xd, 0xf1, 0x0, 0x3f, 0xe4, 0xff,
    0xc0, 0xd, 0xff, 0xff, 0xe0, 0x1, 0xdf, 0xf6,
    0xd8, 0x0, 0x7, 0xef, 0xec, 0x30, 0xc, 0xff,
    0xfe, 0x72, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xe5, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb0,
    0x4c, 0x20, 0x4, 0xad, 0xff, 0xff, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 288, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 136, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 298, .adv_w = 288, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 451, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 613, .adv_w = 288, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 766, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 928, .adv_w = 288, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1081, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1243, .adv_w = 288, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1369, .adv_w = 288, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1522, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x9d, 0x36c, 0x5a4, 0x10d3, 0x14bc, 0x170c, 0x1743,
    0x17b8, 0x1d38, 0x41dc
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 20013, .range_length = 16861, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 11, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Cuyuan18 = {
#else
lv_font_t ui_font_Cuyuan18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_CUYUAN18*/

