#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * p_string - a function that print a string
 * @ap: a pointer to the last fixed argument
 * Return: length of the string (len)
*/
int p_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int len = 0;

	if (!s)
		s = "(null)";
	while (*s)
	{
		_putchar(*s);
		s++;
		len++;
	}
	return (len);
}
/**
 * p_decimal - a function that prints a decimal number
 * @ap: a pointer to the last fixed argument
 * Return: length of the string (len)
*/
int p_decimal(va_list ap)
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
