#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main- uses arguments passed to do math
 * Return: 0 on success, 98 if number of args is not 3, 99 if operator is not
 *         valid, 100 if try to div or mod by 0.
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (*op != '+' || *op != '-' || *op != '*' || *op != '/' || *op != '%')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	ans = (*get_op_func(op))(a, b);
	printf("%d\n", ans);

	return (0);
}
