#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the separator
 * @n: number of string to print
 *
 * Return: Nothing it's void type function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *cp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		cp = va_arg(args, char *);
		if (cp == NULL)
		{
			printf("%s", "nil");
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%s", cp);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
