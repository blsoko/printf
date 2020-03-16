#include "holberton.h"

/**
 * print_char - function that prints a char.
 *
 * @ap: list of parameters with char to print.
 */

void print_char(va_list ap)
{
	_putchar(va_arg(ap, int));/*get the char and print it*/
}
