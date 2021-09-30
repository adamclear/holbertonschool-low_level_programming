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
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (n = n; n > 97; n--)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n);
		_putchar('\n');
	}
return;
}
