#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _print_char - a function that print a char
 * @args: a copie of va_list argument
 *
 * Return: Nothing is void type function
 */

void _print_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	printf("%c", letter);
}

/**
 * _print_int - a function that print a int
 * @args: a copie of va_list argument
 *
 * Return: Nothing is void type function
 */

void _print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * _print_float - a function that print a float
 * @args: a copie of a va_list argument
 *
 * Return: Nothing is void type function
 */

void _print_float(va_list args)
{
	double nfloat;

	nfloat = va_arg(args, double);
	printf("%f", nfloat);
}

/**
 * _print_string - a function that print a string
 * @args: a copie of va_list arguments
 *
 * Return: Nothing is void type function
 */

void _print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 *
 * Return: Nothing is void type function.
 */

void print_all(const char * const format, ...)
{
	int i = 0, h;
	char *separator = "";
	printer id[4] = {
		{'c', _print_char},
		{'i', _print_int},
		{'f', _print_int},
		{'s', _print_string}
	};
	va_list args;

	va_start(args, format);
	while (format && *(format + i))
	{
		h = 0;
		while (h < 4 && (*(format + i) != id[h].c))
			h++;
		if (h < 4)
		{
			printf("%s", separator);
			id[h].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
