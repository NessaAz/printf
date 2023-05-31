#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int print_char (va_list arg);
int bin(va_lit arg);
int _printf(const char *format, ...);
int puts_str(char *string); /*it will help print 's' */
int (*spec_checker(char format))(va_list);
int check_flags(char x, get_flag *f);
void print_string(char *str);
int print_rot13(va_list arg);


/**
 * struct flags - This structure contains the flags specifiers
 * @plus: This represents the '+' symbol
 * @space: Thi represents the ' ' symbol
 * @hash:  This repreent the '#' symbol
 *
 */

typedef struct
{
	int plus;
	int space;
	int hash;
} get_flag;

/**
 * struct specifiers - Specifier and Function Mapping
 * @specifier: specifier character
 * @f: Function pointer to the corresponding print function
*/
typedef struct func_t
{
    char specifier;
    int (*f)(va_list);
} func_t;


#endif
