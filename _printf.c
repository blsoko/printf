#include "holberton.h"

void percent_func(const char *format, unsigned int *i, va_list list)/* %, %%, %c, %s. */
{
	unsigned int j = 0; /*structure iterator*/
  
  	op_t fstruct[] = {
                {'s', print_string},
                {'c', print_char},
                {'\0', NULL}
        };
  
  	i++; /* point to the position next to the percent symbol position. */
  	if (format[*i] == '%')
        	_putchar('%');
  	else
        {
                while(fstruct[j].c != '\0') /*structrure elements iterator*/
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

void backslash_func(const char *format, unsigned int *i) /* \\, \a, \b, \f, \n, \r, \t, \v.*/
{
  	char *spec_cases  = "abfnrtv";
  	char  spec_char[] = {'\a', '\b', '\f', '\n', '\r', '\t', '\v'};
  	int j = 0;
  	int special_deteced = 0; /*will say if there is a special character*/
  
  	i++; /*point to the position next to the backslash symbol position.*/
  	while(j < 7) /*in charge of verify special cases*/
        {
        	if (format[*i] == spec_cases[j])
                {
                  	_putchar(spec_char[j]);
                  	special_detected = 1;
                  	break;
                }
        }
  	if (special_detected == 0)
          	_putchar(format[*i]);
        format[*i] == '\\'
                _putchar('\\');
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
        va_start(list, format);

	while(format != NULL && format[i] != '\0') /*format iterator*/
        {
          	if (format[i] == '\\')
                {
                  backslash_func(format, &i);
                }
          	else if(format[i] == '%')
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
       
}
