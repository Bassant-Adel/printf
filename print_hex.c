#include "main.h"

/**
 * print_hex - Prints unsigned hexadecimal numbers in lowercase
 *@list: The va_list argument pointer
 *@params: The params_t struct pointer
 *Return: The bytes printed
 */

int print_hex(va_list list, params_t *params)
{
	int ch = 0;
	char *str;
	unsigned long num;

	if (params->l_modifier)
		num = (unsigned long)va_arg(list, unsigned long);
	else if (params->h_modifier)
		num = (unsigned short int)va_arg(list, unsigned int);
	else
		num = (unsigned int)va_arg(list, unsigned int);

	str = convert(num, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && num)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (ch += print_number(str, params));
}

/**
 * print_HEX - prints unsigned hexadecimal numbers in uppercase
 *@list: The va_list argument pointer
 *@params: The params_t struct pointer
 *Return: The bytes printed
 */

int print_HEX(va_list list, params_t *params)
{
	int ch = 0;
	char *str;
	unsigned long num;

	if (params->l_modifier)
		num = (unsigned long)va_arg(list, unsigned long);
	else if (params->h_modifier)
		num = (unsigned short int)va_arg(list, unsigned int);
	else
		num = (unsigned int)va_arg(list, unsigned int);

	str = convert(num, 16, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && num)
	{
		*--str = 'X';
		*--str = '0';

	}	params->unsign = 1;

	return (ch += print_number(str, params));

}
