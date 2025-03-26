#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * 
 * 
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

	while (specifier[j].form)
	{
		if (s == specifier[j].form)
		{
			return (specifier[j].f(args));
		}		j++;	
	}	
	_putchar('%');
	_putchar(s);
	return (2);	
}
