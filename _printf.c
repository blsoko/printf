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

        s_convertion farray[] = {
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
                                
                                if (farray[i].c[0] == format[j + 1] && format[j] == %) /* verify %option */
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
                        }
                        i++;
                }
                j++;
                i = 0;
        }
}