#include "main.h"

/**
 * _strstr - searches a substring in an other one
 * @haystack: our string
 * @needle: our substring
 *
 * Return: a pointer to first occur of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int sl = 0, i, cpt = 1;

	while (*(needle + sl))
		sl++;

	while (*haystack)
	{
		for (i = 0; i < sl; i++)
		{
			if (*haystack == needle[i])
			{
				for (i = 1; i < sl; i++)
				{
					if (*(haystack + i) == needle[i])
						cpt++;
					if (cpt == sl)
						return (haystack);
				}
			}
		}
		haystack++;
	}
	return (0);
}
