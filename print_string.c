#include "holberton.h"

/**
 * print_string - prints a string.
 *
 * @bytes_printed: bytes printed.
 * @list: - list with string to print.
 */

void print_string(int *bytes_printed, va_list list)
{
	int i = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0') /*prints strings*/
	{
		(*bytes_printed)++;
		_putchar(str[i]);
		i++;
	}
}
