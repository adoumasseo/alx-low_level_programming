#include "main.h"

/**
 * isletter - check is an char is letter or separators words
 * @a: It's our char
 *
 * Return: 1 if it's letter 0 if it's separators words
 */

int isletter(char a)
{
	int i, v = 1;
	char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'(', ')', '"', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (a == s[i])
		{
			v = 0;
			break;
		}
	}
	return (v);
}
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: our string
 *
 * Return: adress of our string
 */

char *cap_string(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
		len++;
	for (; i < len; i++)
	{
		if (i == 0 && isletter(s[i]))
			s[i] = toupper(s[i]);
		else if (!isletter(s[i - 1]) && isletter(s[i]))
			s[i] = toupper(s[i]);
	}
	return (s);
}
