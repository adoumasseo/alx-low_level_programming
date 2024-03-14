#include <stdio.h>

/**
 * main - entry point
 * Description: a program that print he sum of the even-valued terms
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int f1, f2, nf;
	
	f1 = f2 = nf = 1;
	while (nf < 4000000)
	{
		if (nf % 2 == 0)
		{
			printf("%lu", nf);
			if (nf < 3524578)
				printf(", ");
		}
		f1 = f2;
		f2 = nf;
		nf = f1 + f2;
	}
	printf("\n");
	return (0);
}
