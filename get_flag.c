#include "main.h"

/**
 * get_flag - find and set the appropriate flag
 * @str: the format string
 * @params: the params_t struct
 * Return: true, false
 */

int get_flag(char *str, params_t *params)
{
	int flag = 0;

	switch (*str)
	{
		case '+':
			flag = params->plus_flag = 1;
			break;
		case ' ':
			flag = params->space_flag = 1;
			break;
		case '#':
			flag = params->hashtag_flag = 1;
			break;
		case '-':
			flag = params->minus_flag = 1;
			break;
		case '0':
			flag = params->zero_flag = 1;
			break;
	}
	return (flag);
}