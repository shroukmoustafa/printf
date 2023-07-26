#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;

    ui = (unsigned int)INT_MAX + 1024;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
     _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unknown:[%z]\n");
    printf("Unknown:[%z]\n");
    _printf("reversed function result: %r\n", "amaizing");
    /*_printf("% \n");*/
    printf("%d\n",_printf("% ...."));
    printf("% \n");
    printf("%d\n",printf("% ...."));
    printf("-------------------------------------\n");
    /*_printf("%s\n",NULL); */
    /*printf("k%d\n", _printf("%s\n",NULL));*/
   /* _printf("%s\n","\0"); */
    printf("-------------------------------------\n");
    printf("%d\n", _printf("%s\n","\0"));
    /* printf("%s\n","\0"); */
    printf("%d\n", printf("%s\n","\0"));
    printf("-------------------------------------\n");
    /*_printf("%s\n",'\0');*/
    printf("%d\n", _printf("%s\n",'\0'));
   /* printf("%s\n",'\0'); */
    printf("%d\n", printf("%s\n",'\0'));
    printf("-------------------------------------\n");
   /*_printf(NULL); */
    printf("%d\n", _printf(NULL));
   /*printf(NULL);*/
    printf("%d\n", printf(NULL));



   
    return (0);
}