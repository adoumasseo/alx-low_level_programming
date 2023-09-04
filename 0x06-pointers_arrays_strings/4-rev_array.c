#include "main.h"

/**
 * reverse_array - a f that reverses the content of an array of integers.
 * @a: our array
 * @n: the array lenth
 *
 * Return: Nothing is void type function
 */

void reverse_array(int *a, int n)
{
	int i, j, rev;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		j--;
	}
}
