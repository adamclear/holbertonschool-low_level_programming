#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints the strings passed to it as arguments
 * @separator: input char variable to separate the argument strings
 * @n: input int variable for the number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list strings;
	char *str;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (x < (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
return;
}
