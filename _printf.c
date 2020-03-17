#include "holberton.h"

/**
 * percent_func - evaluates caracteres after %.
 *
 * @format: format to print.
 * @i: pointer to the format index.
 * @list: list of parameters.
 */

void percent_func(const char *format, unsigned int *i, va_list list)
{/* %%, %c, %s.*/
	unsigned int j = 0; /*structure iterator*/
	int special_detected = 0;
	S_conversion fstruct[] = {{'s', print_string},
		{'c', print_char}, {'\0', NULL}};

	(*i)++; /*point to the position next to the percent symbol position.*/
	while (fstruct[j].c != '\0') /*structrure elements iterator*/
	{
		if (format[*i] == fstruct[j].c)
		{
			(fstruct[j].f)(list);
			special_detected = 1;
			break;
		}
		j++;
	}
	if (special_detected == 0)
	{
		_putchar('%');
		if (format[*i] != '%')
			_putchar(format[*i]);
	}
}

/**
 * _printf - selector function option
 *
 * @format: record string
 *
 * Return: An integer
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0; /*format index iterator*/
	va_list list;

	/*printf("[[[[format:%s]]]]", format);*/
	va_start(list, format);
	while (format != NULL && format[i] != '\0') /*format iterator*/
	{
		if (format[i] == '%')
		{
			percent_func(format, &i, list);
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(list);
	return (i);
}
