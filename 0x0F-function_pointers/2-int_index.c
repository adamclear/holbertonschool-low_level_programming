#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- returns the index of the 1st elem that cmp doesn't return 0
 * @array: input array pointer
 * @size: size of the array
 * @cmp: input function pointer
 * Return: index, or -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	int index = 0;
	int ret = 0;

	if ((!array) || (!size) || (!cmp))
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++, index++)
	{
		ret = cmp(array[x]);
		if (ret != 0)
		{
			return (index);
		}
		if (x == (size - 1) && ret == 0)
		{
			return (-1);
		}
	}
return (0);
}
