//Credits go to SNV

#include "common.h"


static u1 EndPal[] = {
 0x00, 0x00, 0x00, 0x3E, 0x3C, 0x33, 0x3D, 0x39,
 0x29, 0x3C, 0x36, 0x1E, 0x3B, 0x34, 0x14, 0x3B,
 0x32, 0x0A, 0x38, 0x2D, 0x08, 0x32, 0x26, 0x05,
 0x2D, 0x20, 0x04, 0x27, 0x1A, 0x02, 0x22, 0x15,
 0x01, 0x1D, 0x10, 0x00, 0x18, 0x0C, 0x00, 0x13,
 0x09, 0x00, 0x3F, 0x2E, 0x2E, 0x3C, 0x27, 0x28,
 0x3A, 0x22, 0x22, 0x37, 0x1C, 0x1D, 0x35, 0x17,
 0x17, 0x32, 0x12, 0x13, 0x30, 0x0E, 0x0F, 0x2C,
 0x0D, 0x0D, 0x28, 0x0C, 0x0C, 0x24, 0x0A, 0x0A,
 0x1F, 0x09, 0x09, 0x1B, 0x07, 0x07, 0x17, 0x06,
 0x06, 0x13, 0x05, 0x05, 0x3F, 0x36, 0x18, 0x3E,
 0x33, 0x14, 0x3E, 0x2F, 0x10, 0x3D, 0x2C, 0x0C,
 0x3D, 0x28, 0x08, 0x3C, 0x24, 0x04, 0x3C, 0x20,
 0x01, 0x39, 0x1C, 0x00, 0x34, 0x19, 0x00, 0x2F,
 0x17, 0x00, 0x29, 0x14, 0x00, 0x24, 0x11, 0x00,
 0x1F, 0x0F, 0x00, 0x3D, 0x3D, 0x21, 0x37, 0x37,
 0x19, 0x32, 0x32, 0x0D, 0x2D, 0x2D, 0x04, 0x27,
 0x27, 0x01, 0x22, 0x22, 0x00, 0x22, 0x39, 0x1B,
 0x1E, 0x34, 0x16, 0x1B, 0x30, 0x12, 0x18, 0x2C,
 0x10, 0x15, 0x29, 0x0D, 0x12, 0x26, 0x0C, 0x0E,
 0x22, 0x09, 0x0A, 0x1E, 0x06, 0x07, 0x1A, 0x04,
 0x05, 0x16, 0x02, 0x02, 0x12, 0x01, 0x01, 0x0E,
 0x00, 0x00, 0x0A, 0x00, 0x00, 0x06, 0x00, 0x35,
 0x35, 0x3E, 0x30, 0x31, 0x3C, 0x2B, 0x2D, 0x3A,
 0x27, 0x2A, 0x39, 0x23, 0x27, 0x37, 0x1F, 0x24,
 0x36, 0x1A, 0x22, 0x34, 0x16, 0x1E, 0x31, 0x12,
 0x1A, 0x2E, 0x0E, 0x15, 0x29, 0x0A, 0x0F, 0x24,
 0x07, 0x0B, 0x20, 0x04, 0x07, 0x1B, 0x02, 0x04,
 0x17, 0x00, 0x01, 0x12, 0x00, 0x00, 0x0D, 0x3A,
 0x32, 0x3A, 0x34, 0x26, 0x34, 0x2F, 0x1B, 0x2F,
 0x2A, 0x13, 0x2A, 0x25, 0x0B, 0x25, 0x20, 0x05,
 0x20, 0x1C, 0x03, 0x1C, 0x18, 0x01, 0x18, 0x14,
 0x00, 0x14, 0x11, 0x00, 0x11, 0x39, 0x33, 0x30,
 0x36, 0x2D, 0x29, 0x33, 0x28, 0x23, 0x31, 0x23,
 0x1D, 0x2C, 0x20, 0x1A, 0x27, 0x1D, 0x17, 0x22,
 0x1A, 0x14, 0x1E, 0x17, 0x11, 0x19, 0x13, 0x0E,
 0x14, 0x10, 0x0B, 0x0F, 0x0C, 0x09, 0x0B, 0x09,
 0x06, 0x3B, 0x3B, 0x3B, 0x37, 0x37, 0x37, 0x33,
 0x33, 0x33, 0x2F, 0x2F, 0x2F, 0x2B, 0x2B, 0x2B,
 0x27, 0x27, 0x27, 0x23, 0x23, 0x23, 0x1F, 0x1F,
 0x1F, 0x1B, 0x1B, 0x1B, 0x18, 0x18, 0x18, 0x14,
 0x14, 0x14, 0x11, 0x11, 0x11, 0x0D, 0x0D, 0x0D,
 0x09, 0x09, 0x09, 0x06, 0x06, 0x06, 0x03, 0x03,
 0x03, 0x3B, 0x3A, 0x39, 0x37, 0x35, 0x34, 0x33,
 0x31, 0x2F, 0x2F, 0x2C, 0x2B, 0x2B, 0x28, 0x26,
 0x27, 0x24, 0x22, 0x23, 0x20, 0x1E, 0x1F, 0x1C,
 0x1A, 0x1B, 0x18, 0x17, 0x18, 0x15, 0x14, 0x14,
 0x12, 0x11, 0x11, 0x0F, 0x0E, 0x0D, 0x0B, 0x0B,
 0x09, 0x08, 0x08, 0x06, 0x05, 0x05, 0x37, 0x2A,
 0x20, 0x33, 0x25, 0x1B, 0x30, 0x21, 0x17, 0x2C,
 0x1D, 0x13, 0x29, 0x1A, 0x10, 0x26, 0x16, 0x0D,
 0x22, 0x12, 0x0A, 0x1F, 0x0F, 0x07, 0x1C, 0x0C,
 0x05, 0x18, 0x0A, 0x03, 0x15, 0x07, 0x02, 0x11,
 0x05, 0x01, 0x0E, 0x03, 0x00, 0x0B, 0x02, 0x00,
 0x08, 0x01, 0x00, 0x31, 0x3E, 0x3F, 0x2C, 0x3A,
 0x3C, 0x27, 0x36, 0x39, 0x23, 0x33, 0x36, 0x1F,
 0x2F, 0x33, 0x1B, 0x2B, 0x30, 0x17, 0x27, 0x2D,
 0x14, 0x24, 0x2B, 0x11, 0x20, 0x28, 0x0F, 0x1D,
 0x25, 0x0C, 0x1B, 0x23, 0x0B, 0x19, 0x20, 0x09,
 0x17, 0x1E, 0x07, 0x15, 0x1B, 0x06, 0x13, 0x19,
 0x37, 0x30, 0x2D, 0x33, 0x2D, 0x28, 0x2F, 0x27,
 0x25, 0x2B, 0x24, 0x20, 0x27, 0x20, 0x1C, 0x23,
 0x1C, 0x19, 0x20, 0x18, 0x16, 0x1C, 0x15, 0x13,
 0x18, 0x11, 0x10, 0x14, 0x0E, 0x0D, 0x11, 0x0B,
 0x0A, 0x0D, 0x08, 0x07, 0x09, 0x05, 0x05, 0x06,
 0x03, 0x03, 0x38, 0x3A, 0x35, 0x33, 0x36, 0x2B,
 0x2F, 0x32, 0x26, 0x2B, 0x2E, 0x22, 0x27, 0x2A,
 0x1D, 0x23, 0x26, 0x19, 0x1F, 0x22, 0x15, 0x1B,
 0x1E, 0x11, 0x18, 0x1A, 0x0E, 0x14, 0x16, 0x0B,
 0x10, 0x12, 0x08, 0x0D, 0x0E, 0x06, 0x09, 0x0B,
 0x04, 0x06, 0x07, 0x02, 0x32, 0x2D, 0x21, 0x2F,
 0x29, 0x1C, 0x2C, 0x26, 0x18, 0x2A, 0x22, 0x14,
 0x27, 0x1E, 0x10, 0x24, 0x1B, 0x0D, 0x22, 0x18,
 0x0A, 0x1F, 0x15, 0x07, 0x1C, 0x12, 0x05, 0x19,
 0x0F, 0x03, 0x16, 0x0D, 0x02, 0x13, 0x0A, 0x01,
 0x10, 0x08, 0x01, 0x0D, 0x06, 0x00, 0x0A, 0x04,
 0x00, 0x07, 0x03, 0x00, 0x3F, 0x35, 0x30, 0x3F,
 0x32, 0x2C, 0x3F, 0x30, 0x28, 0x3F, 0x2D, 0x24,
 0x3F, 0x2B, 0x20, 0x3F, 0x29, 0x1C, 0x3F, 0x27,
 0x18, 0x3B, 0x24, 0x15, 0x37, 0x21, 0x13, 0x34,
 0x1E, 0x11, 0x30, 0x1B, 0x0F, 0x2D, 0x19, 0x0D,
 0x29, 0x16, 0x0B, 0x26, 0x14, 0x0A, 0x26, 0x23,
 0x19, 0x22, 0x1E, 0x16, 0x1E, 0x19, 0x13, 0x1A,
 0x15, 0x10, 0x16, 0x11, 0x0D, 0x14, 0x0E, 0x0B,
 0x2C, 0x00, 0x00, 0x29, 0x00, 0x00, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x24,
 0x1E, 0x30, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F};

