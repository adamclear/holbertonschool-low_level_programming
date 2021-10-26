#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog- populates a new struct of type dog based on the args passed to it
 * @name: input pointer variable for the name
 * @age: input float int for the age
 * @owner: input pointer variable for the owner
 * Return: doginit if successful, NULL if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doginit = malloc(sizeof(dog_t));
	char *iname = malloc((_strlen(name) + 1) * sizeof(char));
	char *iowner = malloc((_strlen(owner) + 1) * sizeof(char));

	_strcpy(iname, name);
	_strcpy(iowner, owner);
	doginit->name = iname;
	doginit->age = age;
	doginit->owner = iowner;
return (doginit);
}

/**
 * _strlen- finds the length of a string
 * @s: input sting pointer
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

/**
 * _strcpy- copies the source string to the destination memory
 * @dest: destination array pointer
 * @src: source array pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int x;

	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
