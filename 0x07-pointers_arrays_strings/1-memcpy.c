#include "main.h"

/**
 * _memcpy - a function thar copies memory areas
 * @dest: string where memory areas will be copy
 * @src: memory areas that gonna be copy in dest
 * @n: bytes of src that will be copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
