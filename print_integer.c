#include "holberton.h"

/**
 * print_number - function that prints a char.
 *
 * @bytes_printed: bytes printed
 * @n: list of parameters with char to print.
 */

void print_number(int *bytes_printed, int n)
{
	unsigned int m = 0;

	if (n < 0)
	{
		m = -n;
		(*bytes_printed)++;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	while (m / 10)
	{
		print_number(bytes_printed, m / 10);
		break;
	}
		(*bytes_printed)++;
		_putchar((m % 10) + '0');
	}

/**
 * print_integer - calls a function
 *
 * @bytes_printed: bytes printed
 * @list: value
 */
void print_integer(int *bytes_printed, va_list list)
{
	int n = va_arg(list, int);

	print_number(bytes_printed, n);
}

/**
 * print_integerofi - call a function to print
 *
 * @bytes_printed: bytes printed
 * @list: value valist
 */

void print_integerofi(int *bytes_printed, va_list list)
{
	int n = va_arg(list, int);

	print_number(bytes_printed, n);
}
