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
	int s;
	int t;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
		dest[s] = src[t];
		s++;
		t++;
	}
	dest[s] = '\0';
	return (dest);
}
