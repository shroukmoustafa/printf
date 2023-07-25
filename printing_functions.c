#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
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
    c =(va_arg(ap, int));
    if (!c)
        return (0);
    _putchar(c);
    return (1);
}


