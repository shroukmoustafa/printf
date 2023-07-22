#ifndef PRINTF_H
#define PRINTF_H
#include <stdar.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#define BUF_FLUSH -1
#define OUTPUT_BUF_SIZE 1024

#define NULL_STRING "((null))"
#define PARAMS_INIT { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2
/**
 * struct - struct paramametrs
 * @unsign :flag for unsigned
 * @plus :flag for plus
 * @space :flag for space
 * @hash :flag for hashtag
 * @l_modifier :on if l_modifier is calling
 * @h_modifier :on if h_modifier is calling
 * @width :field width
 * @precision :field presision
 * @0_flag :flag for zeros
 * @minus :flag for minus
 *
 */
typedef struct parameters
{
	unsigned int plus_flag	: 1;
	unsigned int unsign	: 1;
	unsigned int space_flag	: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int zero_flag	: 1;
	unsigned int minus_flag	: 1;
	unsigned int l_modifier	: 1;
	unsigned int h_modifier	: 1;
	unsigned int width;
	unsigned int precision;
} params_t;

/*
 * struct specifier - struct allowed
 * @specifier : format allowed
 * @f : function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;


/*function prototype */
int _printf(const char *format, ...);
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);
int print_hexadecimal(va_list ap, params_t *params);
int print_hexa_upper(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);
int print_addresse(va_list ap, params_t *params);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);
#endif
