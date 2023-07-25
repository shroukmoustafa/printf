#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * p_reverse - prints string in reverse
 * @ap: argument list
 * Return: number of bytes printed
 */
int p_reverse(va_list ap)
{
    int len, sum = 0, i;
    char *str = va_arg(ap, char *);

    if (str != NULL)
    {
        len = 0;
        while (str[len] != '\0')
        {
            len++;
        }
        for (i = len - 1; i >= 0; i--)
        {
            sum += _putchar(str[i]);
        }
    }
    return (sum);
}