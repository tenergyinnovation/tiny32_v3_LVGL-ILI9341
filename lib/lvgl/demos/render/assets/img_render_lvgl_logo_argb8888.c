#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_RENDER_LVGL_LOGO_ARGB8888
    #define LV_ATTRIBUTE_IMG_IMG_RENDER_LVGL_LOGO_ARGB8888
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_RENDER_LVGL_LOGO_ARGB8888 uint8_t
img_render_lvgl_logo_argb8888_map[] = {
    0xff,0xff,0xff,0x00,0xfe,0xfe,0xfe,0x00,0xaa,0xaa,0xa8,0x62,0x65,0x64,0x61,0xb7,0x5f,0x5e,0x5b,0xc3,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc1,0x60,0x60,0x5c,0xc2,0x5e,0x5d,0x5a,0xc4,0x7f,0x7e,0x7b,0x94,0xdc,0xdc,0xdc,0x26,0xff,0xff,0xff,0x00,
    0xfb,0xfb,0xfa,0x03,0x86,0x86,0x83,0x90,0x32,0x31,0x2c,0xfd,0x35,0x34,0x30,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x36,0x35,0x31,0xff,0x2f,0x2e,0x2a,0xff,0x2d,0x2c,0x28,0xff,0x31,0x30,0x2c,0xff,0x49,0x48,0x44,0xde,0xd0,0xd0,0xcf,0x34,
    0xab,0xaa,0xa8,0x61,0x32,0x31,0x2d,0xff,0x38,0x37,0x33,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x34,0x33,0x2f,0xff,0x62,0x61,0x5e,0xff,0x6d,0x6c,0x69,0xff,0x38,0x37,0x33,0xff,0x2d,0x2c,0x28,0xff,0x5d,0x5d,0x59,0xc6,
    0x65,0x65,0x61,0xb9,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x30,0x2f,0x2b,0xff,0x7c,0x7c,0x79,0xff,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0x9e,0x9d,0x9b,0xff,0x2f,0x2e,0x2a,0xff,0x3e,0x3d,0x39,0xf3,
    0x5f,0x5f,0x5b,0xc3,0x36,0x35,0x31,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x2c,0x2b,0x27,0xff,0xb1,0xb2,0xb0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xd9,0xd9,0xd9,0xff,0x33,0x32,0x2e,0xff,0x3e,0x3d,0x39,0xf4,
    0x60,0x60,0x5c,0xc1,0x36,0x35,0x31,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x32,0x31,0x2d,0xff,0x64,0x63,0x60,0xff,0xe9,0xe9,0xe9,0xff,0xf3,0xf3,0xf3,0xff,0x81,0x81,0x7e,0xff,0x30,0x2e,0x2a,0xff,0x3f,0x3e,0x3a,0xf3,
    0x60,0x60,0x5c,0xc1,0x36,0x35,0x31,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x35,0xff,0x33,0x32,0x2d,0xff,0x46,0x45,0x41,0xff,0x4d,0x4c,0x48,0xff,0x33,0x32,0x2e,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x5d,0x5d,0x59,0xc5,0x36,0x35,0x31,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x35,0x34,0x30,0xff,0x34,0x33,0x2f,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x6a,0x69,0x66,0xb3,0x2a,0x29,0x24,0xff,0x2d,0x2c,0x27,0xff,0x2d,0x2c,0x28,0xff,0x2d,0x2c,0x28,0xff,0x2d,0x2c,0x28,0xff,0x2d,0x2c,0x28,0xff,0x2d,0x2c,0x28,0xff,0x2d,0x2c,0x27,0xff,0x32,0x31,0x2d,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0xe6,0xe5,0xe2,0x1c,0xa9,0xa5,0x9c,0x68,0xa2,0x9e,0x94,0x73,0xa3,0x9f,0x95,0x72,0xa3,0x9f,0x95,0x72,0xa3,0x9f,0x95,0x72,0xa3,0x9f,0x95,0x72,0xa4,0xa0,0x96,0x70,0x9f,0x9c,0x92,0x76,0x5f,0x5e,0x5a,0xc5,0x31,0x30,0x2c,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0xf7,0xfb,0xff,0x07,0xc6,0xd9,0xff,0x3e,0xbf,0xd4,0xff,0x47,0xc0,0xd5,0xff,0x46,0xc0,0xd5,0xff,0x46,0xc0,0xd5,0xff,0x46,0xc0,0xd5,0xff,0x46,0xbf,0xd4,0xff,0x48,0xc7,0xda,0xff,0x3c,0xf4,0xf6,0xf7,0x08,0x6d,0x6b,0x67,0xb2,0x31,0x30,0x2c,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x6a,0x94,0xf8,0xa2,0x13,0x56,0xf3,0xff,0x14,0x57,0xf3,0xff,0x15,0x57,0xf3,0xff,0x15,0x57,0xf3,0xff,0x15,0x57,0xf3,0xff,0x15,0x57,0xf3,0xff,0x14,0x57,0xf3,0xff,0x0b,0x50,0xf2,0xff,0xac,0xc8,0xff,0x59,0xc6,0xc2,0xb9,0x43,0x2e,0x2d,0x29,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x48,0x7b,0xf6,0xca,0x1d,0x5d,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x11,0x54,0xf2,0xff,0x91,0xb4,0xff,0x7a,0xcc,0xc8,0xbd,0x3f,0x2f,0x2e,0x2a,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x4d,0x7f,0xf6,0xc4,0x1d,0x5d,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x12,0x55,0xf2,0xff,0x95,0xb6,0xff,0x76,0xca,0xc6,0xbc,0x41,0x2f,0x2e,0x2a,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x4d,0x7f,0xf6,0xc4,0x1d,0x5d,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x12,0x55,0xf2,0xff,0x95,0xb6,0xff,0x76,0xca,0xc6,0xbc,0x41,0x2f,0x2e,0x2a,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x4d,0x7f,0xf6,0xc4,0x1d,0x5d,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x12,0x55,0xf2,0xff,0x95,0xb6,0xff,0x76,0xca,0xc6,0xbc,0x41,0x2f,0x2e,0x2a,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x4d,0x7f,0xf6,0xc4,0x1d,0x5d,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x12,0x55,0xf2,0xff,0x95,0xb6,0xff,0x76,0xca,0xc6,0xbc,0x41,0x2f,0x2e,0x2a,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x4c,0x7f,0xf6,0xc5,0x1d,0x5d,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x20,0x5f,0xf3,0xff,0x12,0x55,0xf2,0xff,0x95,0xb6,0xff,0x77,0xca,0xc6,0xbc,0x42,0x2f,0x2e,0x2a,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x48,0x7c,0xf6,0xc9,0x13,0x56,0xf3,0xff,0x18,0x59,0xf3,0xff,0x18,0x59,0xf3,0xff,0x18,0x59,0xf3,0xff,0x18,0x59,0xf3,0xff,0x18,0x59,0xf3,0xff,0x18,0x59,0xf3,0xff,0x08,0x4e,0xf2,0xff,0x92,0xb4,0xff,0x78,0xc9,0xc5,0xbb,0x41,0x26,0x25,0x21,0xff,0x32,0x31,0x2c,0xff,0x32,0x31,0x2c,0xff,0x32,0x31,0x2c,0xff,0x32,0x31,0x2c,0xff,0x32,0x31,0x2c,0xff,0x32,0x30,0x2c,0xff,0x31,0x30,0x2c,0xff,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0xb4,0xc9,0xfc,0x50,0x52,0x81,0xf9,0xbe,0x4c,0x7d,0xf9,0xc7,0x4d,0x7e,0xf9,0xc6,0x4d,0x7e,0xf9,0xc6,0x4d,0x7e,0xf9,0xc6,0x4d,0x7e,0xf9,0xc6,0x4b,0x7d,0xf9,0xc7,0x4f,0x80,0xf9,0xbe,0xd4,0xe1,0xff,0x2e,0xef,0xee,0xe9,0x11,0x6d,0x6f,0x6d,0xac,0x5b,0x5e,0x5b,0xc3,0x5e,0x61,0x5f,0xc1,0x5e,0x61,0x5f,0xc1,0x5e,0x61,0x5f,0xc1,0x5e,0x61,0x5f,0xc1,0x5f,0x61,0x5f,0xc1,0x5f,0x61,0x5f,0xc0,0x4b,0x4a,0x47,0xe0,0x31,0x30,0x2c,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0xff,0xff,0xff,0x00,0xf6,0xfd,0xf3,0x09,0xf0,0xfa,0xef,0x12,0xf0,0xfb,0xf0,0x11,0xf0,0xfb,0xf0,0x11,0xf0,0xfb,0xf0,0x11,0xf0,0xfb,0xf0,0x11,0xf0,0xfa,0xef,0x12,0xf7,0xfe,0xf4,0x08,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xfc,0xfa,0x03,0xfe,0xef,0xeb,0x15,0xfe,0xf0,0xec,0x13,0xfe,0xf0,0xec,0x13,0xfe,0xf0,0xec,0x13,0xfe,0xf0,0xec,0x13,0xfe,0xf0,0xec,0x13,0xff,0xf1,0xed,0x11,0xee,0xf0,0xf0,0x0d,0x72,0x72,0x6f,0xaa,0x31,0x30,0x2b,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0xb6,0xea,0xb3,0x61,0x73,0xd7,0x6d,0xd9,0x72,0xd7,0x6b,0xe3,0x72,0xd7,0x6c,0xe2,0x72,0xd7,0x6c,0xe2,0x72,0xd7,0x6c,0xe2,0x72,0xd7,0x6c,0xe2,0x71,0xd7,0x6b,0xe3,0x70,0xd6,0x6a,0xd8,0xd0,0xf7,0xd5,0x33,0xff,0xe6,0xe3,0x1e,0xfa,0x77,0x52,0xd3,0xfa,0x6e,0x47,0xe8,0xfa,0x70,0x4a,0xe6,0xfa,0x70,0x4a,0xe6,0xfa,0x70,0x4a,0xe6,0xfa,0x70,0x4a,0xe6,0xfa,0x70,0x49,0xe7,0xfa,0x6a,0x42,0xe5,0xff,0xb2,0x9b,0x78,0xe1,0xe5,0xe6,0x19,0x3b,0x3a,0x37,0xf4,0x37,0x36,0x32,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x80,0xdb,0x7c,0xc1,0x62,0xd1,0x5c,0xff,0x64,0xd2,0x5f,0xff,0x64,0xd2,0x5f,0xff,0x64,0xd2,0x5f,0xff,0x64,0xd2,0x5f,0xff,0x64,0xd2,0x5f,0xff,0x64,0xd2,0x5f,0xff,0x5a,0xcf,0x54,0xff,0xac,0xf0,0xb4,0x6e,0xff,0xcc,0xc5,0x42,0xf8,0x59,0x2c,0xff,0xf8,0x62,0x39,0xff,0xf8,0x62,0x38,0xff,0xf8,0x62,0x38,0xff,0xf8,0x62,0x38,0xff,0xf8,0x62,0x38,0xff,0xf8,0x62,0x38,0xff,0xf8,0x5c,0x31,0xff,0xfe,0x81,0x5f,0xc8,0xef,0xef,0xef,0x10,0x46,0x46,0x43,0xe6,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x85,0xdc,0x81,0xbc,0x65,0xd2,0x60,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x5e,0xd0,0x58,0xff,0xb0,0xf0,0xb7,0x6a,0xff,0xce,0xc7,0x3f,0xf8,0x5d,0x32,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x5f,0x35,0xff,0xfe,0x86,0x65,0xc0,0xec,0xec,0xec,0x13,0x45,0x45,0x42,0xe7,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x85,0xdc,0x81,0xbb,0x65,0xd2,0x60,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x5e,0xd0,0x58,0xff,0xb0,0xf0,0xb7,0x6a,0xff,0xce,0xc7,0x3f,0xf8,0x5d,0x32,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x5f,0x35,0xff,0xfe,0x86,0x65,0xc0,0xec,0xec,0xec,0x13,0x45,0x45,0x42,0xe7,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x85,0xdc,0x81,0xbc,0x65,0xd2,0x60,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x5e,0xd0,0x58,0xff,0xb0,0xf0,0xb7,0x6a,0xff,0xce,0xc7,0x3f,0xf8,0x5d,0x32,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x5f,0x35,0xff,0xfe,0x86,0x65,0xc0,0xec,0xec,0xec,0x13,0x45,0x45,0x42,0xe7,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3f,0x3e,0x3a,0xf3,
    0x83,0xdc,0x7f,0xbc,0x65,0xd2,0x60,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x5e,0xd0,0x58,0xff,0xb0,0xf0,0xb7,0x6a,0xff,0xce,0xc7,0x3f,0xf8,0x5d,0x32,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x5f,0x35,0xff,0xfe,0x86,0x65,0xc0,0xec,0xec,0xec,0x13,0x45,0x45,0x42,0xe7,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x38,0x37,0x33,0xff,0x3e,0x3d,0x39,0xf4,
    0x9d,0xe3,0x9a,0x8a,0x62,0xd1,0x5c,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x67,0xd3,0x62,0xff,0x5e,0xd0,0x58,0xff,0xb0,0xf0,0xb7,0x6a,0xff,0xce,0xc7,0x3f,0xf8,0x5d,0x32,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x65,0x3c,0xff,0xf8,0x5f,0x35,0xff,0xfe,0x86,0x65,0xc0,0xec,0xec,0xec,0x13,0x45,0x45,0x42,0xe7,0x35,0x34,0x30,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x39,0x38,0x34,0xff,0x36,0x35,0x31,0xff,0x46,0x44,0x41,0xe7,
    0xe4,0xf7,0xe3,0x1e,0x73,0xd7,0x6e,0xd7,0x60,0xd1,0x5a,0xff,0x66,0xd3,0x61,0xff,0x66,0xd3,0x61,0xff,0x66,0xd3,0x61,0xff,0x66,0xd3,0x61,0xff,0x66,0xd3,0x61,0xff,0x5c,0xd0,0x56,0xff,0xad,0xf0,0xb4,0x6d,0xff,0xcc,0xc5,0x42,0xf8,0x5b,0x2f,0xff,0xf8,0x64,0x3b,0xff,0xf8,0x64,0x3b,0xff,0xf8,0x64,0x3b,0xff,0xf8,0x64,0x3b,0xff,0xf8,0x64,0x3b,0xff,0xf8,0x64,0x3b,0xff,0xf8,0x5e,0x34,0xff,0xfe,0x83,0x61,0xc6,0xeb,0xeb,0xeb,0x13,0x41,0x41,0x3e,0xec,0x34,0x33,0x2f,0xff,0x38,0x37,0x33,0xff,0x38,0x37,0x33,0xff,0x38,0x37,0x33,0xff,0x38,0x37,0x33,0xff,0x36,0x35,0x31,0xff,0x29,0x28,0x24,0xff,0x92,0x91,0x8f,0x81,
    0xff,0xff,0xff,0x00,0xdc,0xf5,0xda,0x2a,0x83,0xdb,0x7f,0xb7,0x6b,0xd4,0x66,0xec,0x6b,0xd4,0x66,0xf2,0x6b,0xd4,0x67,0xf1,0x6b,0xd4,0x67,0xf1,0x6b,0xd4,0x66,0xf3,0x68,0xd3,0x63,0xe8,0xcb,0xf5,0xd0,0x3b,0xff,0xe3,0xe0,0x21,0xf9,0x6e,0x48,0xe0,0xf8,0x68,0x40,0xf4,0xf8,0x6a,0x42,0xf2,0xf8,0x6a,0x42,0xf2,0xf8,0x6a,0x42,0xf2,0xf8,0x6a,0x42,0xf2,0xf8,0x69,0x42,0xf3,0xf8,0x63,0x3a,0xf2,0xfd,0xa3,0x8a,0x8c,0xf8,0xf8,0xf8,0x05,0x67,0x67,0x63,0xb8,0x38,0x37,0x33,0xf4,0x3f,0x3e,0x3a,0xf3,0x3f,0x3e,0x3a,0xf3,0x3f,0x3e,0x3a,0xf3,0x3d,0x3c,0x38,0xf4,0x45,0x44,0x40,0xe3,0x91,0x90,0x8e,0x83,0xfb,0xfb,0xfa,0x04,
};

const lv_image_dsc_t img_render_lvgl_logo_argb8888 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 30,
  .header.h = 30,
  .header.stride = 120,
  .data_size = sizeof(img_render_lvgl_logo_argb8888_map),
  .data = img_render_lvgl_logo_argb8888_map,
};
