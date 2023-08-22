#include "main.h"

/**
 * print_binary - Prints binary representation
 *@list: The argument pointer
 *@params: The parameters struct
 *Return: The bytes printed
 */

int print_binary(va_list list, params_t *params)
{
	int ch = 0;
	unsigned int num = va_arg(list, unsigned int);
	char *str = convert(num, 2, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && num)
	{

		*--str = '0';

	}	params->unsign = 1;

	return (ch += print_number(str, params));

}
