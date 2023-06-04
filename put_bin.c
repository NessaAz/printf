#include "main.h"

/**
 * put_bin - prints binary representation of numbers
 * @num: number to be converted and printed in binary
*/

void put_bin(unsigned int num)
{
    if (num > 1)
    {
        put_bin(num / 2);
    }
    _putchar('0' + num % 2);
}
