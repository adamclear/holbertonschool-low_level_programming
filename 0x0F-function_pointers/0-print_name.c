#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name- calls a function pointer to print a name
 * @f: input function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
