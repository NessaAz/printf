#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
*/

int _printf(const char *format, ...)
{
	va_list args;
	int d;
	unsigned int u;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				d = va_arg(args, int);
				printf("%d", d);
			}
			else if (*format == 'u')
			{
				u = va_arg(args, unsigned int);
				printf("%u", u);
			}
			else if (*format == 'b')
			{
				u = va_arg(args, unsigned int);
				put_bin(u);
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
