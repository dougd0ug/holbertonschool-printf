#include "main.h"
#include <limits.h>

/**
 * print_int - Function that prints an integer
 *@args: List of arguments containing the integer to print
 *
 * Return: The number of characters printed
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0, i = 0;
	char buffer[12];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num == INT_MIN)
	{
		char *min_str = "-2147483648";

		for (i = 0; min_str[i] != '\0'; i++)
		{
			_putchar(min_str[i]);
		}
		return (i);
		}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}
	return (count);
}
