#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
	typedef struct conversion
	{
		char c;
		void (*f)(va_list);
	}S_conversion;

int _printf(const char *format, ...);
void print_string(va_list);
void print_char(va_list);

#endif /*HOLBERTON_H*/
