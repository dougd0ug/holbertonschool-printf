#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print a char
 * @print_list: searching list
 */

void print_char(va_list print_list)
{
	char c = va_arg(print_list, int);
	_putchar(c);
}

/**
 * print_string - print a string
 * @print_list: searching list
 */

void print_string(va_list print_list)
{
	int i;
	char *s = va_arg(print_list, char *);

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}	
}

/**
 * print_pourcent - print pourcent
 * @print_list: searching list
 */

void print_pourcent(va_list print_list)
{
	_putchar('%');
}
