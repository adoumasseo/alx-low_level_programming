#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string that gonna be print
 *
 * Description: a function that prints a string, followed by a new line
 * Return: Nothing is void type function
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
		_putchar(*(str + i));
	_putchar(10);
}
