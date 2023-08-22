#include "main.h"

/**
 * _puts -> It takes a pointer to a string as input and iterates
 *through each character of the string using a while loop
 *
 *@str: It's a String
 *Return: The difference between the current position of the string pointer
 */

int _puts(char *str)
{

	char *a = str;

	while (*str)
	{

		_putchar(*str++);

	}	return (str - a);

}
