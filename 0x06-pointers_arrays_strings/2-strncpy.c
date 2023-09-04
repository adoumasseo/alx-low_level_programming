#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the destination
 * @src: the source
 * @n: number of src element to copy
 *
 * Return: a pointer to our final destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ld, ls, t;

	for (ld = 0; dest[ld] != '\0';)
		ld++;
	for (ls = 0; src[ls] != '\0';)
		ls++;
	t = 0;
	if (ls >= n)
	{
		for (; t < n; t++)
			dest[t] = src[t];
	}
	else
	{
		for (; t < ls; t++)
			dest[t] = src[t];
		for (; t < n && t < ld; t++)
			dest[t] = '\0';
	}
	return (dest);
}
