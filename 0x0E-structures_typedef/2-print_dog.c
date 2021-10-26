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
	if (strlen(d->name) == 0)
		d->name = "(nil)";

	if (strlen(d->owner) == 0)
		d->owner = "(nil)";
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
return;
}
