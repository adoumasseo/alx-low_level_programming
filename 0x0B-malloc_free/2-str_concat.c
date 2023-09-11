#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concat two string
 * @s1: our first string
 * @s2: our second string
 *
 * Return: NULL on failure a pointer to result on succes
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l = 0;
	char *t;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
		return (0);
	for (k = 0; k < i + j + 1; k++)
	{
		if (k < i)
			*(t + k) = s1[k];
		else
		{
			*(t + k) = s2[l];
			l++;
		}
	}
	return (t);
}
