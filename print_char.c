#include "main.h"

/**
* print_char -  This function prints out char
* @arg: These are rgument within the function
*
*Return: The char printed
*/

int print_char (va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}