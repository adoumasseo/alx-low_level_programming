#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string that gonna be encodes
 *
 * Return: Adress of string after encodes
 */

char *leet(char *s)
{
	int len = 0, i;
	char l33t[10] = {'o', 'l', 'M', 'e', 'a', 'M', 'M', 't', 'M'};

	while (s[len] != '\0')
	{
		for (i = 0; i < 9; i++)
		{
			if ((s[len] == l33t[i] || s[len] == l33t[i] - 32) &&
					(l33t[i] - 32 == 79 ||
					 l33t[i] - 32 == 69 ||
					 l33t[i] - 32 == 65 ||
					 l33t[i] - 32 == 76 ||
					 l33t[i] - 32 == 84))
				s[len] = '0' + i;
		}
		len++;
	}
	return (s);
}
