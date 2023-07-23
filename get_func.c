#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * get_func - a function that select through the printing function
 * @specifier: a character specifier
 * @ap: a pointerto the last fixed string
 * Return: the number of printed characters
 */
int get_func(char specifier, va_list ap)
{
    pr_spf spf[] = {
        {"c", p_char},
        {"s", p_string},
        {"d", p_decimal},
        {"i", p_integer},
        {NULL, NULL}
    };
    int i = 0, n_printed_char = 0;

    while (spf[i].par)
    {
        if (specifier == *(spf[i].par))
        {
            n_printed_char = spf[i].f(ap);
            return (n_printed_char);
        }
        i++;
    }
    return (0);
}
