#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- executes a function given on each element of an array
 * @array: input array pointer
 * @size: size of the array pointer
 * @action: input function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
return;
}
