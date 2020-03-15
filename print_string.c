/**
 * print_string - prints a string.
 *
 * @ap - list with string to print.
 */

void print_string(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char*);

	while (str[i] != '\0') /*prints strings*/
	{
		_putchar(str[i]);
	}
} 
