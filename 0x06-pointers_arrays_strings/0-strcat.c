#include "main.h"

/**
 * _strcat - concat two string
 * @src: string that gonna be concat to an other one
 * @dest:string where src will be concat
 *
 * Return: a result of concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	for (i = 0; dest[i] != 0;)
		i++;
	for (j = 0; src[j] != 0;)
		j++;
	l = 0;
	for (k = i; k <= i + j; k++)
	{
		if (l <= j)
		{
			dest[k] = src[l];
			l++;
		}
	}
	return (dest);
}
