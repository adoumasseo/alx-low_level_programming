#include "main.h"

/**
 * is_prime_number - a function that check if n is prime number
 * @n: integer to check
 *
 * Return: 1 if n is_prime_number 0 esle
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_help(n, 2));
}

/**
 * prime_help - help to check if n is prime number
 * @n: the integer
 * @i: integer 2 to start checking
 *
 * Return: 1 if succes 0 else
 */

int prime_help(int n, int i)
{
	if (i * i <= n && n % i == 0)
		return (0);
	else if ((n - n % i <= i * i) && i * i <= n && n % i != 0)
	{
		return (1);
	}
	i++;
	return (prime_help(n, i));
}
