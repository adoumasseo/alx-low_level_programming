#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string that gonna be encodes
 *
 * Return: Address of our string after all changes
 */

char *rot13(char *s)
{
	int len = 0, i;
	char ipt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char opt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[len])
	{
		for (i = 0; i < 52; i++)
		{
			if (s[len] == ipt[i])
			{
				s[len] = opt[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
