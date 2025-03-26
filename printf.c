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
int length = 0, i = 0, j = 0;

main_t specifiers[] = {
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
	i++;
	j = 0;
		while (specifiers[j].form)
		{
			if (format[i] == specifiers[j].form)
			{
				length += specifiers[j].f(print_list);
				break;
			}
			j++;
			if (specifiers[j].form == '\0')
			{
				_putchar('%');
				_putchar(format[i]);
				length += 2;
			}
		}
	}
	_putchar(format[i]);
	i++;
	length++;
	}
va_end(print_list);
return (length);
}
