#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc- allocates memory for an array of nmemb elements of size bytes and
 *          returns a pointer to the allocated memory. Memory is set to 0.
 * @nmemb: input variable integer, number of blocks to allocate
 * @size: input variable integer, size of the blocks to allocate
 * Return: pointer cal if successfule, NULL if not
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	unsigned int total = nmemb * size;
	char *cal;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	cal = malloc(total);
	if (!cal)
	{
		return (NULL);
	}
	for (x = 0; x < total; x++)
	{
		cal[x] = 0;
	}
return (cal);
}
