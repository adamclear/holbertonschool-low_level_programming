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
	int x = 0;
	char *string;
	char y;
	va_list args;

	va_start(args, format);

	while (format && format[x] != '\0')
	{
		y = format[x];
		switch (y)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			string = va_arg(args, char *);
			if (string == NULL)
			{
				string = "(nil)";
			}
			printf("%s", string);
			break;
		}
		if (format[x + 1] != '\0')
		{
			printf(", ");
		}
		y++;
	}
	printf("\n");
	va_end(args);
return;
}
