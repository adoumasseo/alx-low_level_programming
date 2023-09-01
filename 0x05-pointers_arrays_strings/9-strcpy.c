#include "main.h"

/**
 * *_strcpy - copy an string into an emty char array
 * @dest: where string should be copy
 * @src: string that gonna be copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != 0;)
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
