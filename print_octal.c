#include "main.h"

/**
 * print_octal - printing unsigned octal numbers
 *@list: The argument pointer list
 *@params: The parameters struct
 *Return: The bytes printed
 */

int print_octal(va_list list, params_t *params)
{
	unsigned long num;
	int ch = 0;
	char *str;

	if (params->l_modifier)
		num = (unsigned long)va_arg(list, unsigned long);
	else if (params->h_modifier)
		num = (unsigned short int)va_arg(list, unsigned int);
	else
		num = (unsigned int)va_arg(list, unsigned int);
	str = convert(num, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && num)
		*--str = '0';
	params->unsign = 1;
	return (ch += print_number(str, params));
}