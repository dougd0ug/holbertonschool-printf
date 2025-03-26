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
	int i = 0, length = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			length += get_specifier(format[i + 1], print_list);

			if (get_specifier(format[i + 1], print_list) == 0)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				length += 2;
			}
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(print_list);
	return (length);
}
