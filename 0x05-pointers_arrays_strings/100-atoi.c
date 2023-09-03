#include "main.h"

/**
 * _atoi - a function that convert a string to integer
 * @s: our string
 *
 * Return: the string convert to number
 */

int _atoi(char *s)
{
	int len, i, n, sign, digit, ne;

	ne = sign = digit = n = 0;
	for (len = 0; s[len] != 0; len++)
	{
		if (s[len] == 45)
			sign++;
		if (s[len] >= 48 && s[len] <= 57)
		{
			ne++;
			if (s[len + 1] < 48 || s[len + 1] > 57)
				break;
		}
	}
	if (ne == 0)
		return (0);
	else
	{
		for (i = 0; i <= len; i++)
		{
			if (s[i] >= 48 && s[i] <= 57)
			{
				digit = s[i] - '0';
				if (sign % 2 != 0)
					digit = -digit;
				n = n * 10 + digit;
				if (s[i + 1] < 48 || s[i + 1] > 57)
					break;
			}
		}
		return (n);
	}

}
