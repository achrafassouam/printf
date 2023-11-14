#include "main.h"

/**
 * print_unsigned - print an unsigned int
 * @list: number to print
 * Return: lenght of the number
 */

int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

