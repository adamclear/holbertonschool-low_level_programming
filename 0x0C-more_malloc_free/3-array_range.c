#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range- creates an array of integers populated by all the integers from
 *              min to max, included.
 * @min: input variable integer, starting number
 * @max: input variable integer, ending number
 * Return: array if successful, NULL if not or if min>max
 */
int *array_range(int min, int max)
{
	int *array;
	int x;
	int y = 0;
	int diff = ((max - min) + 1);

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(diff * sizeof(int));
	if (!array)
	{
		return (NULL);
	}
	for (x = min; x <= max; y++, x++)
	{
		array[y] = x;
	}
return (array);
}
