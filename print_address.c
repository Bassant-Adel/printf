#include "main.h"

/**
 * print_address - Prints hexadecimal representation of an address
 *@list: The argument pointer
 *@params: The params_t struct
 *Return: The bytes printed
 */

int print_address(va_list list, params_t *params)
{
	char *str;
	unsigned long int num = va_arg(list, unsigned long int);

	if (!num)
		return (_puts("(nil)"));

	str = convert(num, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);

	*--str = 'x';
	*--str = '0';

	return (print_number(str, params));

}
