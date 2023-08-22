#include "main.h"

/**
 * _putchar -> It takes a character as input and writes it to the buffer
 *@c: It's a Character
 *Return: (1)-> ON Successful, (-1)-> ON ERROR
 */

int _putchar(int c)
{

	static int b;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || b >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, b);
		b = 0;
	}

	if (c != BUF_FLUSH)
	{

		buf[b++] = c;

	}	return (1);

}
