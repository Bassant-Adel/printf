#include "main.h"

/**
 * print_range - Prints characters in a given range
 *@start: The start address
 *@stop: The stop address
 *@except: The except address
 *Return: total count of characters that were printed
 */

int print_range(char *start, char *stop, char *except)
{
	int count = 0;

	while (start <= stop)
	{
		if (start != except)
			count += _putchar(*start);

		start++;

	}	return (count);

}
