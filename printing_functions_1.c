#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * p_u_integer - a function that prints an unsigned decimal number
 * @ap: a pointer to the last fixed argument
 * Return: length of the string (len)
*/
int p_u_integer(va_list ap)
{
int len = 0;
unsigned int n = va_arg(ap, unsigned int);

n = ((int) n);
len += recursive_print_u(n);
return (len);
}

/**
 * recursive_print - a function to print recursivly
 * @n: the number to print
 * @Return: the length of the printed number
*/
int recursive_print_u(unsigned int n)
{
unsigned int len = 0;
if (n / 10 != 0)
{
len += recursive_print_u(n / 10);
}

_putchar(n % 10 + '0');
len++;

return (len);
}

