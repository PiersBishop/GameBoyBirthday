#include <gb/gb.h>

// --------------------------------------------------

// MAP & TILE DATA
const unsigned char tiles[] =
{
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAB,0x57,0x54,0xAC,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xEA,0xD5,0x35,0x2A,
  0xA9,0x59,0x52,0xB3,0xB5,0x56,0x66,0xA5,
  0xAB,0x6C,0x4E,0xC8,0xD5,0x58,0x5E,0xD0,
  0x9A,0x95,0x4D,0xCA,0xAA,0x6D,0xE5,0x26,
  0xD6,0x35,0xB3,0x12,0x6A,0x1B,0x3B,0x0A,
  0xDA,0x50,0x54,0xD8,0xCC,0x48,0x6A,0xAC,
  0xA5,0x67,0x63,0xA3,0xCD,0x4D,0x58,0xD0,
  0x5A,0x0B,0x2B,0x1A,0x32,0x13,0x55,0x36,
  0xA6,0xE5,0xC5,0xC6,0xB2,0xB3,0x1B,0x0A,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x57,0xAF,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x57,0xAB,0xFC,0xFC,0x01,0x01,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xBF,0x5F,0xE0,0xE0,0x0F,0x0F,0xF4,0xF0,
  0xD0,0x50,0x99,0x91,0xB4,0xA0,0xBC,0xA4,
  0x98,0x98,0x18,0x10,0xF0,0xF0,0x18,0x10,
  0x05,0x05,0x85,0x85,0x9D,0x95,0xAD,0xAD,
  0xBC,0xAC,0xEA,0xAA,0xDF,0xCB,0x0C,0x0C,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xFA,0xFD,0x07,0x07,0xF0,0xF0,0x0F,0x0F,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0xD5,0xEA,0x3F,0x3F,0x80,0x80,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0xF5,0xEA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAB,
  0xAA,0x56,0x54,0xAC,0xAD,0x55,0x55,0xAD,
  0xB8,0x58,0x63,0xE3,0x8C,0x8C,0x32,0x30,
  0x71,0x40,0xB4,0x80,0xE0,0x00,0x58,0x00,
  0x7E,0x7E,0x81,0x80,0x40,0x00,0x08,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x08,0x00,0x41,0x00,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x10,0x10,0x18,0x10,0x10,0x10,0x18,0x10,
  0x14,0x10,0x18,0x10,0x1D,0x10,0x0E,0x0C,
  0x1A,0x08,0x08,0x08,0x18,0x08,0x28,0x08,
  0x18,0x08,0x38,0x08,0x58,0x08,0xF0,0x30,
  0x50,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x7E,0x7E,0x81,0x01,0x10,0x00,0x00,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0x1A,0x1D,0xC7,0xC6,0x31,0x31,0xAC,0x0C,
  0x1E,0x02,0x07,0x01,0x0D,0x00,0x03,0x00,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0xD5,0xAA,
  0x6A,0x55,0x35,0x2A,0xAA,0xB5,0xB5,0xAA,
  0xAD,0x55,0x55,0xAD,0xAD,0x55,0x55,0xAD,
  0xAD,0x55,0x55,0xAD,0xAD,0x55,0x59,0xA9,
  0xF0,0x00,0xC0,0x00,0x80,0x00,0xC0,0x40,
  0x70,0x30,0xC8,0x08,0x80,0x00,0x80,0x00,
  0x80,0x00,0x00,0x00,0x00,0x00,0x20,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,
  0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
  0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x10,0x00,0x03,0x03,0x00,0x00,
  0x03,0x00,0x80,0x00,0x03,0x02,0x07,0x00,
  0x05,0x00,0x43,0x40,0x89,0x80,0x01,0x00,
  0xAA,0xB5,0xB5,0xAA,0xAA,0xB5,0xB5,0xAA,
  0xAA,0xB5,0xB5,0xAA,0xAA,0xB5,0xB5,0xAA,
  0xAB,0x5A,0x5B,0xAA,0xAB,0x5A,0x5A,0xAA,
  0xAB,0x5A,0x5B,0xAA,0xAB,0x5A,0x5A,0xAA,
  0x00,0x00,0x90,0x00,0x40,0x00,0x00,0x00,
  0x24,0x00,0x00,0x00,0x40,0x00,0xA0,0x00,
  0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
  0xFE,0xFE,0x01,0x01,0x00,0x00,0x08,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
  0x00,0x00,0x7D,0x7D,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,
  0x00,0x00,0x80,0x80,0x00,0x00,0x40,0x00,
  0x00,0x00,0x00,0x00,0x01,0x00,0x24,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,
  0x0A,0x00,0x09,0x00,0xA2,0x02,0x0D,0x07,
  0x1D,0x07,0x15,0x07,0xB9,0x0F,0xF1,0x1F,
  0x9A,0x95,0x55,0x5A,0xDA,0x55,0xD5,0x5A,
  0xDA,0x55,0xD5,0x5A,0xDA,0x55,0x95,0x9A,
  0xA9,0x59,0x55,0xAD,0xAD,0x55,0x54,0xAC,
  0xAA,0x56,0x56,0xAA,0xAA,0x56,0x56,0xAA,
  0x80,0x00,0x54,0x00,0xD1,0x01,0xC1,0x81,
  0xAA,0x83,0xF2,0xC3,0xDD,0xC6,0xB8,0xFF,
  0x50,0x40,0xB0,0xE0,0x38,0xE0,0x35,0xE0,
  0x58,0xF0,0x1D,0xF0,0x8E,0x78,0x07,0xFF,
  0x08,0x00,0x82,0x00,0x01,0x00,0x02,0x00,
  0x5D,0x1C,0x23,0x3E,0x49,0x77,0x88,0xF7,
  0x00,0x00,0x00,0x00,0x01,0x00,0x23,0x00,
  0x00,0x00,0xA4,0x00,0xD3,0x01,0xA5,0x81,
  0x24,0x3C,0x55,0x6C,0x42,0x7E,0xA6,0xDA,
  0x95,0xEB,0x80,0xFF,0x34,0xCB,0x41,0xBE,
  0xA3,0x03,0x14,0x07,0x4A,0x0D,0xB0,0x3F,
  0xC0,0xFF,0x80,0x7F,0x44,0xBF,0x08,0xF7,
  0xE4,0xE0,0x11,0xF0,0x0E,0xF8,0x07,0xFF,
  0x01,0xFF,0x80,0x7F,0x80,0x7F,0x11,0xEE,
  0x63,0x3F,0xE9,0x3F,0xC5,0xFF,0x03,0xFF,
  0x09,0xF7,0x01,0xFF,0x23,0xFF,0x83,0xFF,
  0x2A,0x35,0x55,0x6A,0x6A,0x55,0x55,0x6A,
  0x6A,0x55,0x55,0x6A,0x6A,0x55,0x55,0x6A,
  0xAA,0x56,0x56,0xAA,0xAA,0x56,0x56,0xAA,
  0xAB,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0x89,0xFF,0xD4,0xFF,0xA2,0xFD,0x58,0x7F,
  0x31,0x3F,0x98,0x9F,0xC7,0x47,0x70,0xB0,
  0x00,0xFF,0x44,0xFF,0x20,0xDF,0x00,0xFF,
  0x42,0xFF,0x42,0xBD,0x00,0xFF,0xE1,0xFF,
  0x10,0xEF,0x58,0xAF,0x02,0xFD,0x90,0x6F,
  0x08,0xF7,0x05,0xFA,0x20,0xFF,0x10,0xEF,
  0xF5,0x81,0x6B,0xC2,0xDE,0x45,0x3D,0xFA,
  0x96,0xE9,0x48,0xB7,0x83,0x7C,0xE8,0x57,
  0x0A,0xF5,0xB0,0x4F,0x8D,0x72,0x41,0xBE,
  0x13,0xED,0xC6,0x39,0x60,0x9F,0x34,0xCB,
  0x00,0xFF,0x82,0x7D,0x84,0x7B,0x10,0xEF,
  0x10,0xFF,0x84,0x7B,0x82,0x7D,0xB0,0x4F,
  0x04,0xFF,0x10,0xFF,0x00,0xFF,0x82,0xFD,
  0x11,0xEF,0x08,0xF7,0x11,0xFF,0x07,0xFF,
  0x49,0xFF,0x05,0xFF,0x31,0xDF,0x0A,0xFE,
  0x44,0xFC,0x19,0xF9,0xE2,0xE3,0x0D,0x0E,
  0x6A,0x55,0x55,0x6A,0x6A,0x55,0x55,0x6A,
  0xAA,0xD5,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAE,0x5E,0x55,0xAB,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0x1F,0x1F,0xC0,0xC0,0xBF,0x7F,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0x80,0xFF,0x7F,0x7F,0x00,0x00,0xFE,0xFE,
  0xAB,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0x26,0xDB,0x11,0xEE,0xFF,0xFF,0x00,0x00,
  0xFF,0xFF,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xC6,0x39,0x08,0xF7,0xFF,0xFF,0x00,0x00,
  0xFF,0xFF,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0x81,0x7F,0xFE,0xFE,0x00,0x00,0x7F,0x7F,
  0xAA,0xD5,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xF8,0xF8,0x03,0x03,0xFE,0xFD,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0x7A,0x75,0xD5,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xFF,0x7F,0xE0,0x9F,0x80,0xFF,0xFF,0x80,
  0xFF,0x80,0xFF,0x87,0xF8,0x8F,0xF0,0x9F,
  0xFF,0xFF,0x3F,0xC0,0x00,0xFF,0xFF,0x00,
  0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x00,
  0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,0xFF,
  0xFE,0xFF,0xF7,0x09,0x01,0xFF,0xFF,0x01,
  0xFF,0x01,0xFF,0xE1,0x1F,0xF1,0x0F,0xF9,
  0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,
  0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,0xF2,0x9F,
  0x7F,0xFF,0x40,0xC0,0x40,0xC0,0x40,0xC0,
  0x40,0xC0,0x40,0xC0,0x40,0xC0,0x40,0xC0,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFE,0xFF,0x02,0x03,0x02,0x03,0x02,0x03,
  0x02,0x03,0x02,0x03,0x02,0x03,0x02,0x03,
  0x0F,0xF9,0x0F,0xF9,0x0F,0xF9,0x0F,0xF9,
  0x0F,0xF9,0x0F,0xF9,0x0F,0xF9,0x0F,0xF9,
  0xF5,0x9D,0xF2,0x9F,0xF7,0x98,0xF0,0x9F,
  0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,
  0x47,0xC7,0x47,0xC7,0x47,0xC7,0x40,0xC0,
  0x40,0xC0,0x40,0xC0,0x40,0xC0,0x40,0xC0,
  0x21,0x21,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x22,0x23,0xC2,0xC3,0xC2,0xC3,0x02,0x03,
  0x02,0x03,0x02,0x03,0x02,0x03,0x02,0x03,
  0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,0xF0,0x9F,
  0xF0,0x9F,0xF8,0x8F,0xFF,0x87,0xFF,0x80,
  0x40,0xC0,0x40,0xC0,0x40,0xC0,0x7F,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0x00,
  0x02,0x03,0x02,0x03,0x02,0x03,0xFE,0xFF,
  0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0x00,
  0x0F,0xF9,0x0F,0xF9,0x1F,0xF1,0x1F,0xF1,
  0x3F,0xE1,0xFF,0xC1,0xFF,0x01,0xFF,0x01,
  0xE7,0x98,0xE0,0x9F,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x83,
  0xF8,0x07,0x08,0xF7,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,
  0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x80,0x1F,0xE0,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x71,
  0xFF,0x83,0xFF,0x83,0xFF,0x9F,0xFF,0x9F,
  0xFF,0x9F,0xFF,0x83,0xFF,0x83,0xFF,0x83,
  0xFF,0x80,0xFF,0x80,0xFF,0xF0,0xFF,0xF0,
  0xFF,0xF0,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x1C,0xE3,0x3E,
  0xE3,0x3E,0xE3,0x3E,0xFF,0x1C,0xFF,0x00,
  0x8F,0xF9,0x8F,0xF9,0x8F,0xF9,0xFF,0x71,
  0xFF,0x01,0xF7,0x09,0xFF,0x01,0xFF,0x01,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x01,0xFB,0x07,0xFE,0x0F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x7F,0x81,0xFB,0x87,0xFE,0x0F,
  0xFD,0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x7F,0x80,0xFE,0x81,0xFE,0x01,
  0xFF,0x01,0xFF,0x01,0xEF,0x11,0xEF,0x11,
  0xB7,0x49,0xB7,0x49,0xDB,0x25,0xDB,0x25,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0x7F,0xFF,
  0xF7,0x0C,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFC,0x03,0xFF,0x00,0xFF,0xFF,
  0xF7,0x0C,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x0F,0xF0,0x9F,0x60,0xFF,0xFF,
  0xFB,0x04,0xFB,0x04,0xFD,0x02,0xFD,0x02,
  0xFE,0x01,0xFE,0x01,0xFF,0x00,0xFF,0xFF,
  0x6F,0x91,0x6F,0x91,0xBE,0x43,0xBF,0x42,
  0xFE,0x05,0xFD,0x0A,0xFA,0x35,0xD5,0xEA,
  0xBC,0x3D,0x3D,0xBC,0xBC,0x3D,0x3D,0xBC,
  0xBC,0x3D,0x3D,0xBC,0xBC,0x3D,0x3D,0xBC,
  0xAA,0x55,0x40,0x80,0xBF,0x3F,0x3F,0xBF,
  0xBF,0x3F,0x3F,0xBF,0xBC,0x3C,0x3D,0xBC,
  0xAA,0x55,0x01,0x02,0xFC,0xFD,0xFD,0xFC,
  0xFC,0xFD,0xFD,0xFC,0x3C,0x3D,0x3D,0xBC,
  0xBC,0x3D,0x3D,0x3C,0xFC,0xFD,0xFD,0xFC,
  0xFC,0xFD,0xFD,0xFC,0x02,0x01,0x55,0xAA,
  0xBC,0x3D,0x3C,0xBC,0xBF,0x3F,0x3F,0xBF,
  0xBF,0x3F,0x3F,0xBF,0x80,0x40,0x55,0xAA,
  0xBC,0x3D,0x3D,0xBC,0xBC,0x3D,0x3D,0xBC,
  0xBC,0x3D,0x3D,0xBC,0x82,0x41,0x55,0xAA,
  0xAA,0x55,0x41,0x82,0xBC,0x3D,0x3D,0xBC,
  0xBC,0x3D,0x3D,0xBC,0xBC,0x3D,0x3D,0xBC,
  0xBC,0x3D,0x3C,0xBC,0xBF,0x3F,0x3F,0xBF,
  0xBF,0x3F,0x3F,0xBF,0xBC,0x3C,0x3D,0xBC,
  0xBC,0x3D,0x3D,0x3C,0xFC,0xFD,0xFD,0xFC,
  0xFC,0xFD,0xFD,0xFC,0x3C,0x3D,0x3D,0xBC,
  0xAA,0x55,0x01,0x02,0xFC,0xFD,0xFD,0xFC,
  0xFC,0xFD,0xFD,0xFC,0x02,0x01,0x55,0xAA,
  0xBC,0x3D,0x3C,0x3C,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x55,0xAA,
  0xAA,0x55,0x41,0x82,0xBC,0x3D,0x3D,0xBC,
  0xBC,0x3D,0x3D,0xBC,0x82,0x41,0x55,0xAA,
  0x82,0x41,0x55,0xAA,0xAA,0x54,0x54,0xAA,
  0xAA,0x54,0x54,0xAA,0xAA,0x55,0x41,0x82,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xAA,0x55,0x55,0xAA,0xAA,0x55,0x55,0xAA
};