static u1 MapPal[] = {
 0x00, 0x00, 0x00, 0x3E, 0x3C, 0x33, 0x3D, 0x39,
 0x29, 0x3C, 0x36, 0x1E, 0x3B, 0x34, 0x14, 0x3B,
 0x32, 0x0A, 0x38, 0x2D, 0x08, 0x32, 0x26, 0x05,
 0x2D, 0x20, 0x04, 0x27, 0x1A, 0x02, 0x22, 0x15,
 0x01, 0x1D, 0x10, 0x00, 0x18, 0x0C, 0x00, 0x13,
 0x09, 0x00, 0x3F, 0x2E, 0x2E, 0x3E, 0x27, 0x27,
 0x3D, 0x20, 0x21, 0x3C, 0x1A, 0x1B, 0x3B, 0x14,
 0x15, 0x3A, 0x0E, 0x10, 0x3A, 0x08, 0x0B, 0x36,
 0x05, 0x06, 0x31, 0x02, 0x04, 0x2C, 0x01, 0x02,
 0x27, 0x00, 0x01, 0x21, 0x00, 0x01, 0x1B, 0x00,
 0x01, 0x14, 0x00, 0x00, 0x3F, 0x3E, 0x2A, 0x3F,
 0x3B, 0x21, 0x3F, 0x36, 0x18, 0x3F, 0x30, 0x0F,
 0x3F, 0x2B, 0x09, 0x3F, 0x25, 0x04, 0x3F, 0x1F,
 0x00, 0x37, 0x16, 0x00, 0x30, 0x0F, 0x00, 0x29,
 0x09, 0x00, 0x21, 0x04, 0x00, 0x1A, 0x01, 0x00,
 0x13, 0x00, 0x00, 0x3D, 0x3D, 0x21, 0x37, 0x37,
 0x19, 0x32, 0x32, 0x0D, 0x2D, 0x2D, 0x04, 0x27,
 0x27, 0x01, 0x22, 0x22, 0x00, 0x22, 0x39, 0x1B,
 0x1E, 0x34, 0x16, 0x1B, 0x30, 0x12, 0x18, 0x2C,
 0x10, 0x15, 0x29, 0x0D, 0x12, 0x26, 0x0C, 0x0E,
 0x22, 0x09, 0x0A, 0x1E, 0x06, 0x07, 0x1A, 0x04,
 0x05, 0x16, 0x02, 0x02, 0x12, 0x01, 0x01, 0x0E,
 0x00, 0x00, 0x0A, 0x00, 0x00, 0x06, 0x00, 0x35,
 0x35, 0x3E, 0x30, 0x30, 0x3E, 0x2B, 0x2B, 0x3E,
 0x26, 0x26, 0x3E, 0x21, 0x21, 0x3E, 0x1C, 0x1C,
 0x3E, 0x17, 0x17, 0x3E, 0x12, 0x12, 0x3E, 0x0D,
 0x0D, 0x3F, 0x08, 0x08, 0x3F, 0x05, 0x05, 0x36,
 0x03, 0x03, 0x2E, 0x01, 0x01, 0x26, 0x01, 0x01,
 0x1D, 0x00, 0x00, 0x15, 0x00, 0x00, 0x0D, 0x3A,
 0x32, 0x3A, 0x34, 0x26, 0x34, 0x2F, 0x1B, 0x2F,
 0x2A, 0x13, 0x2A, 0x25, 0x0B, 0x25, 0x20, 0x05,
 0x20, 0x1C, 0x03, 0x1C, 0x18, 0x01, 0x18, 0x14,
 0x00, 0x14, 0x11, 0x00, 0x11, 0x39, 0x33, 0x30,
 0x36, 0x2D, 0x29, 0x33, 0x28, 0x23, 0x31, 0x23,
 0x1D, 0x2C, 0x20, 0x1A, 0x27, 0x1D, 0x17, 0x22,
 0x1A, 0x14, 0x1E, 0x17, 0x11, 0x19, 0x13, 0x0E,
 0x14, 0x10, 0x0B, 0x0F, 0x0C, 0x09, 0x0B, 0x09,
 0x06, 0x3B, 0x3B, 0x3B, 0x37, 0x37, 0x37, 0x33,
 0x33, 0x33, 0x2F, 0x2F, 0x2F, 0x2B, 0x2B, 0x2B,
 0x27, 0x27, 0x27, 0x23, 0x23, 0x23, 0x1F, 0x1F,
 0x1F, 0x1B, 0x1B, 0x1B, 0x18, 0x18, 0x18, 0x14,
 0x14, 0x14, 0x11, 0x11, 0x11, 0x0D, 0x0D, 0x0D,
 0x09, 0x09, 0x09, 0x06, 0x06, 0x06, 0x03, 0x03,
 0x03, 0x3B, 0x3A, 0x39, 0x37, 0x35, 0x34, 0x33,
 0x31, 0x2F, 0x2F, 0x2C, 0x2B, 0x2B, 0x28, 0x26,
 0x27, 0x24, 0x22, 0x23, 0x20, 0x1E, 0x1F, 0x1C,
 0x1A, 0x1B, 0x18, 0x17, 0x18, 0x15, 0x14, 0x14,
 0x12, 0x11, 0x11, 0x0F, 0x0E, 0x0D, 0x0B, 0x0B,
 0x09, 0x08, 0x08, 0x06, 0x05, 0x05, 0x3F, 0x38,
 0x32, 0x3B, 0x31, 0x29, 0x37, 0x2A, 0x20, 0x33,
 0x24, 0x19, 0x2F, 0x1E, 0x12, 0x2B, 0x18, 0x0C,
 0x27, 0x13, 0x07, 0x23, 0x0F, 0x02, 0x1F, 0x0B,
 0x00, 0x1B, 0x09, 0x00, 0x17, 0x07, 0x00, 0x13,
 0x05, 0x00, 0x0F, 0x03, 0x00, 0x0B, 0x02, 0x00,
 0x08, 0x01, 0x00, 0x25, 0x38, 0x3E, 0x20, 0x35,
 0x3D, 0x1A, 0x30, 0x3A, 0x15, 0x2C, 0x38, 0x10,
 0x26, 0x33, 0x0C, 0x21, 0x2E, 0x09, 0x1C, 0x29,
 0x21, 0x34, 0x00, 0x21, 0x2C, 0x00, 0x1F, 0x25,
 0x00, 0x1A, 0x1E, 0x00, 0x14, 0x16, 0x00, 0x11,
 0x10, 0x00, 0x0C, 0x0A, 0x00, 0x08, 0x06, 0x00,
 0x37, 0x30, 0x2D, 0x33, 0x2D, 0x28, 0x2F, 0x27,
 0x25, 0x2B, 0x24, 0x20, 0x27, 0x20, 0x1C, 0x23,
 0x1C, 0x19, 0x20, 0x18, 0x16, 0x1C, 0x15, 0x13,
 0x18, 0x11, 0x10, 0x14, 0x0E, 0x0D, 0x11, 0x0B,
 0x0A, 0x0D, 0x08, 0x07, 0x09, 0x05, 0x05, 0x06,
 0x03, 0x03, 0x38, 0x3A, 0x35, 0x33, 0x36, 0x2B,
 0x2F, 0x32, 0x26, 0x2B, 0x2E, 0x22, 0x27, 0x2A,
 0x1D, 0x23, 0x26, 0x19, 0x1F, 0x22, 0x15, 0x1B,
 0x1E, 0x11, 0x18, 0x1A, 0x0E, 0x14, 0x16, 0x0B,
 0x10, 0x12, 0x08, 0x0D, 0x0E, 0x06, 0x09, 0x0B,
 0x04, 0x06, 0x07, 0x02, 0x36, 0x34, 0x2D, 0x31,
 0x2C, 0x22, 0x2F, 0x2A, 0x1E, 0x2E, 0x27, 0x1A,
 0x2A, 0x22, 0x14, 0x27, 0x1D, 0x0F, 0x24, 0x19,
 0x0B, 0x21, 0x15, 0x08, 0x1E, 0x12, 0x05, 0x1A,
 0x0F, 0x03, 0x17, 0x0C, 0x02, 0x14, 0x0A, 0x01,
 0x10, 0x07, 0x01, 0x0D, 0x05, 0x00, 0x0A, 0x03,
 0x00, 0x07, 0x03, 0x00, 0x3F, 0x35, 0x30, 0x3F,
 0x32, 0x2C, 0x3F, 0x30, 0x28, 0x3F, 0x2D, 0x24,
 0x3F, 0x2B, 0x20, 0x3F, 0x29, 0x1C, 0x3F, 0x27,
 0x18, 0x3B, 0x24, 0x15, 0x37, 0x21, 0x13, 0x34,
 0x1E, 0x11, 0x30, 0x1B, 0x0F, 0x2D, 0x19, 0x0D,
 0x29, 0x16, 0x0B, 0x26, 0x14, 0x0A, 0x26, 0x23,
 0x19, 0x22, 0x1E, 0x16, 0x1E, 0x19, 0x13, 0x1A,
 0x15, 0x10, 0x16, 0x11, 0x0D, 0x14, 0x0E, 0x0B,
 0x2C, 0x35, 0x3C, 0x39, 0x3C, 0x3E, 0x2C, 0x35,
 0x3C, 0x1C, 0x2B, 0x39, 0x0D, 0x23, 0x36, 0x00,
 0x1B, 0x34, 0x0C, 0x23, 0x36, 0x1B, 0x2C, 0x39,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x26, 0x27, 0x3F,
 0x3A, 0x15, 0x3F, 0x16, 0x15, 0x37, 0x05, 0x0A,
 0x3F, 0x2B, 0x17, 0x3F, 0x23, 0x07, 0x3F, 0x0E,
 0x13, 0x30, 0x03, 0x07, 0x3F, 0x07, 0x0D, 0x24,
 0x1E, 0x30, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F};

