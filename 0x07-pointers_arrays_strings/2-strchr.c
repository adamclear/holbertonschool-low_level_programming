#include "main.h"
/**
 * _strchr- locates the first instance of a character in a string
 * @s: input string pointer
 * @c: input character to be located
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; *s != '\0'; l++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
return (0);
}
