#include "main.h"
/**
 * _strspn- gets the length of a prefix substring
 * @s: input array pointer
 * @accept: input array pointer
 * Return: b
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int n = 0;
	int l;

	while (*accept != '\0')
	{
		n++;
		accept++;
	}
	accept = accept - n;
	while (*s >= 'a' && *s <= 'z' || *s >= 'A' && *s <= 'Z')
	{
		for (l = 0; l < n; l++)
		{
			if (*s == *accept)
			{
				b++;
			}
			accept++;
		}
		s++;
		accept = accept - l;
	}
return (b);
}
