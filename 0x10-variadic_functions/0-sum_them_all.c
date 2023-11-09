#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: Number of elements
 *
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, som = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		som += va_arg(args, int);
	va_end(args);
	return (som);
}
