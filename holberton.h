#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * S_conversion - Typedef for unsigned int
 */
typedef struct conversion S_conversion;

/**
 * struct conversion - Short description
 * @c: First member
 * @f: Second member
 *
 * Description: Longer description
 */

struct conversion
{
	char c;
	void (*f)(va_list list);
};
void print_integer(va_list list);
void print_integerofi(va_list list);
void print_number(int n);
int _printf(const char *format, ...);
void print_string(va_list);
void print_char(va_list);
int _putchar(char c);

#endif /*HOLBERTON_H*/
