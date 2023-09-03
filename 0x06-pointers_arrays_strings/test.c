#include <stdio.h>

void main(void)
{
	char s[98] = "Hello ";
	char *s2 = "cacac";
	int c = 0;
	for (; s[c] != '\0';)
		c++;
	printf("%d\n", s[7]);
	for (c = 0; s2[c] != '\0';)
                c++;
	printf("%d", s2[5]);
}
