#include "main.h"

/**
 * init_params -> It's a struct that stores
 *various parameters for formatting output
 *
 *@params: It's a Parameters
 *@list: It's an Argument
 *Return: It's a Void Function
 */

void init_params(params_t *params, va_list list)
{
	*params = (params_t){0};

	params->precision = UINT_MAX;

	(void)list;
}
