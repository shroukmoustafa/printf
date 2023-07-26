#ifndef main_h
#define main_h
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct print - a struct to distrubute the specifier to function
 * @par: format parameter
 * @f: the function associated
*/
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
int recursive_print(int n);
int p_u_integer(va_list ap);
int recursive_print_u(unsigned int n);
int p_reverse(va_list ap);

#endif
