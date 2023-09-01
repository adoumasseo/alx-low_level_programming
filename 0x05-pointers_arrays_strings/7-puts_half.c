#include "main.h"

/**
 * puts_half -  a function that prints half of a string
 * @str: our string
 *
 * Return:Nothing it's void type function
 */

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != 0;)
		len++;
	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((len / 2) + 1); i < len; i++)
			_putchar(str[i]);
	}
	_putchar(10);
}
