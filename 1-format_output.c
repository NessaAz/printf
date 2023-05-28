#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: number of characters printed - count_of_characters
*/

int _printf(const char *format, ...)
{
	va_list args;
	unsigned value, t; /* value is the return value*/

	va_start(args, format);

	t = 0;

	while (format[t] != '\0')
	{
		if (format[t] != "%")
		{
			_putchar(format[t]);
		}

		/** the format[t + 1] is used to check what the next char is 
		 * in the string. if it is a 'c', 's' etc
		 */

		else if (format[t + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			t++;
		}
		else if (format[t + 1] == 's')
		{
			puts_str(va_arg(args, char *));
			t++; 
		}
		else if (format[t + 1] == '%')
		{
			_putchar('%');
			t++;
		}
		value ++;
		t++;
	}
	va_end(args);

	return (value);
}
