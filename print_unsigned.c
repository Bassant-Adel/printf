#include "main.h"

/**
 * print_unsigned - Prints unsigned number
 *@list: The va_list pointer
 *@params: The params_t struct
 *Return: A bytes printed
 */

int print_unsigned(va_list list, params_t *params)
{
	unsigned long num;

	if (params->l_modifier)
		num = (unsigned long)va_arg(list, unsigned long);

	else if (params->h_modifier)
		num = (unsigned short int)va_arg(list, unsigned int);

	else
	{
		num = (unsigned int)va_arg(list, unsigned int);

	}	params->unsign = 1;

	return (print_number(convert(num, 10, CONVERT_UNSIGNED, params), params));
}
