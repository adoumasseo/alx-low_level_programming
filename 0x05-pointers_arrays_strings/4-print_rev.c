#include "main.h"

/**
 * print_rev - print a string in rervese order
 * @s: the string tha gonna be print
 *
 * Description: Nothing special same as title description
 * Return: nothing it's void type function
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; *(s + i) != 0;)
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar(10);
}
