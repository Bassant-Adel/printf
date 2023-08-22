#include "main.h"

/**
 * print_rot13 - Prints string in rot13
 *@list: va_list String
 *@params: The params_t struct
 *Return: A number bytes printed
 */

int print_rot13(va_list list, params_t *params)
{
	int count = 0;
	int j, index;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(list, char *);
	(void)params;

	index = 0;
	j = 0;
	while (a[j])
	{
		if ((a[j] >= 'A' && a[j] <= 'Z')
		    || (a[j] >= 'a' && a[j] <= 'z'))
		{
			index = a[j] - 65;
			count += _putchar(arr[index]);
		}
		else
		{
			count += _putchar(a[j]);

		}		j++;

	}	return (count);
}