const unsigned char map[] =
{
  0x00,0x00,0x75,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x70,0x71,0x70,0x71,0x7A,0x00,0x00,
  0x00,0x00,0x76,0x71,0x70,0x71,0x70,0x71,0x70,0x71,
  0x75,0x75,0x00,0x7B,0x77,0x6F,0x6F,0x00,0x00,0x00,
  0x00,0x00,0x74,0x74,0x73,0x79,0x76,0x72,0x76,0x72,
  0x73,0x77,0x00,0x73,0x72,0x73,0x72,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x74,0x00,0x74,0x00,
  0x73,0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
  0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x49,0x4A,0x4B,0x4B,0x4C,0x00,0x00,0x00,0x00,0x03,
  0x04,0x00,0x00,0x00,0x00,0x49,0x4A,0x4B,0x4B,0x4C,
  0x4D,0x4E,0x4F,0x50,0x51,0x00,0x00,0x00,0x00,0x05,
  0x06,0x00,0x00,0x00,0x00,0x4D,0x4E,0x4F,0x50,0x51,
  0x52,0x53,0x54,0x55,0x51,0x00,0x07,0x08,0x09,0x0A,
  0x0B,0x0C,0x0D,0x0E,0x00,0x52,0x53,0x54,0x55,0x51,
  0x56,0x57,0x58,0x59,0x5A,0x0F,0x10,0x11,0x12,0x13,
  0x14,0x15,0x16,0x17,0x18,0x56,0x57,0x58,0x59,0x5A,
  0x5B,0x5C,0x5D,0x5E,0x5F,0x19,0x1A,0x1B,0x1C,0x1D,
  0x1E,0x1F,0x20,0x21,0x22,0x5B,0x5C,0x5D,0x5E,0x5F,
  0x60,0x61,0x62,0x63,0x64,0x23,0x24,0x25,0x26,0x27,
  0x28,0x29,0x2A,0x2B,0x2C,0x60,0x61,0x62,0x63,0x64,
  0x65,0x66,0x67,0x68,0x69,0x2D,0x2E,0x2F,0x30,0x31,
  0x32,0x33,0x34,0x35,0x36,0x65,0x66,0x67,0x68,0x69,
  0x6A,0x6B,0x6C,0x6D,0x6E,0x37,0x38,0x39,0x3A,0x3B,
  0x3C,0x3D,0x3E,0x3F,0x40,0x6A,0x6B,0x6C,0x6D,0x6E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x42,0x43,0x44,
  0x45,0x46,0x47,0x48,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x75,0x00,0x7A,0x00,0x00,0x75,0x00,0x75,
  0x00,0x00,0x75,0x00,0x00,0x00,0x00,0x75,0x00,0x00,
  0x00,0x00,0x76,0x71,0x75,0x70,0x71,0x76,0x78,0x76,
  0x71,0x70,0x77,0x70,0x71,0x75,0x75,0x74,0x00,0x00,
  0x00,0x00,0x73,0x72,0x74,0x74,0x00,0x73,0x72,0x74,
  0x74,0x73,0x72,0x73,0x79,0x73,0x77,0x7A,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x73,0x72,0x00,0x00,0x00
};

