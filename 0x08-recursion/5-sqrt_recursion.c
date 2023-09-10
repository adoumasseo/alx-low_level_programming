#include "main.h"
#include <stdio.h>

/**
 * _sqrt_help - use n and i as constant to find easier sqrt(n) using recursion
 * @n: our interger same as n in _sqrt_recursion
 * @i: that gonna be one first time and increment after
 *
 * Return: sqrt(n)
 */


int _sqrt_help(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	i++;
	return (1 * _sqrt_help(n, i));
}

/**
 * _sqrt_recursion -  a fnct that returns the natural square root of a number.
 * @n: our interger
 *
 * Return: natural square roof of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}
