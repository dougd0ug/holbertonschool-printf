#ifndef PRINT
#define PRINT
#include <stdarg.h>

typedef struct main
{
	char form;
	int (*f)(va_list);
} main_t;

int _putchar(char c);
int print_char(va_list print_list);
int print_string(va_list print_list);
int print_pourcent(va_list print_list);

int _printf(const char *format, ...);

#endif
