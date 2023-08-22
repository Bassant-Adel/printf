#include "main.h"

/**
 * convert - converts a number to a string representation
 *@num: Number
 *@base: Base
 *@flags: flags arg
 *@params: struct params_t
 *Return: String
 */

char *convert(long int num, int base, int flags, params_t *params)
{
	static char buf[50];
	static char *array;
	char sign = 0;
	char *ptr;
	unsigned long n = num;
	(void)params;

	if (!(flags & CONVERT_UNSIGNED) && num < 0)
	{
		n = -num;
		sign = '-';

	}
	array = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buf[49];
	*ptr = '\0';

	do	{
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}