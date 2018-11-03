#include <ximage.h>

static uint8_t fill_holes_16x16_data[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x3D, 0xA0, 0xE5, 0xFF, 
    0x38, 0x99, 0xE5, 0xFF, 0x32, 0x93, 0xE4, 0xFF, 0x2C, 0x8B, 0xE3, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 
    0x43, 0xA7, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x32, 0x93, 0xE4, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x04, 0x71, 0xD7, 0xFF, 0x48, 0xAE, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x9A, 0xE5, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x33, 0x94, 0xE4, 0xFF, 0x31, 0x91, 0xE3, 0xFF, 
    0x2F, 0x8F, 0xE3, 0xFF, 0x2C, 0x8C, 0xE4, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x4D, 0xB5, 0xE7, 0xFF, 0x47, 0xAE, 0xE7, 0xFF, 0x42, 0xA8, 0xE6, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x34, 0x96, 0xE4, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x8F, 0xE3, 0xFF, 0x2C, 0x8B, 0xE3, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x38, 0x9B, 0xE5, 0xFF, 
    0x36, 0x98, 0xE5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x90, 0xE4, 0xFF, 0x2D, 0x8D, 0xE3, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x3C, 0xA0, 0xE6, 0xFF, 
    0x3A, 0x9D, 0xE5, 0xFF, 0x38, 0x9B, 0xE5, 0xFF, 0x36, 0x98, 0xE4, 0xFF, 0x33, 0x95, 0xE4, 0xFF, 0x32, 0x92, 0xE4, 0xFF, 
    0x2F, 0x8F, 0xE4, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x40, 0xA4, 0xE6, 0xFF, 
    0x3E, 0xA2, 0xE5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x9A, 0xE5, 0xFF, 0x35, 0x97, 0xE4, 0xFF, 
    0x33, 0x94, 0xE4, 0xFF, 0x31, 0x92, 0xE4, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x46, 0xAD, 0xE7, 0xFF, 0x44, 0xAA, 0xE6, 0xFF, 
    0x42, 0xA7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x37, 0x9A, 0xE4, 0xFF, 0x34, 0x97, 0xE4, 0xFF, 0x32, 0x94, 0xE5, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x4A, 0xB1, 0xE8, 0xFF, 0x48, 0xAF, 0xE7, 0xFF, 
    0x45, 0xAC, 0xE6, 0xFF, 0x43, 0xA9, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x9B, 0xE5, 0xFF, 0x36, 0x98, 0xE5, 0xFF, 0x34, 0x96, 0xE5, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x4E, 0xB6, 0xE8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x47, 0xAE, 0xE7, 0xFF, 0x46, 0xAB, 0xE7, 0xFF, 0x44, 0xA8, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x3D, 0xA1, 0xE5, 0xFF, 0x3A, 0x9D, 0xE5, 0xFF, 0x39, 0x9B, 0xE5, 0xFF, 0x36, 0x98, 0xE5, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x4F, 0xB7, 0xE8, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0xB0, 0xE7, 0xFF, 0x48, 0xAD, 0xE7, 0xFF, 0x45, 0xAB, 0xE7, 0xFF, 
    0x43, 0xA8, 0xE6, 0xFF, 0x40, 0xA6, 0xE6, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x04, 0x71, 0xD7, 0xFF, 0x4F, 0xB7, 0xE8, 0xFF, 0x4D, 0xB5, 0xE8, 0xFF, 0x4B, 0xB3, 0xE8, 0xFF, 0x49, 0xAF, 0xE7, 0xFF, 
    0x47, 0xAD, 0xE7, 0xFF, 0x45, 0xAA, 0xE6, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_fill_holes_16x16 =
{
    &fill_holes_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};