#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
*/

int _printf(const char *format, ...)
{
	va_list args;
	char *s;
	int c;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				printf("%s", s);
			}
			/*else if (*format == '%')
			{
				_putchar('%');
			}*/
			else
			{
				_putchar('%');
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(args);
}
