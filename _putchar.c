#include "main.h"

/**
 * _putchar - writes a char to stdout
 * @c: the char
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - save a char in a buffer
 * @c: the car
 * Return: 1
 */

int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
