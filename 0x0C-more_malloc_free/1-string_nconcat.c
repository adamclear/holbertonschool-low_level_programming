#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat- allocates memory and concatenates two strings up through n
 *                 bytes of s2.
 * @s1: input string pointer
 * @s2: input string pointer
 * @n: input variable
 * Return: string if successful, NULL if not
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0;
	unsigned int y;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *string;

	if (len2 > n)
	{
		len2 = n;
	}
	string = malloc(len1 + len2 + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (y = 0; x < len1; x++, y++)
	{
		string[x] = s1[y];
	}
	for (y = 0; y < len2; x++, y++)
	{
		string[x] = s2[y];
	}
	string[x] = '\0';
return (string);
}

/**
 * _strlen- calculates the length of a string
 * @s: input string pointer
 * Return: number of bytes in the string, excluding the null byte at the end
 */
unsigned int _strlen(char *s)
{
	unsigned int n;

	if (s == NULL)
	{
		return (0);
	}
	for (n = 0; *s != '\0'; n++)
	{
		s++;
	}
return (n);
}
