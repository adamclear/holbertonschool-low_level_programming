#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main- uses arguments passed to do math
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[0]);
	int b = atoi(argv[3]);
	char op = argv[2];
	int ans;

	ans = get_op_func(op, a, b);

	return (0);
}
