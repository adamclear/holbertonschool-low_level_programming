#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all integers supplied as arguments
 * @n: input variable for the number of integer arguments
 * Return: sum if successful, 0 if not or if n is NULL
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list ints;

	if (n == 0)
	{
		return (0);
	}

	va_start(ints, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(ints, int);
	}
	va_end(ints);
	return (sum);
}
