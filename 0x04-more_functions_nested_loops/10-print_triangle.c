#include "main.h"
/**
 * print_triangle- prints a triangle
 * @size: input variable
 * Return: void
 */

void print_triangle(int size)
{
	int row;
	int space;
	int hash;
	int s = size;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (space = s - 1; space > 0; space--)
			{
				_putchar(' ');
			}
			s--;
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
return;
}
