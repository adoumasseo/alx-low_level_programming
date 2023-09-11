#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a fct that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string that gonna be copy in new one.
 * Return: A pt to new string, NULL when space insufficient || str = NULL
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *t;

	while (str[len])
		len++;
	len++;
	if (len == 0)
		return (NULL);
	t = malloc(sizeof(char) * len);
	if (t == NULL)
		return (0);
	for (i = 0; i < len; i++)
		*(t + i) = str[i];
	return (t);
}
