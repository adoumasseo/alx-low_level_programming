#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a fct given as a argc on each elt of an array.
 * @array: a pointer to our array
 * @size: size of array
 * @action: A pointer to a function that do somethings
 *
 * Return: Nothing is void type function
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned long int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(*(array + i));
}
