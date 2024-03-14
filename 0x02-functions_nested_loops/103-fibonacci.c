#include <stdio.h>

/**
 * main - entry point
 * Description: a program that print he sum of the even-valued terms
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int f1, f2, nf;
	int sum = 0;

	f1 = f2 = nf = 1;
	while (nf < 4000000)
	{
		if (nf % 2 == 0)
		{
			sum = sum + nf;
		}
		f1 = f2;
		f2 = nf;
		nf = f1 + f2;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
