#include "main.h"

void main(void)
{
	char letter = '5';
	char nletter = ' ';
	int r;

	r = isletter(letter);
	printf("%d\n", r);
	r = isletter(nletter);
	printf("%d\n", r);
}
