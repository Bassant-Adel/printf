#include "main.h"
/**
 * get_print_format - it finds the format func
 * @str: the string
 * @list: va_list pointer
 * @params: the params_t struct
 * Return: the num of bytes printed
 */
int get_print_format(char *str, va_list list, params_t *params)
{
	int (*f)(va_list, params_t *) = get_specifier(str);

	if (f)
		return (f(list, params));
	return (0);
}