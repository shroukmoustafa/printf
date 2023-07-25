#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * recursive_print - a function to print recursivly
 * @n: the number to print
 * @Return: the length of the printed number
*/
int recursive_print(int n)
{
    int len = 0;
    if (n / 10 != 0) {
        len += recursive_print(n / 10);
    }
    _putchar(n % 10 + '0');
    len++;
    return (len);
}
/**
 * p_integer - a function that prints a decimal number
 * @ap: a pointer to the last fixed argument
 * Return: length of the string (len)
*/
int p_integer(va_list ap)
{
   int len = 0;
    int n = va_arg(ap, int);
    if (n < 0)
    {
        _putchar('-');
        n = -n;
        len++;
    }
    len += recursive_print(n);
   return (len);
}
