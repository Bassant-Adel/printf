#include "main.h"

/**
 * print_string - Prints string
 *@list: The va_list argument pointer
 *@params: The params_t struct pointer
 *Return: A number chars printed
 */

int print_string(va_list list, params_t *params)
{
	char *str = va_arg(list, char *), pad_char = ' ';
	unsigned int pad = 0, sum = 0, i = 0, z;

	(void)params;
	switch ((int)(!str))
		case 1:
			str = NULL_STRING;

	z = pad = str_length(str);
	if (params->precision < pad)
		z = pad = params->precision;

	if (params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < pad; i++)
				sum += _putchar(*str++);
		else
			sum += _puts(str);
	}
	while (z++ < params->width)
		sum += _putchar(pad_char);
	if (!params->minus_flag)
	{
		if (params->precision != UINT_MAX)
			for (i = 0; i < pad; i++)
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
	char *str = va_arg(list, char *);
	char *hex;
	int sum = 0;

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
