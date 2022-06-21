#include "search_algos.h"
/**
 * advanced_binary - Find value in array using binary search algorithm
 * @array: The array to be searched.
 * @size: Size of the array.
 * @value: The value to find.
 * Return: The index of the array where value was found, or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recursive_advanced(array, 0, size - 1, value));
}

/**
 * recursive_advanced - Does the actual work of binary search.
 * @array: The array to be searched.
 * @start: The starting index.
 * @end: The ending index.
 * @value: The value to find.
 * Return: The index of the array where value was found, or -1.
 */
int recursive_advanced(int *array, int start, int end, int value)
{
	int mid = start + (end - start) / 2;

	if (start == end && array[start] == value)
		return (start);
	printf("Searching in array: ");
	print_partial(array, start, end);
	if (start == end)
		return (-1);
	else if (array[mid] == value || array[mid] > value)
		return (recursive_advanced(array, start, mid, value));

	return (recursive_advanced(array, mid + 1, end, value));
}

/**
 * print_partial - Prints the segment of the array being searched.
 * @array: The array to be printed.
 * @index: The current starting index.
 * @end: The current ending index.
 */
void print_partial(int *array, int index, int end)
{
	for (; index <= end; ++index)
	{
		if (index < end)
		{
			printf("%d", array[index]);
			printf(", ");
		}
		else
			printf("%d\n", array[index]);
	}
}
