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
	void (*f)(int *bytes_printed, va_list list);
};
void print_integer(int*, va_list list);
void print_integerofi(int*, va_list list);
void print_number(int*, int n);
int _printf(const char *format, ...);
void print_string(int*, va_list);
void print_char(int*, va_list);
int _putchar(char c);

#endif /*HOLBERTON_H*/
