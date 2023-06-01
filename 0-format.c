#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: number of characters printed - count_of_characters
*/

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int value, t;/* value is the return value*/
	int printed_char = 0;

	va_start(args, format);

	t = 0;

	while (format[t] != '\0')
	{
		if (format[t] != '%')
		{
			_putchar(format[t]);
		}
		else if (format[t + 1] == 'd' || format[t + 1] == 'i')
		{
			int_check(va_arg(args, int));
			t++;
		}
		else if (format[t + 1] == 'R' || format[t + 1] == 'i')
		{
			printed_char += print_rot13(va_arg(args, char *));
			t++;
		}
		value++;
		t++;
	}
	va_end(args);
	return (value);
}
