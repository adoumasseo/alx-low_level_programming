#include "main.h"

/**
 * _strncat - concat two string
 * @src: string that gonna be concat to an other one
 * @dest:string where src will be concat
 * @n: numbers of src character that will be concat to dest
 *
 * Return: a result of concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k, l;

	for (i = 0; dest[i] != 0;)
		i++;
	l = 0;
	for (k = i; k < i + n; k++)
	{
		if (l < n)
		{
			dest[k] = src[l];
			l++;
		}
	}
	dest[k + 1] = '\0';
	return (dest);
}
