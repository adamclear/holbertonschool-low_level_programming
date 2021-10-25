#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked- allocates memory "b" and checks if successful
 * @b: input variable
 * Return: allocated memory pointer if succssfull, exit (98) if not.
 */
void *malloc_checked(unsigned int b)
{
	int *mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}
return (mal);
}
