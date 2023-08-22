#include "main.h"

/**
 * print_reverse - Prints string in reverse order
 *@list: va_list String
 *@params: The params_t struct
 *Return: The number bytes printed
 */

print_reverse(va_list list, params_t *params)
{
	int i, sum = 0;
	char *str = va_arg(list, char *);
	(void)params;

	if (str)
	{
		for (i = 0; *str; str++)
			i++;
		str--;
		for (; i > 0; i--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}