#include "holberton.h"
/**
 * _strcat- concatenates two strings into one array
 * @src: source array pointer
 * @dest: destination array pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lend = 0;
	int lens = 0;

	while (*dest != '\0')
	{
		dest++;
		lend++;
	}
	while (*src != '\0')
	{
		*(dest++) = *(src++);
		lens++;
	}
	dest = dest - (lend + lens);
return (dest);
}
