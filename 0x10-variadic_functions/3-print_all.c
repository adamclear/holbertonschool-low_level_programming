#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints arguments passed to it of types char, int, float, char *.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	int y = 0;
	va_list args;
	char *opt;
	char *fmt;
	opts_t optn[] = {
					 {"c", "%c", char},
					 {"i", "%d", int},
					 {"f", "%f", float},
					 {"s", "%s", char *},
					 {NULL, NULL, NULL}
	};

	va_start(args, format);

	while (format[x] != NULL)
	{
		while (optn[y].n != NULL)
		{
			if (format[x] == optn[y].n)
			{
				break;
				y++;
			}
		}
		opt = optn[y].opt;
		fmt = optn[y].fmt;

		if (y < 4)
		{
			printf(opt, va_arg(args, fmt));
		}
	}
	printf("\n");
	va_end(args);
return;
}
