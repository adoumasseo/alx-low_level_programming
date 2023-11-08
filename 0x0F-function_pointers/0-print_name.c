#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name: the name that's gonna be print
 * @f: a pointer to the function that print something
 *
 * Return: Nothing it's void type function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
