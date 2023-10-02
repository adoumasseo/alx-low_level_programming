#include <stdio.h>

/**
 * main - entry point
 * @argc: size of the array argv
 * @argv: array of arguments
 *
 * Description: this function print the name of the programme
 * Return: the size of argv
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (argc);
}
