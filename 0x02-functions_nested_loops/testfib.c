#include <stdio.h>

int fibonacci(unsigned int n);
int fibonacci(unsigned int n)
{
	if (n == 1 || n == 2)
	{
		printf("%d,", 1);
		return (1);
	}
	else
	{
		printf("%d, ", fibonacci(n));
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}

int main(void)
{
	fibonacci(50);
	return(0);
}
