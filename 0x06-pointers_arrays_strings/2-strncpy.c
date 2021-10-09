#include "holberton.h"
/**
 * _strncpy- copies a string
 * @dest: destination array pointer
 * @src: source array pointer
 * @n: input variable length of copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		*(dest++) = *(src++);
	}
	while (len < n)
	{
		*(dest++) = '\0';
		len++;
	}
	dest = dest - len;
return (dest);
}
