#include "main.h"
/**
 * _strpbrk- searches a string for any of a set of bytes
 * @s: input array pointer
 * @accept: input array pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int l;
	int n;

	for (l = 0; *s != '\0'; l++)
	{
		for (n = 0; *accept != '\0'; n++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		if (*s == '\0')
		{
			return ('\0');
		}
		accept = accept - n;
	}
}
