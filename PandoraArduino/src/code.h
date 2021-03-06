#include <Arduino.h>

static byte keystore[10][16] = 
{
    { 0x5C, 0x52, 0xD9, 0x1C, 0xF3, 0x82, 0xAC, 0xA4, 0x89, 0xD8, 0x81, 0x78, 0xEC, 0x16, 0x29, 0x7B }, // 086
    { 0x9D, 0x4F, 0x50, 0xFC, 0xE1, 0xB6, 0x8E, 0x12, 0x09, 0x30, 0x7D, 0xDB, 0xA6, 0xA5, 0xB5, 0xAA }, // ???????
    { 0x09, 0x75, 0x98, 0x88, 0x64, 0xAC, 0xF7, 0x62, 0x1B, 0xC0, 0x90, 0x9D, 0xF0, 0xFC, 0xAB, 0xFF }, // 85v2 fallback
    { 0xC9, 0x11, 0x5C, 0xE2, 0x06, 0x4A, 0x26, 0x86, 0xD8, 0xD6, 0xD9, 0xD0, 0x8C, 0xDE, 0x30, 0x59 }, // ????????
    { 0x66, 0x75, 0x39, 0xD2, 0xFB, 0x42, 0x73, 0xB2, 0x90, 0x3F, 0xD7, 0xA3, 0x9E, 0xD2, 0xC6, 0x0C }, // 90, 93, 95, 96 autoboot
    { 0xF4, 0xFA, 0xEF, 0x20, 0xF4, 0xDB, 0xAB, 0x31, 0xD1, 0x86, 0x74, 0xFD, 0x8F, 0x99, 0x05, 0x66 },  // ????????
    { 0xEA, 0x0C, 0x81, 0x13, 0x63, 0xD7, 0xE9, 0x30, 0xF9, 0x61, 0x13, 0x5A, 0x4F, 0x35, 0x2D, 0xDC },  // ????????
    { 0xAC, 0x00, 0xC0, 0xE3, 0xE8, 0x0A, 0xF0, 0x68, 0x3F, 0xDD, 0x17, 0x45, 0x19, 0x45, 0x43, 0xBD },// 90 normal
    { 0xDF, 0xF3, 0xFC, 0xD6, 0x08, 0xB0, 0x55, 0x97, 0xCF, 0x09, 0xA2, 0x3B, 0xD1, 0x7D, 0x3F, 0xD2 },// 93, 95, 96 normal
    { 0xC7, 0xAC, 0x13, 0x06, 0xDE, 0xFE, 0x39, 0xEC, 0x83, 0xA1, 0x48, 0x3B, 0x0E, 0xE2, 0xEC, 0x89 } // 90 FSM
};
