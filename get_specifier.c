#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_specifier - list format and associate function
 * @s: format to check
 * @args: list of arguments
 * Return: 2 if don't recognize, 1 if recognize
 */

int get_specifier(char s, va_list args)
{
	int j = 0;

	main_t specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_pourcent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	while (specifier[j].form != '\0')
	{
		if (s == specifier[j].form)
		{
			return (specifier[j].f(args));
		}
		j++;
	}
	_putchar('%');
	if (s != '%')
	{
		_putchar(s);
		return (2);
	}
	return (1);
}
