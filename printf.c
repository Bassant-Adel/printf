#include "main.h"

/**
 * _printf -> It takes a format string and a variable number of
 *arguments and produces output according to the format string.
 *
 *@format: Format It's a character as a string
 *@...: It's a String
 *Return: SUM
 */

int _printf(const char *format, ...)
{

	int sum = 0;
	va_list list;
	char *a, *start;
	params_t params = PARAMS_INIT;

	va_start(list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	for (a = (char *)format; *a; a++)
	{
		init_params(&params, list);
		if (*a != '%')
		{
			sum += _putchar(*a);
			continue;
		}		start = a;
		a++;
		while (get_flag(a, &params))
		{
			a++;
		}		a = get_width(a, &params, list);
		a = get_precision(a, &params, list);
		if (get_modifier(a, &params))
			a++;
		if (!get_specifier(a))
			sum += print_from_to(start, a,
				params.l_modifier || params.h_modifier ? a - 1 : 0);
		else
			sum += get_print_func(a, list, &params);
	}	_putchar(BUF_FLUSH);
	va_end(list);
	return (sum);

}
