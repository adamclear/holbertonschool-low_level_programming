#include "search_algos.h"
/**
 * linear_search - Find value in array using linear search algorithm.
 * @array: The array to be searched.
 * @size: Size of the array.
 * @value: The value to find.
 * Return: The index of the array where value was found, or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
