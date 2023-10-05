#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initi it with a specific char
 * @size: size of our array
 * @c: a char to init our array
 *
 * Return: NULL is size == 0 or a pointer to array and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
		return (0);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (0);
	for (i = 0; i < size; i++)
		*(t + i) = c;
	return (t);
}
