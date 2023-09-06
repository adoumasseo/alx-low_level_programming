#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: our string
 * @accept: qtring group
 *
 * Return: an pointer to first occur or NUll
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s >= '\0')
	{
		for (i = 0; accept[i] >= '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
