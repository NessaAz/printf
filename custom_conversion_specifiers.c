#include "main.h"

/**
 * print_rot13 - prints the ROT13'ed string
 * @arg: The va_list argument
 * Return: The number of characters printed
 */

int print_rot13(va_list arg)
{
	char *str = va_arg(arg, char *);
	int len = _strlen(str);
	int i, j;
	int count_char = 0;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				count_char++;
				break;
			}
		}

		if (j == 52)
		{
			_putchar(str[i]);
			count_char++;
		}
	}

	return (count_char);
}
