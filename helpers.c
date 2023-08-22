#include "main.h"

/**
 * is_digit - The function checks if a character is a digit.
 * @ch: represents a character
 * Return: 1 if digit, or 0 otherwise
 */

int is_digit(int ch)
{
	return (ch >= '0' && ch <= '9');
}

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
