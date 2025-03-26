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
	int length = 0, i = 0;
	va_start(print_list, format);

	
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			length++;
			i += 2;
		}
		if (format[i] == '%')
		{
			i++;
			int search = get_specifier(format[i], print_list);

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
			i++;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
va_end(print_list);
return (length);
}
