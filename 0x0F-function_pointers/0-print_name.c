#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name- takes a function that prints a name as an arg and calls it
 * @name: input string pointer
 * @f: input function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((!name) || (!f))
	{
		return;
	}
	f(name);
}
