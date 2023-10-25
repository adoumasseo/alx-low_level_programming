#include "main.h"

/**
 * _pow_recursion - a f that returns the value of x raised to the power of y
 * @x: argument that must be raised to power y
 * @y: our power
 *
 * Return: A result of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
