#include "main.h"

/**
 * print_number - print a interger
 * @n: integer to print
 *
 * Return: Nothing void type function
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
		_putchar('0' + n);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
