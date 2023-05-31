#include "main.h"

/**
 * converter - This function converts both number and base to string
 * @n: This is the number input
 * @base: This is the base input
 * @lc: This is the lowercase input
 *
 * Return: string
 */

char converter(unsigned int n, int base, int lc)
{
	char buffer [50];
	char *t, *k;

	t = (lc)
		? "0123456789abcefg"
		: "0123456789ABCDEFG";
	k = &buffer[49];
	*k = '\0';

	while(n != 0)
	{
		n /=base;
		*--k = t[n % base];
	}
	return (*k);
}
