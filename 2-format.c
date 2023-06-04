#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
*/

int _printf(const char *format, ...)
{
    va_list args;
    unsigned int u, o, x, X;
    int count = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'u')
            {
                u = va_arg(args, unsigned int);
                printf("%u", u);
                count++;
            }
            else if (*format == 'o')
            {
                o = va_arg(args, unsigned int);
                printf("%o", o);
                count++;
            }
            else if (*format == 'x')
            {
                x = va_arg(args, unsigned int);
                printf("%x", x);
                count++;
            }
            else if (*format == 'X')
            {
                X = va_arg(args, unsigned int);
                printf("%X", X);
                count++;
            }
            else if (*format == 'b')
            {
                u = va_arg(args, unsigned int);
                print_binary(u);
                count++;
            }
            else
            {
                putchar('%');
                count++;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);

    return (count);
}
