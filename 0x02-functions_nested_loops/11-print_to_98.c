#include "main.h"
/**
 * print_to_98- prints numbers from n to 98
 * @n: input variable
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 97; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n);
	}
return;
}
