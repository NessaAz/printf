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

	func_spec spec_checker[] = {
		{'c', put_char},
		{'s', put_string},
		{'%', put_cent},
		{'d', put_int},
		{'i', put_int},
		{'b', put_bin},
		{'o', put_oct},
		{'u', put_unsigned},
		{'x', put_hex},
		{'X', put_HEX},
		{'S', put_S},
		{'p', put_ptr},
		{'r', put_r},
		{'R', put_R},
		{NULL, NULL}
	};
	/* checks for pecifier in the pointed file*/
	do {
		if (spec_checker[k].f == format)
		{
			return (spec_checker[k].t);
		}
		k++;
	}
	while (spec_checker[k].f != '\0');

	return (NULL); /* Return NUULL if specifier is not found*/
}
