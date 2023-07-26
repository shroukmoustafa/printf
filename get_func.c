#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * get_func - a function that select through the printing function
 * @specifier: a pointer to the specifier
 * @ap: a pointer to the last fixed string
 * Return: (sum) the number of printed characters
*/
int get_func(char specifier, va_list ap)
{
	pr_spf spf[] = {
		{"c", p_char},
		{"s", p_string},
		{"d", p_decimal},
		{"i", p_integer},
		{"u", p_u_integer},
		{"r", p_reverse},
		{NULL, NULL}
		};
	int i = 0;
	int n_printed_char = 0;

	while (spf[i].par)
	{
		if (specifier == *(spf[i].par))
		{
			n_printed_char = spf[i].f(ap);
			return (n_printed_char);
		}
		i++;
	}
	if (specifier)
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
