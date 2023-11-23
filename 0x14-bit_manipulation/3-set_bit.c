#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to change
 * @index: the index, starting from 0
 *
 * Return: 1 on succes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n = ((1 << index) | *n);
		return (1);
	}
	else
		return (-1);
}
