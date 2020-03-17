#include "holberton.h"

/**
 * print_char - function that prints a char.
 *
 * @bytes_printed: bytes printed.
 * @list: list of parameters with char to print.
 */

void print_char(int *bytes_printed, va_list list)
{
	(*bytes_printed)++;
	_putchar(va_arg(list, int));/*get the char and print it*/
}
