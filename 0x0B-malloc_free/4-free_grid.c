#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid created by my alloc_grid function.
 * @grid: it's my 2d grid
 * @height: it's my 2d grid height
 *
 * Return: Nothing void type function
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
