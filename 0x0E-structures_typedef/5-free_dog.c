#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog- frees up the memory allocated by a dog_t structure
 * @d: input structure pointer to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
return;
}
