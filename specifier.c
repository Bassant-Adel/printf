#include "main.h"

/**
 * get_specifier - it finds func format
 * @str: the format string
 * Return: the num of bytes printed
 */
int (*get_specifier(char *str))(va_list list, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char_num},
		{"d", print_int},
		{"i", print_int},
		{"str", print_string},
		{"%", print_percent},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_address},
		{"str", print_STRING},
		{"r", print_reverse},
		{"R", print_rot13},
		{NULL, NULL}
	};

	int i = 0;

	while (specifiers[i].specifier)
	{
		if (*str == specifiers[i].specifier[0])
		{
			return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}