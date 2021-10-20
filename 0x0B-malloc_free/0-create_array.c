#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array- allocates memory for a character array of a dictated size and
 * populates the array with the dictated character.
 * @size: variable for size of the array
 * @c: variable for the character
 * Return: buffer if successfull, NULL if not or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = (char *)malloc(size * sizeof(char));
	unsigned int x;

	if (size < 1 || !buffer)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		for (x = 0; x <= size; x++)
		{
			buffer[x] = c;
		}
	}
return (buffer);
}
