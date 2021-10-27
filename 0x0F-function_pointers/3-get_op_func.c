#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func- selects the correct function to perform the operation
 * @s: input variable pointer, operation to be performed
 * Return: ops[i].f if operator found, 99 if not
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
