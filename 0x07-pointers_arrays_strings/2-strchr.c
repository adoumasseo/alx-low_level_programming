#include "main.h"

/**
 * _strchr - a function that locate a char in string
 * @s: our string
 * @c: char that gonna be locate
 *
 * Return: A pointer to first occurence of c and null in contrary case
 */

char *_strchr(char *s, char c)
{
	int len, f = 0, a;

	len = 0;
	while (*(s + len))
	{
		if (*(s + len) == c)
		{
			f++;
			a = len;
			break;
		}
		len++;
	}
	if (f != 0)
		return (s + a);
	else
		return (NULL);
}
