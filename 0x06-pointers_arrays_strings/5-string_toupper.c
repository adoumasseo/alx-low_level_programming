#include "main.h"

/**
 * string_toupper - a prog that changes all lrcase ltrs of a str to ucase.
 * @a: it's our string
 *
 * Return: adress of first element of s
 */

char *string_toupper(char *a)
{
	int len, i;

	len = 0;
	while (a[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (a[i] <= 122 && a[i] >= 97)
			a[i] = a[i] - 32;
	}
	return (a);
}
