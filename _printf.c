#include "holberton.h"

/**
 * percent_func - evaluates caracteres after %.
 *
 * @format: format to print.
 * @i: pointer to the format index.
 * @byte: bytes printed.
 * @list: list of parameters.
 */

void percent_func(const char *format, unsigned int *i, int *byte, va_list list)
{/* %%, %c, %s.*/
	unsigned int j = 0; /*structure iterator*/
	int special_detected = 0;
	S_conversion fstruct[] = {{'s', print_string},
		{'c', print_char}, {'d', print_integer}, {'i', print_integerofi}, {'\0', NULL}};

	(*i)++; /*point to the position next to the percent symbol position.*/
	while (fstruct[j].c != '\0') /*structrure elements iterator*/
	{
		if (format[*i] == fstruct[j].c)
		{
			(fstruct[j].f)(byte, list);
			special_detected = 1;
			break;
		}
		j++;
	}
	if (special_detected == 0)
	{
		_putchar('%');
		(*byte)++;
		if (format[*i] != '%')
		{
			_putchar(format[*i]);
			(*byte)++;
		}
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
	int bytes_printed = 0;
	va_list list;

	/*printf("[[[[format:%s]]]]", format);*/
	va_start(list, format);
	while (format != NULL && format[i] != '\0') /*format iterator*/
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return(-1);
			percent_func(format, &i, &bytes_printed, list);
		}
		else
		{
			_putchar(format[i]);
			bytes_printed++;
		}
		i++;
	}
	if (format == NULL)
		bytes_printed = -1;
		
	va_end(list);
	return (bytes_printed);
}
