#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the integers passed to it as arguments
 * @separator: input char variable for int separators
 * @n: input int variable for the number of integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ints;

	va_start(ints, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ints, int));
		if (x < (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ints);
return;
}
