#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat- concatenates two strings
 * @s1: input string pointer
 * @s2: input string pointer
 * Return: concatenated string (cat) on success, NULL if not successful
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int x;
	int y = 0;
	char *cat = (char *)malloc(1 + (len1 + len2) * sizeof(char));

	if (cat == NULL)
		return (NULL);

	if (s2 == NULL)
		len1++;

	if (s1 != NULL)
		for (x = 0; x < len1; x++)
		{
			cat[y] = *s1;
			s1++;
			y++;
		}
	if (s2 != NULL)
		for (x = 0; x <= len2; x++)
		{
			cat[y] = *s2;
			s2++;
			y++;
		}
return (cat);
}

/**
 * _strlen- finds the length of a given string
 * @str: input string pointer
 * Return: len on success, 0 if not or if string is empty
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		str++;
		len++;
	}
return (len);
}
