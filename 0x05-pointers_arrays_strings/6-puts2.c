#include "main.h"

/**
 * puts2 - prints every other char of a string starting with 0
 * @str: it's our string
 *
 * Return: Nothing it's void type function
 */

void puts2(char *str)
{
	int len, i;

	for (len = 0; *(str + len) != 0;)
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar(10);
}
