#include "main.h"
/**
 * print_binary - converts a ulong int to binary and prints it
 * @n: input variable to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* recursion stop check */
	/* recursively call same funct. to start printing from last digit */
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/* print 0 or 1 depending on & operator back through stack */
	_putchar((n & 1) + '0');
return;
}
