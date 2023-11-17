#ifndef TYPEDEF_H
#define TYPEDEF_H

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long size_t;

typedef uint8_t bool;
#define true    (1)
#define false   (0)

#define low_16(_LOW16_address) ((uint16_t)((_LOW16_address) & 0xFFFF))
#define high_16(_HI16_address) ((uint16_t)(((_HI16_address) >> 16) & 0xFFFF))
#define low_8(_LOW8_address) ((uint8_t)((_LOW8_address) &  0xFF))
#define high_8(_HI8_address) ((uint8_t)(((_HI8_address) >> 8) & 0xFF))

#define NULL ((void*)0)

typedef int maybe_void;
typedef int maybe_int;

#endif
