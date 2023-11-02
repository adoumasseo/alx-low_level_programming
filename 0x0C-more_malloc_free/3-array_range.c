#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - a function that creates an array of integers
 * @min: lowest value of array
 * @max: highest value of array
 *
 * Return: a pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
