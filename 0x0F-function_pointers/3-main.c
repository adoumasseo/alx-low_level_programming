#include "3-calc.h"

/**
 * main - entry point.
 * @argc: Number of argument of programs
 * @argv: an array that contains all argument of programs
 *
 * Return: 0 as the end
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*nb)(int, int) = get_op_func(argv[2]);
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (nb == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	r = (*nb)(a, b);
	printf("%d\n", r);
	return (0);
}
