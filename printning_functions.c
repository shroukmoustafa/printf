#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * p_char - a function that prints a single charachter
 * @ap: a pointer to the last fixed argument
 * Return: (1) on sucess, (0) if NULL
 */
int p_char(va_list ap)
{
    char c;

    c = va_arg(ap, int);
    if (!c)
        return (0);
    _putchar(c);
    return (1);
}

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
    int n = va_arg(ap, int);
    int len = 0;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        len++;
    }
    if (n / 10 != 0)
        len += p_decimal(ap);
    _putchar(n % 10 + '0');
    len++;
    return (len);
}

/**
 * p_integer - a function that prints an integer
 * @ap: a pointer to the last fixed argument
 * Return: length of the string (len)
 */
int p_integer(va_list ap)
{
    int n = va_arg(ap, int);
    int len = 0;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        len++;
    }
    if (n / 10 != 0)
        len += p_integer(ap);
    _putchar(n % 10 + '0');
    len++;
    return (len);
}