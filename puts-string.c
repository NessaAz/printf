#include "main.h"

/**
 * puts_str - This function helps prints out  string
 * @string: This is the string to be printed
 *
 * Return: the string
 */

int puts_str(char *string)
{

	int index = 0, val = 0;

	if (index)
	{
		for (; string[index] != '\0'; index++)
		{
			_putchar(string[index]);
			val += 1;
		}
		_putchar('\n');
		return (val);
	}
}
