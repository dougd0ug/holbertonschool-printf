#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * 
 * 
 * 
 */

int _printf(const char *format, ...)
{
	va_list print_list;
	int length = 0;
	int i = 0;
	int j = 0;

	main_t ops[] = {
			{'c', print_char},
			{'s', print_string},
			{'%', print_pourcent},
			{'\0', NULL}
	};

	va_start(print_list, format);

	while (format && format[i])
	{
			if (format[i] == '%')
			{
				j = 0;
				while (ops[j].form)
				{
					if (format[i] == ops[j].form)
					{
						ops[j].f(print_list);
						break;
					}
					j++;
				}
			}
			_putchar(format[i]);
		i++;
		length++;
	}
	va_end(print_list);
	return (length);
}
