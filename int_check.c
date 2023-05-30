#include "main.h"

/**
 * int_checker - This function check if the char is an int
 * @x: This is the string to be checked
 *
 * Return: void
 */


void int_checker(int x)
{
	int t;

	if (x == 0)
		t = x / 10;

	int_checker(t);
	_putchar(x % 10);
}
