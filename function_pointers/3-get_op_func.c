#include "3-calc.h"

/* Returns pointer to function corresponding to operator s */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && *(ops[i].op + 1) == *(s + 1))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
