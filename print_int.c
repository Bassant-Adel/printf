#include "main.h"

/**
 * print_int - printing an integer argument
 *@list: The pointer argument pointer
 *@params: The parameters
 *Return: A number printed
 */

int print_int(va_list list, params_t *params)
{

	long num;

	if (params->l_modifier)
		num = va_arg(list, long);
	else if (params->h_modifier)
		num = (short int)va_arg(list, int);
	else
		num = (int)va_arg(list, int);

	return (print_number(convert(num, 10, 0, params), params));

}
