#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @size: Size of our array
 * @cmp: A pointer to a function that search something
 * @array: It's our array.
 *
 * Return: The index of integer or -1 if it not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(*(array + i)))
			return (i);
	return (-1);
}
