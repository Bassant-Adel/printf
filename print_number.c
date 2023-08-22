#include "main.h"

/**
 * print_number - formatting and printing a number.
 * @str: A pointer to a character array `str` => number to be printed
 * @params: A pointer to a structure
 * Return: chars printed
 */

int print_number(char *str, params_t *params)
{
	unsigned int precision = str_length(str);
	int neg = (!params->unsign && *str == '-');

	if (!params->precision && *str == '0' && !str[1])
		str = "";
	if (neg)
	{
		str++;
		precision--;
	}
	if (params->precision != UINT_MAX)
		while (precision++ < params->precision)
			*--str = '0';
	if (neg)
		*--str = '-';

	if (!params->minus_flag)
		return (print_number_right_shift(str, params));
	else
		return (print_number_left_shift(str, params));
}