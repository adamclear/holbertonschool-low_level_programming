#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints arguments passed to it of types char, int, float, char *.
 * @format: input variable array for the format of the arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x;
	char *string;
	int z;
	va_list args;

	va_start(args, format);
	x = 0;

	while (format && format[x] != '\0')
	{
		z = 0;
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			z = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			z = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			z = 1;
			break;
		case 's':
			string = va_arg(args, char *);
			if (string == NULL)
			{
				string = "(nil)";
			}
			z = 1;
			printf("%s", string);
			break;
		}
		if (format[x + 1] != '\0' && z == 1)
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
	va_end(args);
return;
}
