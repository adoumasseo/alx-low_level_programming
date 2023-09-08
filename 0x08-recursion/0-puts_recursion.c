#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: our string
 *
 * Return: Nothing it's void type function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
