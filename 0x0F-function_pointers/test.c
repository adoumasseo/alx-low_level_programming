#include <stdio.h>

int multiplication(int a, int b)
{
	//printf("la multiplication est : %d", a * b);
	return (a * b);
}

int addition(int a, int b)
{
	printf("L'addition est : %d\n", a + b);
	return (a + b);
}

void print_multiply(int a, int b, int (*multiply)(int , int ))
{
	//int returnValue = multiply(a, b);
	printf("La multiplication est : %d\n", multiply(a, b));
}

void main(void)
{
	int a = 45;
	int b = 2;
	int (*mtpp[])(int , int) = {multiplication, addition};
	int choice;

	printf("Entrez un chiffre entre 0 et 3\n");
	scanf("%d", &choice);
	mtpp[choice](a, b);
	print_multiply(a, b, multiplication);
}
