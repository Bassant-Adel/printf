#include "main.h"

/**
 * print_string - Prints string
 *@list: The va_list argument pointer
 *@params: The params_t struct pointer
 *Return: A number chars printed
 */

int print_string(va_list list, params_t *params)
{
	unsigned int flag = 0, sum = 0, i = 0, z;
	char *str = va_arg(list, char *), pad_char = ' ';

	(void)params;
	switch ((int)(!str))
		case 1:
			str = NULL_STRING;

	z = flag = str_length(str);
	if (params->precision < flag)
		z = flag = params->precision;

	if (params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < flag; i++)
				sum += _putchar(*str++);
		else
			sum += _puts(str);
	}
	while (z++ < params->width)
		sum += _putchar(pad_char);
	if (!params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < flag; i++)
				sum += _putchar(*str++);
		else
			sum += _puts(str);

	}	return (sum);
}

/**
 * print_STRING - print a string with special characters
 *@list: The va_list argument pointer
 *@params: The params_t struct pointer
 *Return: A number chars printed
 */

int print_STRING(va_list list, params_t *params)
{
	char *hex;
	int sum = 0;
	char *str = va_arg(list, char *);

	if ((int)(!str))
		return (_puts(NULL_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			sum += _putchar('\\');
			sum += _putchar('x');
			hex = convert(*str, 16, 0, params);
			if (!hex[1])
				sum += _putchar('0');
			sum += _puts(hex);
		}
		else
		{
			sum += _putchar(*str);
		}

	}	return (sum);
}
