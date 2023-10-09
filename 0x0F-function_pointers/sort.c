#include <stdio.h>

/**
 * compare - a function that compare a and b
 * @a: first integer to compare
 * @b: second integer
 *
 * Return: 1 if a > b and 0 otherwise
 */

int compare(int a, int b)
{
	if (a > b)
		return (1);
	else
		return (0);
}

/**
 * sort - a function that sort an array of integer in ascending order
 * @compare : a pointer to function compare
 * @array: Our that gonna be sort
 * @n: size of our array
 *
 * Return: a pointer to array sort
 */

int *sort(int *array, int n, int (*compare)(int, int))
{
	int i, j, tmp;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n - 1; j++)
		{
			if (compare(*(array + i), *(array + j + 1)))
			{
				tmp = *(array + i);
				*(array + i) = *(array + j + 1);
				*(array + j + 1) = tmp;
			}
		}
	}
	return (array);
}

/**
 * main - entry point
 *
 * Return: Nothing is void type function
 */

void main(void)
{
	int tab[] = {100, 25, 2, 1, 56, 3, 6, 5, 7, 10, 57};
	int size = sizeof(tab) / sizeof(tab[0]), i;
	int *tablsort = sort(tab, size, compare);

	for (i = 0; i < 11; i++)
	{
		printf("%d, ", *(tablsort + i));
	}
}
