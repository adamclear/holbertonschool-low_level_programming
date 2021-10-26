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
		if (_strlen(d->name) == NULL)
			d->name = "(nil)";

		if (_strlen(d->owner) == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
return;
}

/**
 * _strlen- finds the length of a string
 * @s: input string pointer
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++, s++)
	{
	}
return (len);
}
