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
		{'\0', NULL}
	};

	while (specifier[j].form)
	{
		if (s == specifier[j].form)
		{
			return (specifier[j].f(args));
		}
		j++;	
	}	
	
	return (j);
}
