#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - print any kinf of string
 * specifiers : %c for print a character value
 *				%s for print a string value
 *				%% for print a percent
 * @format: format of specifier to convert
 * Return: length of the string
 */

int _printf(const char *format, ...)
{
	va_list print_list;
	int i, length = 0, search = 0;

	if (format == NULL)
	{
		return (-1);
	}
	
	va_start(print_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			search = get_specifier(format[i + 1], print_list);
			i++;

			if (search == 0)
			{
				_putchar('%');
				_putchar(format[i]);
				length += 2;
			}
			else
			{
				length += search;
			}
		}
		_putchar(format[i]);
	}
	va_end(print_list);
	return (length);
}
