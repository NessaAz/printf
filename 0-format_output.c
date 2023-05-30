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
	while (*format)
	{    
		if (*format != '%')
			{
			/*checks if each char in the !=% and prints*/
			_putchar(*format);
			count_of_characters++;
			}
		else
		{
			format++;
			character = *format;
			switch (character)
		{
			case 'c':
				_putchar(va_arg(args, int));
				count_of_characters++;
				break;
			case 's':
				string = va_arg(args, char *);
				/* check if string is null */
				if (string == NULL)
					string = " ";
				print_string(string);
				count_of_characters += strlen(string);
				break;
			case '%':
				_putchar('%');
				count_of_characters++;
				break;
			default:
				_putchar('%');
				_putchar(character);
				count_of_characters += 2;
				break;
			}
		}
		format++;
	}
	va_end(args);

	return (count_of_characters);
}
