#include <stdio.h>

int countvalue(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + countvalue(s + 1));
}

void main(void)
{
	char s[] = "cacac";
	printf("%d\n", countvalue(s));
}
