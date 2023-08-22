#include "main.h"

/**
 * get_width -> The function extracts the width value
 *from a string and stores it in a parameter struct
 *
 *@s: A pointer to a String
 *@params: A pointer to a structure of type params_t
 *@list: A variable of type va_list
 *Return: The New Pointer To A Character
 */

char *get_width(char *s, params_t *params, va_list list)
{

	int n = 0;

	if (*s == '*')
	{
		n = va_arg(list, int);
		s++;
	}

	else
	{

		while (_isdigit(*s))
		{
			n = n * 10 + (*s++ - '0');
		}

	}	params->width = n;

	return (s);

}
