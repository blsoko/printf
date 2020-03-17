#include "holberton.h"

/**
 * print_string - prints a string.
 *
 * @list: - list with string to print.
 */

void print_string(va_list list)
{
	int i = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0') /*prints strings*/
	{
		_putchar(str[i]);
		i++;
	}
}
