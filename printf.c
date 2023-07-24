#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - a function that prints everything
 * @format: a pointer to a string to be printed
 * Return: the number of string characters
*/

int _printf(const char *format, ...)
{
    int i = 0, prt_sum = 0, sum;
    va_list ap;

    va_start (ap, format);
    while(format && format[i])
    {
         if (format[i] == '%')
        {
            prt_sum += get_func(format[i + 1], ap);
            i += 2;
        }
        else
        {
            _putchar(format[i]);
            i++;
            prt_sum++;
        }
    }
    sum = prt_sum;
    va_end(ap);
    return (sum);
}