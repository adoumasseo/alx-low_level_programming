#include "3-calc.h"

/**
 * op_add - function that return sum of two integer
 * @a: first integer
 * @b: second one
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that return difference of two integer
 * @a: first integer
 * @b: second one
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that return product of two integer
 * @a: first integer
 * @b: second one
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that return division of two integer
 * @a: first integer
 * @b: second one
 *
 * Return: Division of a and b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - function that return remainder of divivision of two integer
 * @a: first integer
 * @b: second one
 *
 * Return: remainder of a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
