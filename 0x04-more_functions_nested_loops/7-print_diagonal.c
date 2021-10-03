#include "main.h"
/**
 * print_diagonal- prints a diagonal line
 * @n: input variable
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int r;
	int s = 0;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (i = 0; i < s; i++)
			{
				_putchar(' ');
			}
			s++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
return;
}
