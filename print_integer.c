#include "main.h"

/**
 * print_integer - print a number in base 10
 * @list: number to print
 * Return: length of the number
 */

int print_integer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
