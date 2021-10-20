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
	unsigned int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	str = str - len;

	char *dup = (char *)malloc((len + 1) * sizeof(char));
	unsigned int x;

	if (len == 0)
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
