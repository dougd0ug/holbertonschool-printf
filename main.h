#ifndef PRINT
#define PRINT
#include <stdarg.h>

typedef struct main
{
	char form;
	int (*f)(va_list);
} main_t;

int _putchar(char c);
int get_specifier(char s, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_pourcent(va_list args);
int print_int(va_list args);

int _printf(const char *format, ...);

#endif
