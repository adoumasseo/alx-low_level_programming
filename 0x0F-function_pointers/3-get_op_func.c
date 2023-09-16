#include "3-calc.h"

/**
 * get_op_func - select correct fct to perfom op ask by user
 * @s: operator passed as argument to the program
 *
 * Return: a pointer to function that match to operand given as a paramater
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops + i)->op)
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
