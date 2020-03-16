#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
typedef struct conversion
{
	char *c;
	void (*f)(record);
}s_conversion;

int _printf(const char *format, ...);
void print_string(record);
void print_char(record);

#endif /*HOLBERTON_H*/
