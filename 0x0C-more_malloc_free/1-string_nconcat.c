#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string to concat to first one
 * @n: bytes of s2 to concat on s1
 *
 * Return: a pointer to the new concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, l1 = 0, l2 = 0, i, j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		k = l1 + l2 + 1;
	else
		k = l1 + n + 1;
	p = malloc(sizeof(char) * k);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		if (i < l1)
			*(p + i) = s1[i];
		else
		{
			*(p + i) = s2[j];
			j++;
		}
	}
	*(p + i) = '\0';
	return (p);
}
