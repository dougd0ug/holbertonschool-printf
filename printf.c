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
	int i = 0, length = 0, search = 0;
	va_start(print_list, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			search = get_specifier(format[i + 1], print_list);

			if (search == 0)
			{
				_putchar('%');
				if (format[i + 1])
				{
					_putchar(format[i +1]);
					length++;
				}
				length++;
			}
			else
			{
				length += search;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
		i++;
	}
	va_end(print_list);
	return (length);
}
