#include "holberton.h"

/**
 * print_char - function that prints a char.
 *
 * @list: list of parameters with char to print.
 */

void print_char(va_list list)
{
	_putchar(va_arg(list, int));/*get the char and print it*/
}
