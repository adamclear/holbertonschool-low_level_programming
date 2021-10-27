#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name- calls a function pointer to print a name
 * @f: input function pointer
 * @name: input variable pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
