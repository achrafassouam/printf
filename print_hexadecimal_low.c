#include "main.h"

/**
 * print_hexadecimal_low - print a number in hex format
 * @list: number to print
 * Return: length of the number
 */

int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

