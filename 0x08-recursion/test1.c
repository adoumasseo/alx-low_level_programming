#include <stdio.h>

unsigned int sumsdigit(unsigned int n)
{
	unsigned int ldgt;
	if (n == 0)
		return (0);
	ldgt = n % 10;
	n = n / 10;
	return (ldgt + sumsdigit(n));
}

void main(void)
{
	int somme = sumsdigit(1250);
	printf("la somme est : %d\n", somme);
}
