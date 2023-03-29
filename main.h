#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char character);
int selector(const char *format, va_list args, int printed);
int printf_integer(va_list args, int printed);
int printf_char(va_list args, int printed);
#endif
