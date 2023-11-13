#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_support(va_list list_of_args, const char format);
int char_print(char c);
int string_print(char *str);
int print_cent(char c);
int print_int(int n);

#endif
