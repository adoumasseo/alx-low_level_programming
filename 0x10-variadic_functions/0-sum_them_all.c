#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the numbers of arguments
 *
 * Return: sum of all elements
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		result += va_arg(args, int);
	return (result);
}
