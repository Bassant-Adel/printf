#include "main.h"

/**
 * str_length - it returns the length of a string until null terminator
 * @str: A pointer to a character array
 * Return: length of the input string
 */

int str_length(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);

}
