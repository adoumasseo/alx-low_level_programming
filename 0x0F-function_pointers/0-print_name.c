#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: string that gonna be print
 * @f: a pointer to a function that gonna print name
 *
 * Return: Nothing is void type function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
