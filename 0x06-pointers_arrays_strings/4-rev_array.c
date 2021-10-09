#include "holberton.h"
/**
 * reverse_array- reverses an array of integers
 * @a: input array pointer
 * @n: number of positions to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int l = 0;
	int tmp;
	int *beg = a;
	int *end = a;

	while (l < n - 1)
	{
		end++;
		l++;
	}
	l = 0;
	for (l = 0; l < n / 2; l++)
	{
		tmp = *end;
		*end = *beg;
		*beg = tmp;

		beg++;
		end--;
	}
return;
}
