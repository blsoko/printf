#include "holberton.h"

/**
 * _printf - selector function option
 *
 * @format: record string
 *
 * Return: An integer
 */

int _printf(const char *format, ...)
{
        unsigned long int j = 0;
        int i = 0;
        va_list record; /* type data to use in our structure*/

        S_convertion farray[] = {
                {"s", print_string}
                {"c", print_character}
                {"d", print_decimal}
                {NULL, NULL}
        }

        va_start(record, format);
        while (format && format[j])
        {
                while (farray[i].c[0] != NULL)
                {
                        if(format[j] != '\\' )
                        {
                                
                                if ((farray[i].c[0] == (format[j + 1] != '\0')) && format[j] == %) /* verify %option */
                                {
                                        (farray[i].f)(record);
                                }
                                else
                                {
                                        print_word(format[j]);
                                }
                        }
                        else
                        {
                                valuespecial(format[j + 1]);
                                j++;
                        }
                        i++;
                }
                j++;
                i = 0;
        }
}

/**
 * valuespecial - check special character '\'
 *
 * @caracter: format[j + 1] value 
 *
 * Return: A value
 */
void valuespecial(char caracter)
{
        char narray[] = {'\\', '?', '"', '0'}
        int i = 0;
        if (caracter == 'n')
        {
                _putchar('\n');
        }
        else if (carater == 't')
        {
                while(i < 4)
                {
                        _putchar(" ");
                        i++;
                }
        }

        for (i = 0; narray[i] != '0'; i++)
        {
                if (narray[i] == caracter)
                {
                        _putchar(narray[i]);
                }
        }
}
´´´´