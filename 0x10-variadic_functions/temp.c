#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all the args passed to it (int, char, float, string)
 * @format: input variable string for arg types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list input;
	int x = 0;
	int found;
	char *string;

	va_start(input, format);

	while (format && format[x])
	{
		found = 0;
		switch (format[x])
			{
			case 'c':
				printf("%c", va_arg(input, int));
				found = 1;
				break;
			case 'i':
				printf("%d", va_arg(input, int));
				found = 1;
				break;
			case 'f':
				printf("%f", va_arg(input, double));
				found = 1;
				break;
			case 's':
				string = va_arg(input, char *);
				if (string == NULL)
				{
					string = "(nil)";
				}
				printf("%s", string);
				found = 1;
				break;
			}
		x++;
		if (format[x] && found == 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(input);
return;
}
