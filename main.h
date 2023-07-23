#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct print
{
    char *par;
    int (*f)(va_list);
} pr_spf;

int _printf(const char *format, ...);
int get_func(char specifier, va_list ap);
int _putchar(char c);
int p_char(va_list ap);
int p_string(va_list ap);
int p_decimal(va_list ap);
int p_integer(va_list ap);

#endif