typedef struct {
  u2 W;
  u2 H;
  s2 X;
  s2 Y;
} __attribute__ ((packed)) header;

static void expandPal(u1 *D, u1 *S, int N, int Shift) {
  while (N--) {
    *D++ = *S++ << Shift;
    *D++ = *S++ << Shift;
    *D++ = *S++ << Shift;
    *D++ = 0;
  }
}

//ALLDEF,ALLSIN,ALLSINBK,WARFLD,S1,S2,S3 contain uncompressed 128x128 maps
//FMAP contains tileset
//SDX* are objects
//*.IDX are characters
static void idxDecompile(char *Output, char *Input) {
  char Tmp[1024], Dir[1024], Ext[32], Name[256];
  int I, J, X, Y, C, Off, Len, Wide, High, L;
  int NFrames = fileSize(Input)/4;
  u4 *O = (u4*)readFile(0, NFrames*4, Input);
  u1 *M, *Q, *Z;
  header *H;
  pic *P;

  pathParts(Dir, Name, Ext, Input);
  if (!memcmp(Name,"SDX",3)) sprintf(Tmp, "%s/SMP%s", Dir, Name+3);
  else sprintf(Tmp, "%s/%s.GRP", Dir, Name);

  L = fileSize(Tmp);
  M = readFile(0, L, Tmp);

  if (!strcmp(Name,"KEND")) { //just an array of 320x240 images
    P = picNew(320,L/320,8);
    memcpy(P->D, M, P->W*P->H);
    expandPal(P->P, EndPal, 256, 2);
    sprintf(Tmp, "%s/01.png", Output);
    pngSave(Tmp, P);
    return;
  }

  Off = 0;
  times (I, NFrames) {
    Len = O[I] - Off;
    H = (header*)(M+Off);
    Q = (u1*)(H+1);
    if (I && O[I-1] == O[I]) continue;

    printf("  %08X:%08X:%dx%d:%d,%d\n"
          ,Off, Len, H->W, H->H, H->X, H->Y);

    if (!H->W || !H->H || H->H > 1280 || H->W > 1280) continue;

    P = picNew(H->W, H->H, 8);
    expandPal(P->P, MapPal, 256, 2);
    P->K=0;

    Y = 0;
    while (Q < M+L) {
      X = 0;
      C = *Q++;
      Z = Q+C;
      while (Q<Z) {
        X += *Q++;
        C = *Q++;
        while (C--) picPut(P, X++, Y, *Q++);
      }
      Y++;
    }

    sprintf(Tmp, "%s/%04d.png", Output, I);
    pngSave(Tmp, P);

    Off = O[I];
  }
}

int idxInit(format *F) {
  F->Type = FMT_ARCHIVE;
  F->Name = "idx";
  F->Description = "Jinyong Qunxia Zhuan (use on *.IDX and SDX* files)";
  F->Decompile = idxDecompile;
  return 1;
}


