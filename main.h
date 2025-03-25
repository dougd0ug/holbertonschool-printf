#ifndef PRINT
#define PRINT
#include <stdarg.h>

typedef struct main
{
	char form;
	void (*f)(va_list);
} main_t;

int _putchar(char c);
void print_char(va_list print_list);
void print_string(va_list print_list);
void print_pourcent(char c);

int _printf(const char *format, ...);

#endif
