#include <stdio.h>

/**
 * main - entry point
 * description: it's about size of various type in C
 * Return: zero as success
 */
int main(void)
{
	printf("Size of a char : %d\n", sizeof(char));
	printf("Size of an int : %d\n", sizeof(int));
	printf("Size of a long int : %d\n", sizeof(long int));
	printf("Size of a long long int : %d\n", sizeof(long long int));
	return (0);
}