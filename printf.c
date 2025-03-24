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
	va_list afficher_list;
	int i = 0;
	int j = 0;
	char *separator = "";

	main_t list[] = {
			{'c', afficher_char},
			{'s', afficher_string}
	}
	
}
