#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char format, ...);
int percent(va_list list_of_args, const char format);
int print_char(char c);
int _strings(charstr);

#endif
