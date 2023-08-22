#ifndef MAIN_H
#define MAIN_H

#define BUF_FLUSH -1
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2
#define OUTPUT_BUF_SIZE 1024
#define NULL_STRING "(null)"
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* The C Standard Library */

#include <math.h>
#include <float.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Data structures */

/**
 * struct parameters -> These fields are used to keep track
 *of the specified flags and modifiers in the format string
 *
 *@unsign: Flag -> Unsigned Value
 *@plus_flag: It's specified
 *
 *@space_flag: It's specified
 *@hashtag_flag: It's specified
 *
 *@zero_flag: It's specified
 *@minus_flag: It's specified
 *
 *@width: It's specified
 *@precision: It's specified
 *
 *@h_modifier: It's specified
 *@l_modifier: It's specified
 */

typedef struct parameters
{

	unsigned int unsign			: 1;
	unsigned int plus_flag		: 1;

	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;

	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier		: 1;
	unsigned int l_modifier		: 1;

} params_t;

/**
 * struct specifier - It's defining a new data type
 *called specifier_t which is a structure
 *
 *@specifier: A pointer to a character
 *@f: A pointer to a function that takes a va_list
 */

typedef struct specifier
{

	char *specifier;
	int (*f)(va_list, params_t *);

} specifier_t;

/* ALL Prototypes */

int _putchar(int c);
int is_digit(int c);
int _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
int print_STRING(va_list list, params_t *params);
int print_reverse(va_list list, params_t *params);
int print_hex(va_list list, params_t *params);
int print_HEX(va_list list, params_t *params);
int print_int(va_list list, params_t *params);
int print_number(char *str, params_t *params);
int print_char_num(va_list list, params_t *params);
int print_rot13(va_list list, params_t *params);
int print_octal(va_list list, params_t *params);
void init_params(params_t *params, va_list list);
int print_binary(va_list list, params_t *params);
int print_string(va_list list, params_t *params);
int print_percent(va_list list, params_t *params);
int print_address(va_list list, params_t *params);
int print_unsigned(va_list list, params_t *params);
char *get_width(char *s, params_t *params, va_list list);
int print_range(char *start, char *stop, char *except);
int print_number_left_shift(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int get_print_format(char *s, va_list list, params_t *params);
char *get_precision(char *p, params_t *params, va_list list);
int (*get_specifier(char *s))(va_list list, params_t *params);
char *convert(long int num, int base, int flags, params_t *params);
int str_length(char *str);

#endif
