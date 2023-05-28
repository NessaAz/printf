#include "main.h"



int _printf(const char *format, ...)
{
	va_list arg;
	unsigned value, t; /* value is the return value*/

	va_start(arg, format);

	t = 0;

	while (format[t] != "\0")
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
			_putchar(va_arg(args, int);
			t++;
		}
		else if (format[t + 1] == 's')
		{
			puts_str(va_arg(args, char *));
			t++;
			value +=(value - 1); 
		}
		else if (format[t + 1] = '%')
		{
			_putchar('%');
			t++;
		}
		value +=;
		t++;
	}
	return (value);
}
		











		t++;
	}










}
