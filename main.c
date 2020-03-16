#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'Q';
	char str[] = "Jose and Edison project";

	_printf("Expected   : %s\n", "holberton ok");
	printf("Expected   : %s\n", "holberton pf");
	_printf("Printing a simple sentence\n");
	printf("Printing a simple sentence\n");
	_printf("Printing Q char: %c\n", ch);
	printf("Printing Q char: %c\n", ch);
	_printf("char: %c, and string: %s\n", ch, str);
	printf("char: %c, and string: %s\n", ch, str);
	_printf("\\\\ ok\n");
	printf("\\\\ pf\n\n");
	_printf("%% ok\n");
	printf("%% pf\n\n");
	_printf("\\a ok\n");
	printf("\\a pf\n\n");
	_printf("\\t ok\n");
	printf("\\t pf\n\n");
	_printf("\\' ok\n");
	printf("\\' pf\n\n");
	_printf("\\\" ok\n");
	printf("\\\" pf\n\n");
	_printf("\t ok\n");
	printf("\t pf\n\n");
	_printf("\\\\ and %% and \\\a and \\\t and \\\' and \\\" ok\n");
	printf("\\\\ and %% and \\\a and \\\t and \\\' and \\\" pf\n");
	return (0);
}
