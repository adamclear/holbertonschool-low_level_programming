#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog- prints the elements contained in the structure passed to it
 * @d: input pointer to structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
return;
}
