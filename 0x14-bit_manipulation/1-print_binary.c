#include "main.h"
/**
 * print_binary - converts a ulong int to binary and prints it
 * @n: input variable to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (val > 1)
	{
		print_binary(val >> 1);
	}
	_putchar((val & 1) + '0');
return;
}
