#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 d array of integers.
 * @width: number of rows
 * @height: number of clos
 *
 * Return: NULL if width or height <= 0 and if function failed
 */

int **alloc_grid(int width, int height)
{
	int **p2a;
	int *pa;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p2a = malloc(sizeof(int *) * height);
	if (p2a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p2a + i) = malloc(sizeof(int) * width);
		if (*(p2a + i) == NULL)
			return (NULL);
		pa = *(p2a + i);
		for (j = 0; j < width; j++)
			*(pa + j) = 0;

	}
	return (p2a);
}
