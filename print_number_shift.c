#include "main.h"

/**
 * print_number_right_shift - it prints a number with options
 * @str: A pointer to a character array that represents the number printed
 * @params: A pointer to a struct
 * Return: the number of characters printed
 */

int print_number_right_shift(char *str, params_t *params)
{
	unsigned int sum = 0, width = str_length(str);
	unsigned int neg, neg2;
	char flag = ' ';

	if (params->zero_flag && !params->minus_flag)
		flag = '0';
	neg = neg2 = (!params->unsign && *str == '-');
	if (neg && width < params->width && flag == '0' && !params->minus_flag)
		str++;
	else
		neg = 0;
	if ((params->plus_flag && !neg2) ||
      (!params->plus_flag && params->space_flag && !neg2))
		width++;
	if (neg && flag == '0')
		sum += _putchar('-');
	if (params->plus_flag && !neg2 && flag == '0' && !params->unsign)
		sum += _putchar('+');
	else if (!params->plus_flag && params->space_flag && !neg2 &&
		!params->unsign && params->zero_flag)
		sum += _putchar(' ');
	while (width++ < params->width)
		sum += _putchar(flag);
	if (neg && flag == ' ')
		sum += _putchar('-');
	if (params->plus_flag && !neg2 && flag == ' ' && !params->unsign)
		sum += _putchar('+');
	else if (!params->plus_flag && params->space_flag && !neg2 &&
		!params->unsign && !params->zero_flag)
		sum += _putchar(' ');
	sum += _puts(str);
	return (sum);
}

/**
 * print_number_left_shift - prints a num with left shift formatting
 * @str: the number to be printed
 * @params: the parameter struct
 * Return: the sum of the number of characters printed.
 */

int print_number_left_shift(char *str, params_t *params)
{
	unsigned int sum = 0, width = str_length(str);
	unsigned int neg, neg2;
	char flag = ' ';

	if (params->zero_flag && !params->minus_flag)
		flag = '0';
	neg = neg2 = (!params->unsign && *str == '-');
	if (neg && width < params->width && flag == '0' && !params->minus_flag)
		str++;
	else
		neg = 0;

	if (params->plus_flag && !neg2 && !params->unsign)
		sum += _putchar('+'), width++;
	else if (params->space_flag && !neg2 && !params->unsign)
		sum += _putchar(' '), width++;
	sum += _puts(str);
	while (width++ < params->width)
		sum += _putchar(flag);
	return (sum);
}