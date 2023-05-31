#include "main.h"

/**
 * check_flags - This function checks for flag specifiers
 * @x: This is the flag specifier
 * @f: point to the flag sruct
 *
 * Return: 1 if flag is found, 0 if not
 */

int check_flags(char x, get_flag *f)
{
	int t = 0;

	if (x == ' ')
	{
		f->space = 1;
		t = 1;
	}
	else if (x == '#')
	{
		f->hash = 1;
		t = 1;
	}
	else if (x ==  '+')
	{
		f->plus = 1;
		t = 1;
	}
	
	/*  flag character for non-custom conversion specifiers.*/

	else if (x == '0')
	{
		f->plus = 1;
		t = 1;
	}
	else if (x == '-')
	{
		f->plus = 1;
		t = 1;
	}
	return (t);
}
