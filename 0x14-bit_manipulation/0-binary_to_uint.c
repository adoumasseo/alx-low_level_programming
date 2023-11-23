#include "main.h"

/**
 * binary_to_uint - a fct that turn a binary to unsigned int
 * @b: a string that contains the binary
 *
 * Return: The unsigned int made
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, number = 0;

	if (b == NULL)
		return (0);
	while (*(b + i))
	{
		if (*(b + i) > 49 || *(b + i) < 48)
			return (0);
		i++;
	}
	i--;
	while (*(b + j))
	{
		if (*(b + j) == 49)
			number += 1 << i;
		i--;
		j++;
	}
	return (number);
}
