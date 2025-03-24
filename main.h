#ifndef PRINT
#define PRINT
#include <stdarg.h>

typedef struct main
{
	char *form;
	void (*f)(va_list);
} main_t;

int _putchar(char c);
void afficher_char(va_list afficher_list);
void afficher_string(va_list afficher_list);

int _printf(const char *format, ...);

#endif
