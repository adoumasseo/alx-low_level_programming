#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - a structure
 *
 * @c: the identifier
 * @f: the function associated
 */
typedef struct print
{
	char c;
	void (*f)(va_list args);
} printer;
void _print_char(va_list args);
void _print_int(va_list args);
void _print_float(va_list args);
void _print_string(va_list args);

#endif
