#include "main.h"

/**
 * print_binary - convert number in base 10 to base 2 and print it
 * @list: number to print in base 2
 * Return: length of number in base 2
 */

int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
