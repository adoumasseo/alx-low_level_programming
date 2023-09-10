#include "main.h"

/**
 * is_prime_number - a function that check if n is prime number
 * @n: integer to check
 *
 * Return: 1 if n is_prime_number 0 esle
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	for (; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
