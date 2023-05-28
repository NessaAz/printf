#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: number of characters printed - count_of_characters
*/
int _printf(const char *format, ...)
{
    /* remember betty */
    va_list args;
    int count_of_characters;
    char character;
    char *string;

    va_start(args, format);/*initializes the va_list*/

    /*loop through the 3 specifiers c, s, % */
    /*if characters before NULL, print their count*/

    /* loop through format and *format to ensure they are not null*/
    while (*format && format)
    {    
        if (format != '%')
            {
                /*checks if each char in the !=% and prints*/
                _putchar(format[count_of_characters]);
                count_of_characters++;
            }
        else
        {
            format++;
            character = format;
            switch (character)
            {
            case 'c':
                _putchar(va_arg(args, int));
                count_of_characters++;
                break;
            case 's':
                string = va_arg(args, char *);
                count_of_characters++;
                break;
            case '%':
                putchar('%');
                count_of_characters++;
                break;
            
            default:
                putchar('%');
                count_of_characters++;
                break;
            }
        }
    }

    return (count_of_characters);
}
