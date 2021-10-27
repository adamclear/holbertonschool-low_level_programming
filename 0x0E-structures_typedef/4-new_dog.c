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

	if (doginit == NULL)
	{
		free(doginit);
		return (NULL);
	}
	doginit->name = _strdup(name);
	if (doginit->name == NULL)
	{
		free(doginit->name);
		free(doginit);
		return (NULL);
	}
	doginit->owner = _strdup(owner);
	if (doginit->owner == NULL)
	{
		free(doginit->name);
		free(doginit->owner);
		free(doginit);
		return (NULL);
	}
	doginit->age = age;
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
 * _strdup- duplicates the source string to a pointer
 * @src: source array pointer
 * Return: dest
 */
char *_strdup(char *src)
{
	int len = _strlen(src);
	int x;
	char *dest;

	if (src == NULL)
	{
		return (NULL);
	}
	dest = malloc(len + 1);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
