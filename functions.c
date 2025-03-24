#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * afficher_char - print a char
 * @afficher_list: searching list
 */

void afficher_char(va_list afficher_list)
{
	char c = va_arg(afficher_list, char);
	_putchar(c);
}

/**
 * afficher_string - print a string
 * @afficher_list: searching list
 */

void afficher_string(va_list afficher_list)
{
	int i;
	char *s = va_arg(afficher_list, char *);

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}	
}

/**
 * 
 */

void afficher_pourcent(va_list afficher_list)
{
	_putchar('%');
}
