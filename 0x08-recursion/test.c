#include "main.h"

void printalphabet(char c)
{
	if (c > 'z')
		return;
	_putchar(c);
	printalphabet(c + 1);
}

void main (void)
{
	printalphabet('a');
}
