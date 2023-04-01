/*******************************************************************************
 * Size: 36 px
 * Bpp: 2
 * Opts: --font DSEG7Classic-BoldItalic.ttf -r 0x20-0x3F --size 36 --format lvgl --bpp 2 -o c_files//seg7_36.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef SEG7_36
#define SEG7_36 1
#endif

#if SEG7_36

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */

    /* U+002D "-" */
    0x3, 0x5f, 0xfc, 0x0, 0xcc, 0xbf, 0xfc, 0xc,
    0xc, 0x1f, 0xfc, 0x2c, 0x43, 0xff, 0x87, 0x3,
    0xf, 0xfe, 0xe, 0x80,

    /* U+002E "." */
    0x14, 0x6, 0x99, 0x5, 0x21, 0x72, 0x28,

    /* U+0030 "0" */
    0xf, 0x57, 0xff, 0x11, 0xf, 0xda, 0xff, 0xf1,
    0x24, 0x39, 0x60, 0xff, 0xe2, 0x24, 0x1a, 0x9a,
    0x1f, 0xfc, 0x27, 0x90, 0xf5, 0xa1, 0xff, 0xc0,
    0x78, 0x39, 0xa, 0x9f, 0xff, 0xc1, 0x83, 0xff,
    0x99, 0x87, 0xff, 0x57, 0xf, 0xfe, 0x2a, 0x12,
    0x1f, 0xfd, 0x54, 0x3f, 0xf9, 0x28, 0x7f, 0xf2,
    0x70, 0xff, 0xea, 0xe1, 0xff, 0xda, 0x43, 0x21,
    0xff, 0xd0, 0x42, 0x50, 0x7f, 0xf0, 0x10, 0xff,
    0x30, 0x7f, 0xf0, 0xb0, 0xf3, 0x50, 0x7f, 0xf1,
    0x3a, 0x4, 0xd0, 0x3f, 0xf8, 0xb4, 0xc2, 0xc1,
    0x87, 0xff, 0xf, 0x43, 0xfa, 0xf, 0xfe, 0xe,
    0x1f, 0x21, 0xff, 0xc9, 0xc3, 0xff, 0xdf, 0x87,
    0xff, 0x15, 0xf, 0xfe, 0x42, 0x1f, 0xfd, 0x54,
    0x32, 0x1f, 0xfd, 0xac, 0x3f, 0xfa, 0xb8, 0x7f,
    0xf2, 0x50, 0xfa, 0x6b, 0xfe, 0x70, 0xff, 0x5c,
    0xbf, 0xf5, 0xc1, 0xfa, 0x88, 0x7f, 0xf0, 0x52,
    0x20, 0xae, 0xf, 0xfe, 0x24, 0x61, 0xe4, 0x3f,
    0xf8, 0xa8, 0x70,

    /* U+0031 "1" */
    0xf, 0xfe, 0xd, 0x87, 0x48, 0x76, 0x87, 0x41,
    0xff, 0xc7, 0x42, 0x43, 0xff, 0x8f, 0x87, 0xff,
    0x2d, 0x2, 0x1f, 0xfc, 0x35, 0x7, 0xd2, 0x1f,
    0x5e, 0xe, 0xf4, 0x1b, 0xf, 0x61, 0xff, 0x61,
    0xff, 0xcb, 0x40, 0x87, 0xff, 0x2f, 0xf, 0xfe,
    0x3a, 0x14, 0x1f, 0xa0, 0xf9, 0x88, 0x39, 0xc3,
    0x0,

    /* U+0032 "2" */
    0xf, 0x57, 0xff, 0x11, 0xf, 0xda, 0xff, 0xf1,
    0x24, 0x3e, 0x43, 0xff, 0x88, 0x90, 0x7a, 0x43,
    0xff, 0x84, 0xf2, 0x1f, 0x48, 0x7f, 0xf0, 0x1e,
    0xf, 0xf5, 0xff, 0xfc, 0x18, 0x3f, 0xf9, 0x98,
    0x7f, 0xf9, 0xd0, 0x90, 0xff, 0xff, 0x83, 0xf,
    0xff, 0xe2, 0x19, 0xf, 0xfe, 0xab, 0x5f, 0xfc,
    0x4, 0x3f, 0xe6, 0x5f, 0xfe, 0x7, 0x83, 0xf9,
    0x83, 0xff, 0x85, 0xea, 0x4, 0xf9, 0xf, 0xfe,
    0x1c, 0x28, 0x2c, 0x1e, 0xf, 0xfe, 0xe, 0x87,
    0xfa, 0xff, 0xfe, 0x8, 0x7e, 0x43, 0xff, 0xfe,
    0x1e, 0xc3, 0xff, 0xf8, 0x86, 0x43, 0xff, 0xf9,
    0x87, 0xff, 0x46, 0x6b, 0xfe, 0x43, 0xfe, 0xb9,
    0x7f, 0xea, 0x7, 0xf5, 0x10, 0xff, 0xe0, 0xa8,
    0x3d, 0x70, 0x7f, 0xf1, 0x24, 0x3e, 0x43, 0xff,
    0x8a, 0x87, 0x0,

    /* U+0033 "3" */
    0xe, 0xaf, 0xfe, 0x22, 0x1f, 0x6b, 0xff, 0xc4,
    0x90, 0xf2, 0x1f, 0xfc, 0x44, 0x83, 0xa4, 0x3f,
    0xf8, 0x4f, 0x21, 0xe9, 0xf, 0xfe, 0x3, 0xc1,
    0xfd, 0x7f, 0xff, 0x6, 0xf, 0xfe, 0x5e, 0x1f,
    0xfe, 0x54, 0x24, 0x3f, 0xff, 0xd8, 0x7f, 0xfe,
    0x50, 0xc8, 0x7f, 0xf4, 0xda, 0xff, 0xe0, 0x21,
    0xfe, 0x65, 0xff, 0xe0, 0x78, 0x3f, 0x30, 0x7f,
    0xf0, 0xbd, 0x40, 0xe4, 0x3f, 0xf8, 0x75, 0x61,
    0xec, 0x3f, 0xf8, 0x34, 0x43, 0xfb, 0xff, 0xf8,
    0x30, 0x7f, 0xf4, 0x30, 0xff, 0xff, 0x21, 0xff,
    0xc7, 0x43, 0xff, 0xfd, 0x87, 0xff, 0xa5, 0xf,
    0x9a, 0xff, 0x9c, 0x3f, 0xd4, 0x5f, 0xfa, 0xe0,
    0xfd, 0xa1, 0xff, 0xc1, 0x48, 0x83, 0x61, 0xff,
    0xc4, 0x8c, 0x39, 0xf, 0xfe, 0x2a, 0x1c,

    /* U+0034 "4" */
    0x3, 0x7, 0xff, 0x19, 0x82, 0x94, 0x1f, 0xfc,
    0x46, 0x43, 0xa4, 0x3f, 0xf8, 0x4c, 0x19, 0xa,
    0xf, 0xfe, 0xb, 0x7, 0xff, 0x2f, 0xf, 0xfe,
    0x9e, 0x1f, 0xfc, 0x54, 0x24, 0x3f, 0xfa, 0x68,
    0x7f, 0xf2, 0x10, 0xff, 0xe4, 0xe1, 0xff, 0xd3,
    0xc3, 0xff, 0xb2, 0x86, 0x43, 0xff, 0x9c, 0x84,
    0x95, 0xff, 0xc0, 0x43, 0xf9, 0xe5, 0xff, 0xe0,
    0x78, 0x39, 0xa7, 0x7, 0xff, 0xb, 0xd4, 0x9,
    0x60, 0xff, 0xe1, 0xd5, 0x87, 0xb0, 0xff, 0xe0,
    0xd1, 0xf, 0xef, 0xff, 0xe0, 0xc1, 0xff, 0xd0,
    0xc3, 0xff, 0xfc, 0x87, 0xff, 0x1d, 0xf, 0xff,
    0xf6, 0x1f, 0xfe, 0x94, 0x3f, 0xf9, 0x18, 0x7f,
    0xf3, 0x18, 0x3f, 0xf9, 0x8a, 0x20, 0xff, 0xe5,
    0x58, 0x60,

    /* U+0035 "5" */
    0xe, 0xaf, 0xfe, 0x22, 0x1d, 0xaf, 0xff, 0x12,
    0x40, 0xb0, 0x7f, 0xf1, 0x14, 0xa, 0x68, 0x7f,
    0xf0, 0x98, 0x3a, 0xd0, 0xff, 0xe0, 0x30, 0x48,
    0x54, 0xff, 0xfe, 0x4, 0x1f, 0xfe, 0x6c, 0x3f,
    0xfc, 0xa8, 0x7f, 0xf1, 0x90, 0xff, 0xf2, 0xe1,
    0xff, 0xf3, 0x42, 0x4a, 0xff, 0xe0, 0x7, 0xe7,
    0x97, 0xff, 0x81, 0x86, 0x69, 0xc1, 0xff, 0xc2,
    0xc3, 0x2c, 0x1f, 0xfc, 0x3a, 0x70, 0x6c, 0x3f,
    0xf8, 0x34, 0x43, 0xef, 0xff, 0xe0, 0xc1, 0xff,
    0xce, 0xc3, 0xff, 0xf0, 0x87, 0xff, 0x15, 0xf,
    0xff, 0xc6, 0x1f, 0xfe, 0x54, 0x39, 0xaf, 0xf9,
    0xc3, 0xf5, 0x17, 0xfe, 0xb8, 0x3d, 0xa1, 0xff,
    0xc1, 0x48, 0x81, 0x87, 0xff, 0x12, 0x30, 0x90,
    0xff, 0xe2, 0xa1, 0x0,

    /* U+0036 "6" */
    0xf, 0x57, 0xff, 0x11, 0xf, 0x6b, 0xff, 0xc4,
    0x90, 0x96, 0xf, 0xfe, 0x22, 0x82, 0xa6, 0x87,
    0xff, 0x9, 0x83, 0xd6, 0x87, 0xff, 0x1, 0x83,
    0x21, 0x53, 0xff, 0xf8, 0x10, 0x7f, 0xfa, 0x70,
    0xff, 0xf3, 0xa1, 0xff, 0xc7, 0x43, 0xff, 0xcf,
    0x87, 0xff, 0xd9, 0x9, 0x2b, 0xff, 0x80, 0x1f,
    0xcf, 0x2f, 0xff, 0x3, 0xe, 0x69, 0xc1, 0xff,
    0xc2, 0xc3, 0x34, 0x43, 0xff, 0x87, 0x4e, 0x30,
    0x78, 0x3f, 0xf8, 0x34, 0x43, 0xeb, 0xff, 0xf8,
    0x30, 0x72, 0x1f, 0xfc, 0x9c, 0x3f, 0xfd, 0x38,
    0x7f, 0xf1, 0x50, 0xff, 0xe3, 0x21, 0xff, 0xd1,
    0x43, 0x21, 0xff, 0xd8, 0xc3, 0xff, 0xa3, 0x87,
    0xff, 0x25, 0xe, 0x9a, 0xff, 0x9c, 0x3f, 0x5c,
    0xbf, 0xf5, 0xc1, 0xea, 0x21, 0xff, 0xc1, 0x48,
    0x8b, 0x83, 0xff, 0x89, 0x18, 0x64, 0x3f, 0xf8,
    0xa8, 0x40,

    /* U+0037 "7" */
    0xe, 0xaf, 0xfe, 0x22, 0x1f, 0x6b, 0xff, 0xc4,
    0x90, 0xcb, 0x7, 0xff, 0x11, 0x20, 0xa9, 0xa1,
    0xff, 0xc2, 0x49, 0xe, 0xb4, 0x3f, 0xf8, 0x8,
    0x86, 0x42, 0xa7, 0xff, 0xf0, 0x50, 0xff, 0xe5,
    0xe1, 0xff, 0xd3, 0xc3, 0xff, 0x8a, 0x84, 0x87,
    0xff, 0x4d, 0xf, 0xfe, 0x42, 0x1f, 0xfc, 0x9c,
    0x3f, 0xfa, 0x78, 0x7f, 0xf6, 0x50, 0xc8, 0x7f,
    0xf3, 0x90, 0x94, 0x1f, 0xfc, 0x4, 0x3f, 0xa8,
    0x1f, 0xfc, 0x2c, 0x39, 0xb4, 0x3f, 0xf8, 0x9d,
    0x84, 0x87, 0xff, 0x1b, 0xa0, 0x7f, 0xf2, 0x70,
    0xff, 0xe5, 0xe1, 0xff, 0xd0, 0xc3, 0xff, 0xfc,
    0x87, 0xff, 0x1d, 0xf, 0xff, 0xf6, 0x1f, 0xfe,
    0x94, 0x3f, 0xf9, 0x10, 0x7f, 0xf3, 0x60, 0xff,
    0xe6, 0x31, 0x7, 0xff, 0x29, 0xc3, 0x0,

    /* U+0038 "8" */
    0xf, 0x57, 0xff, 0x11, 0xf, 0xda, 0xff, 0xf1,
    0x24, 0x39, 0x60, 0xff, 0xe2, 0x24, 0x1a, 0x9a,
    0x1f, 0xfc, 0x27, 0x90, 0xf5, 0xa1, 0xff, 0xc0,
    0x78, 0x39, 0xa, 0x9f, 0xff, 0xc1, 0x83, 0xff,
    0x99, 0x87, 0xff, 0x57, 0xf, 0xfe, 0x2a, 0x12,
    0x1f, 0xfd, 0x54, 0x3f, 0xf9, 0x28, 0x7f, 0xf2,
    0x70, 0xff, 0xea, 0xe1, 0xff, 0xda, 0x43, 0x21,
    0xff, 0xd0, 0x42, 0x4a, 0xff, 0xe0, 0x21, 0xfe,
    0x79, 0x7f, 0xf8, 0x1e, 0xf, 0x34, 0xe0, 0xff,
    0xe1, 0x7a, 0x81, 0x34, 0x43, 0xff, 0x87, 0x56,
    0x16, 0xf, 0x7, 0xff, 0x6, 0x88, 0x7f, 0x5f,
    0xff, 0xc1, 0x83, 0xe4, 0x3f, 0xf9, 0x38, 0x7f,
    0xfb, 0xf0, 0xff, 0xe2, 0xa1, 0xff, 0xc8, 0x43,
    0xff, 0xaa, 0x86, 0x43, 0xff, 0xb5, 0x87, 0xff,
    0x57, 0xf, 0xfe, 0x4a, 0x1f, 0x4d, 0x7f, 0xce,
    0x1f, 0xeb, 0x97, 0xfe, 0xb8, 0x3f, 0x51, 0xf,
    0xfe, 0xa, 0x44, 0x15, 0xc1, 0xff, 0xc4, 0x8c,
    0x3c, 0x87, 0xff, 0x15, 0xe,

    /* U+0039 "9" */
    0xe, 0xaf, 0xfe, 0x22, 0x1f, 0x6b, 0xff, 0xc4,
    0x90, 0xcb, 0x7, 0xff, 0x11, 0x20, 0xa9, 0xa1,
    0xff, 0xc2, 0x79, 0xe, 0xb4, 0x3f, 0xf8, 0xf,
    0x6, 0x42, 0xa7, 0xff, 0xf0, 0x60, 0xff, 0xe5,
    0xe1, 0xff, 0xd3, 0xc3, 0xff, 0x8a, 0x84, 0x87,
    0xff, 0x4d, 0xf, 0xfe, 0x42, 0x1f, 0xfc, 0x9c,
    0x3f, 0xfa, 0x78, 0x7f, 0xf6, 0x50, 0xc8, 0x7f,
    0xf3, 0x90, 0x92, 0xbf, 0xf8, 0x8, 0x7f, 0x3c,
    0xbf, 0xfc, 0xf, 0x7, 0x34, 0xe0, 0xff, 0xe1,
    0x7a, 0x81, 0x2c, 0x1f, 0xfc, 0x3a, 0xb0, 0xf6,
    0x1f, 0xfc, 0x1a, 0x21, 0xfd, 0xff, 0xfc, 0x18,
    0x3f, 0xfa, 0x18, 0x7f, 0xff, 0x90, 0xff, 0xe3,
    0xa1, 0xff, 0xfe, 0xc3, 0xff, 0xd2, 0x87, 0xcd,
    0x7f, 0xce, 0x1f, 0xea, 0x2f, 0xfd, 0x70, 0x7e,
    0xd0, 0xff, 0xe0, 0xa4, 0x41, 0xb0, 0xff, 0xe2,
    0x46, 0x1c, 0x87, 0xff, 0x15, 0xe,

    /* U+003A ":" */
    0x9, 0x41, 0xaa, 0xc2, 0x42, 0x43, 0xfb, 0x2,
    0x82, 0xf4, 0x1f, 0xff, 0x65, 0x6, 0xea, 0xf,
    0x21, 0xfe, 0x81, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 115, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 470, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 470, .box_w = 18, .box_h = 5, .ofs_x = 6, .ofs_y = 16},
    {.bitmap_index = 20, .adv_w = 0, .box_w = 5, .box_h = 5, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 470, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 470, .box_w = 8, .box_h = 35, .ofs_x = 20, .ofs_y = 1},
    {.bitmap_index = 215, .adv_w = 470, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 470, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 470, .box_w = 25, .box_h = 34, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 547, .adv_w = 470, .box_w = 23, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 470, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 470, .box_w = 25, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 888, .adv_w = 470, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 470, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1155, .adv_w = 115, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = 8}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0xd, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 5,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
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
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 1,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t seg7_36 = {
#else
lv_font_t seg7_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 37,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if SEG7_36*/
