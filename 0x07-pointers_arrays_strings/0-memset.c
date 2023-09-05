#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: our string
 * @b: constant b to fills s
 * @n: number of b to fill in s
 *
 * Return: a pointers to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
