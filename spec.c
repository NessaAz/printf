#include "main.h"

/**
 * spec_checker - This function check for a specifier and
 * returns a function afterward
 * @format: This is the specifier checked for
 *
 * Return: A function pointer or NULL if not found
 */

int (*spec_checker(char format))(va_list)
{
	int k = 0;

	func_t spec_checker[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'o', print_oct},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'p', print_ptr},
		{'r', print_r},
		{'R', print_R},
	};

	while (k < 11)
	{
		if (spec_checker[k].spec == format)
		{
			return (spec_checker[k].f);
		}
		k++;
	}
	return (NULL);
}
