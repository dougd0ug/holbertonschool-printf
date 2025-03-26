#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print a char
 * @print_list: searching list*
 * Return: always 1
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - print a string
 * @print_list: searching list
 * Return: length of the string
 */

int print_string(va_list args)
{
	int i;
	char *s = va_arg(args, char *);

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
	return (i);
}

/**
 * print_pourcent - print pourcent
 * @print_list: searching list
 * Return: always 1
 */

int print_pourcent(va_list args)
{
	char c = va_arg(args, int);

	if (c == '%')
	{
		_putchar(c);
	}
	return (1);
}
