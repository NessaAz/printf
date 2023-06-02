#ifndef MAIN_H
#define MAIN_H

/* C library heder file */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int put_char(va_list args);
int bin(va_list arg);
int _printf(const char *format, ...);
int print_rot13(va_list arg);
int put_string(char *strng);
int put_unsigned(va_list args);
int put_cent(va_list args);
int check_flags(char x, get_flag *f);
int (*spec_checker(char format))(va_list);


/**
 * struct get_flag - This structure contains the flags specifiers
 * @plus: This represents the '+' symbol
 * @space: Thi represents the ' ' symbol
 * @hash:  This repreent the '#' symbol
 *
 */

typedef struct get_flag
{
	int plus;
	int space;
	int hash;
} get_flag;


/**
 * struct specifier - Specifier and Function Mapping
 * @f: Function pointer to the corresponding print function
 * @t:  a pointer to a function that takes a va_list parameter and returns an int
*/
typedef struct specifier
{
    char *f;
    int (*t)(va_list);
} func_spec;


#endif
