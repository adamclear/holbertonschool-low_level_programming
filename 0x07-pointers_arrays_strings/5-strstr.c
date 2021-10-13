#include "main.h"
/**
 * _strstr- locates a substring
 * @haystack: input array pointer
 * @needle: substring array pointer
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int l;
	int n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (l = 0; *haystack != '\0'; l++)
	{
		if (*haystack == *needle)
		{
			for (n = 0; *needle != '\0'; n++)
			{
				needle++;
				haystack++;
				if (*haystack == *needle)
				{
					continue;
				}
				else if (*haystack != *needle)
				{
					needle = needle - n;
					haystack = haystack - n;
					break;
				}
			}
		}
		if (*needle == '\0')
		{
			needle = needle - n;
			return (needle);
		}
		haystack++;
	}
return (0);
}
