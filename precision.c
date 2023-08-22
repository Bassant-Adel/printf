#include "main.h"

/**
 * get_precision - The function is used to extract
 *the precision value from the format string
 *
 *@p: It's a String
 *@params: It's a Parameters
 *@list: It's an Argument
 *Return: The New Pointer
 */

char *get_precision(char *p, params_t *params, va_list list)
{

	int n = 0;

	if (*p != '.')
	{

		return (p);

	}	p++;

	if (*p == '*')
	{
		n = va_arg(list, int);
		p++;
	}

	else
	{

		while (is_digit(*p))
		{
			n = n * 10 + (*p++ - '0');
		}

	}	params->precision = n;

	return (p);

}
