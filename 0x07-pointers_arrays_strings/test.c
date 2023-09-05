#include <stdio.h>

void main(void)
{
	int num = 56;
	int *pnum = &num;
	int **ppnum = &pnum;

	printf("La valeur de num est %d\n", num);
	printf("La valeur de num depuis pnum est %d\n", *pnum);
	printf("La valeur de num depuis ppnum est %d\n", **ppnum);

	printf("L'adresse de num depuis num est %p\n", &num);
	printf("L'adresse de num depuis pnum est %p\n", pnum);
	printf("L'adresse de num depuis ppnum est %p\n", *ppnum);

	printf("La valeur de pnum depuis pnum %p\n", pnum);
	printf("La valeur de pnum depuis ppnum %p\n" , *ppnum);

	printf("l'addresse de pnum depuis pnum est %p\n", &pnum);
	printf("L'addresse de pnum depuis ppnum est %p\n", ppnum);

}
