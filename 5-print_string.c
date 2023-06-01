#include "main.h"

/**
 * print_string - identifier S prints string
*/

void print_string(char *str)
{
	int i;

	do {
		_putchar(str[i]);
	} while (str[i] != "\0");
}
