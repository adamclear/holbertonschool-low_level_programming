#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog- initializes the variables of struct "dog"
 * @d: input pointer for the structure
 * @name: input variable for the name
 * @age: input variable for age
 * @owner: input variable for the owner
 * Return: mydog on success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
return;
}
