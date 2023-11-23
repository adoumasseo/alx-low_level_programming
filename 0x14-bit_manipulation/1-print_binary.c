#include "main.h"

/**
 * print_binary - a fct that print binary representation of a number
 * @n: the number
 *
 * Return: Nothing is void type function
 */

void print_binary(unsigned long int n)
{
	unsigned long int prev_div, check = 0, div = n;

	if (n == 0)
		_putchar('0');
	else
	{
		while (1)
		{
			while (div != check)
			{
				prev_div = div;
				div = div >> 1;
			}
			check = prev_div;
			_putchar('0' + (prev_div - (2 * div)));
			if (check == n)
				break;
			div = n;
		}
	}
}
