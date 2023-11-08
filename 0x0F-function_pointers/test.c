#include <stdio.h>

void main(void)
{
	typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	printf("SDF \n%c\n", *(ops + 2)->op);

}
