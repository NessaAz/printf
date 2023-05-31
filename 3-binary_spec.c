#include "main.h"


/**
 * bin -  This function converts int to binary
 * @arg: This is the arguments the function takes
 *
 * Return: binary string
 */

int bin(va_list arg)
{
	unsigned int t = va_arg(arg, unsigned int);
	unsigned int temp;
	int k;

	if (t == 0)
	{
		_putchar('0');
		return (1);
	}

	/** 8 is the size of unsigned int - 1 gives it a mask*/
	temp = 1 << (sizeof(unsigned int) * 8 - 1);

	while (temp > 0)
	{
		if (temp && t)
		{
			_putchar('1');
			k++;
		}
		else
		{
			_putchar('0');
			k++;
		}
		temp >>= 1;
	}
	return (k);
}
