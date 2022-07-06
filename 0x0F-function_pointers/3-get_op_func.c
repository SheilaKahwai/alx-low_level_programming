#include "3-calc.h"

/**
 * get_op_func - selects function to perform operation
 * @s: operator
 * Return: pointer to selected function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; ops[i].op != '\0'; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
