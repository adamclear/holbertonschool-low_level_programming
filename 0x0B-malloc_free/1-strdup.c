#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup- allocates memory and duplicates a given string
 * @str: input string pointer
 * Return: dup on success, NULL if not or if string is empty
 */
char *_strdup(char *str)
{
	int len = _strlen(str);
	int x;
	char *dup = (char *)malloc((len + 1) * sizeof(char));

	if (len == 0 || *str == '\0' || !str)
	{
		return ('\0');
	}
	for (x = 0; x <= len; x++)
	{
		dup[x] = *str;
		str++;
	}
return (dup);
}

/**
 * _strlen- finds the length of a given string
 * @str: input string pointer
 * Return: len on success, 0 if not or if string is empty
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	if (len == 0 || !str)
	{
		return (0);
	}
	return (len);
}
