#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- prints the sum of the diagonals of an array
 * @a: input array pointer
 * @size: the size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int l;
	int y = 0;
	int sumlr = 0;
	int sumrl = 0;

	for (l = 0; l < size; l++)
	{
		sumlr += a[y];
		y++;
		a = a + size;
	}
	a = a - (size * l);
	printf("%d, ", sumlr);
	y = size - 1;
	for (l = 0; l < size; l++)
	{
		sumrl += a[y];
		y--;
		a = a + size;
	}
	printf("%d\n", sumrl);
return;
}
