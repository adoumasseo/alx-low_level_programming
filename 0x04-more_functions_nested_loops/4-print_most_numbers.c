#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Description: without 2 and 4
 * Return: No return is void type function
 */
void print_most_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar(10);
}
