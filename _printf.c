#include "holberton.h"

/**
 * percent_func - evaluates caracteres after %.
 *
 * @format: format to print.
 * @i: pointer to the format index.
 * @list: list of parameters.
 */

void percent_func(const char *format, unsigned int *i, va_list list)
{/*%, %%, %c, %s.*/ /* %\0 */
	unsigned int j = 0; /*structure iterator*/

	S_conversion fstruct[] = {{'s', print_string},
		{'c', print_char}, {'\0', NULL}};

	(*i)++; /*point to the position next to the percent symbol position.*/
	if (format[*i] == '%')
		_putchar('%');
	else
	{
		while (fstruct[j].c != '\0') /*structrure elements iterator*/
		{
			if (format[*i] == fstruct[j].c)
			{
				(fstruct[j].f)(list);
				break;
			}
			j++;
		}
	}
}

/**
 * backslash_func - evaluates caracteres after \.
 *
 * @format: format to print.
 * @i: pointer to the format index.
 */

void backslash_func(const char *format, unsigned int *i)
{/* \\, \a, \b, \f, \n, \r, \t, \v.*/
	char *spec_cases  = "abfnrtv";
	char  spec_char[] = {'a', 'b', 'f', 'n', 'r', 't', 'v'};
	int j = 0;
	int special_detected = 0; /*will say if there is a special character*/

	_putchar('\\');
	(*i)++; /*point to the position next to the backslash symbol position.*/
	while (j < 7) /*in charge of verify special cases*/
	{
		if (format[*i] == spec_cases[j])
		{
			_putchar(spec_char[j]);
			special_detected = 1;
			break;
		}
		j++;
	}
	if (special_detected == 0)
	{
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
{	/* "\\\\ ok\n" */
	unsigned int i = 0; /*format index iterator*/
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0') /*format iterator*/
	{
		if (format[i] == '\\')
		{
			backslash_func(format, &i);
		}
		else if (format[i] == '%')
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
