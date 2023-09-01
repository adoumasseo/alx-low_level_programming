#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @n: number of integer to print
 * @a: our array of integer
 *
 * Return: Nothing is void type function
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