// --------------------------------------------------

// MUSIC STUFF
// mostly copy/pasted from scazon's "GBDK music player"
// https://gist.github.com/scazon/9bb7daab2d1a8342ade3

//Define note names
typedef enum {
  C3, Cd3, D3, Dd3, E3, F3, Fd3, G3, Gd3, A3, Ad3, B3,
  C4, Cd4, D4, Dd4, E4, F4, Fd4, G4, Gd4, A4, Ad4, B4,
  C5, Cd5, D5, Dd5, E5, F5, Fd5, G5, Gd5, A5, Ad5, B5,
  C6, Cd6, D6, Dd6, E6, F6, Fd6, G6, Gd6, A6, Ad6, B6,
  C7, Cd7, D7, Dd7, E7, F7, Fd7, G7, Gd7, A7, Ad7, B7,
  C8, Cd8, D8, Dd8, E8, F8, Fd8, G8, Gd8, A8, Ad8, B8,
  SILENCE
} pitch;

const UWORD frequencies[] = { //values based on a formula used by the GB processor
  44, 156, 262, 363, 457, 547, 631, 710, 786, 854, 923, 986,
  1046, 1102, 1155, 1205, 1253, 1297, 1339, 1379, 1417, 1452, 1486, 1517,
  1546, 1575, 1602, 1627, 1650, 1673, 1694, 1714, 1732, 1750, 1767, 1783,
  1798, 1812, 1825, 1837, 1849, 1860, 1871, 1881, 1890, 1899, 1907, 1915,
  1923, 1930, 1936, 1943, 1949, 1954, 1959, 1964, 1969, 1974, 1978, 1982,
  1985, 1988, 1992, 1995, 1998, 2001, 2004, 2006, 2009, 2011, 2013, 2015,
  0
};

