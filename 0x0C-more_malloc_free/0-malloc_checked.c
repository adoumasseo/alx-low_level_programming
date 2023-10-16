#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of array to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (malloc(b) == NULL)
		exit(98);
	return (p);
}
