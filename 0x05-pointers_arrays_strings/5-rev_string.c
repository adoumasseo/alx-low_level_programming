#include "main.h"

/**
 * rev_string - revert an string
 * @s: the string tha gonna be revert
 *
 * Description: Nothing special same as title description
 * Return: nothing it's void type function
 */

void rev_string(char *s)
{
	int i, j, cpt = 0;
	char rev[1];
        char *tmp = s;

	for (i = 0; *(s + i) != 0;)
		i++;
	for (j = i - 1; j >= cpt; j--)
	{
		*rev = s[cpt];
		*(tmp + cpt) = s[j];
		s[j] = *rev;
		cpt++;
	}
}
