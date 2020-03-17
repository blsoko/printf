#include "holberton.h"

/**
 * print_integer - function that prints a char.
 *
 * @list: list of parameters with char to print.
 */

void print_number(int n)
{
	unsigned int m = 0;
        if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
        else
        {
                m = n;
        }
	while (m / 10)
	{
		print_number(m / 10);
		break;
	}
	_putchar((m % 10) + '0');
}


void print_integer(va_list list)
{
	int n = va_arg(list, int);
        print_number(n);
}

void print_integerofi(va_list list)
{
	int n = va_arg(list, int);
        print_number(n);
}
