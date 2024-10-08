// Copyright 2024 (c) B.Kerler
// Use of this source code is governed by a GPLv3 license, see LICENSE.txt.

#pragma once

/** \name Fixed width integers
 *  @{
 */
typedef unsigned char u8_t;             ///< Unsigned 8-bit type
typedef unsigned short int u16_t;       ///< Unsigned 16-bit type
typedef unsigned int u32_t;             ///< Unsigned 32-bit type
typedef unsigned long long u64_t;        ///< Unsigned 64-bit type

// typedef u64_t u64;
// typedef u32_t u32;
// typedef u16_t u16;
// typedef u8_t u8;
#ifndef size_t
typedef unsigned size_t;
#endif
size_t strlen(const char *str);
int printf(const char *format, ...);
int sprintf (char *str, const char *format, ...);
char *strcpy(char *to, const char *from);
int strncmp(const char *s1, const char *s2, u32_t n);
void*  memset(void*  dst, int c, u32_t n);
void *memcpy(void *dest, const void *src, size_t n);
int strcmp(const char *s1, const char *s2);
int memcmp(const void* s1, const void* s2, size_t n);
char *strstr(const char *s1, const char *s2);