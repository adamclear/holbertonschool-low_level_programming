#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func- selects the correct function to perform the operation
 * @s: input variable pointer, operation to be performed
 * Return: 1 through 5 if valid operator found, -1 if not
 */
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

	while (i <= 5)
	{
		if (ops[i].op == s || ops[i].op == NULL)
		{
			return (ops[i].f);
		}
		i++;
	}
return (0);
}
