#include "main.h"
/**
 * print_binary - converts a ulong int to binary and prints it
 * @n: input variable to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
return;
}
