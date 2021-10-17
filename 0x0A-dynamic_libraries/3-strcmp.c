#include "main.h"
/**
 * _strcmp- compares two strings and returns ascii value diff
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = (*s1 + '0') - (*s2 + '0');
			break;
		}
		s1++;
		s2++;
	}
return (diff);
}