//Define Instrument names
//Instruments should be confined to one channel
//due to different registers used between ch1, 2, 3, 4
typedef enum {
	NONE,
	MELODY  //channel 1
} instrument;

//Define a note as having a pitch, instrument, and volume envelope
typedef struct {
	instrument i;
	pitch p;
	UBYTE env;
} note;

//define a song as a series of note structs
note song_ch1[50] = { //notes to be played on channel 1
	{MELODY, C4, 0xF1U}, // 0xAB : A seems to be some kind of resonnance, B the actual length of note
	{MELODY, C4, 0xF1U},
	{MELODY, D4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, C4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, F4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, E4, 0xF3U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	
	{MELODY, C4, 0xF1U},
	{MELODY, C4, 0xF1U},
	{MELODY, D4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, C4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, G4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, F4, 0xF3U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	
	{MELODY, C4, 0xF1U},
	{MELODY, C4, 0xF1U},
	{MELODY, C5, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, A4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, F4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, E4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, D4, 0xF3U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	
	{MELODY, D4, 0xF1U},
	{MELODY, D4, 0xF1U},
	{MELODY, A4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, F4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, G4, 0xF2U},
	{NONE, SILENCE, 0x00U},
	{MELODY, F4, 0xF3U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U},
	{NONE, SILENCE, 0x00U}
};

//function to set sound registers based on notes chosen
void setNote(note *n){
	switch((*n).i){
		case MELODY:
			NR10_REG = 0x00U; //pitch sweep
			NR11_REG = 0x84U; //wave duty
			NR12_REG = (*n).env; //envelope
			NR13_REG = (UBYTE)frequencies[(*n).p]; //low bits of frequency
			NR14_REG = 0x80U | ((UWORD)frequencies[(*n).p]>>8); //high bits of frequency (and sound reset)
		break;
	}
}

// --------------------------------------------------

// MUSIC FRAMERATE AND PLAYING VARIABLES & METHOD
int MUSIC_cnt = 0;
int MUSIC_freq = 200;
int currentBeat = 0;

void MUSIC_Update () {
	MUSIC_cnt++;
	if (MUSIC_cnt == MUSIC_freq) {
		MUSIC_cnt = 0;
		setNote(&song_ch1[currentBeat]);
		currentBeat = currentBeat == 49 ? 0 : currentBeat+1;
	}
}

// --------------------------------------------------

// MAIN
void main () {
	// start game
	
	// display background from map and tile data
	set_bkg_data(0,128,tiles);
	set_bkg_tiles(0,0,20,18,map);
	SHOW_BKG;
	
	// activate audio
	NR52_REG = 0x80;
	NR51_REG = 0x11;
	NR50_REG = 0x77;

	// main game
	while (1) {
		delay (1);
		MUSIC_Update();
	}
	// end game
}