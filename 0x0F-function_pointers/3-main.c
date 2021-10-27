#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main- uses arguments passed to do math
 * @argc: number of arguments passed
 * @argv: array pointer to all the arguments passed
 * Return: 0 on success, 98 if number of args is not 4, 99 if operator is not
 *         valid, 100 if try to div or mod by 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*ans)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ans = get_op_func(argv[2]);
	printf("%d\n", ans(a, b));
	return (0);
}
