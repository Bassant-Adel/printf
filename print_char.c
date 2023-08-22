#include "main.h"

/**
 * print_char_num - prints a character and pads it with spaces if necessary.
 *@list: The argument pointer
 *@params: A pointer to a structure of type "params_t"
 *Return: the total number of characters printed.
 */

int print_char_num(va_list list, params_t *params)
{
	unsigned int width = 1, sum = 0
  unsigned int ch = va_arg(list, int);
	char space = ' ';

	if (params->minus_flag)
		sum += _putchar(ch);
	while (width++ < params->width)
		sum += _putchar(space);
	if (!params->minus_flag)
		sum += _putchar(ch);
	return (sum);
}