#include "main.h"

/**
 * get_modifier -> The function is used to determine
 *the modifier for a format specifier in a format string
 *
 *@s: It's a String
 *@params: It's a Parameters
 *Return: (n)-> Valid
 */

int get_modifier(char *s, params_t *params)
{

	int n = 0;

	switch (*s)
	{

	case 'h':
		n = params->h_modifier = 1;
		break;

	case 'l':
		n = params->l_modifier = 1;
		break;

	}	return (n);

}
