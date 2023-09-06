#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: our string
 * @accept: our substring
 *
 * Return: numbers of bytes before *s == *a or *s == '\0'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, isaccept;

	while (s[len] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[len] == accept[i])
			{
				isaccept = 1;
				break;
			}
			else
				isaccept = 0;
		}
		if (isaccept == 0)
			break;
		len++;
	}
	return (len);
}
