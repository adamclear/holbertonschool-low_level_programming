#include "main.h"
/**
 * _strcpy- copies source array to dest array
 * @dest: destination array variable pointer
 * @src: source array variable pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (*src != '\0')
	{
		src++:
		l++;
	}
	src = src - l;
	for (i = 0; i <= l + 1; i++)
	{
		*(dest++) = *(src++);
	}
	src = src - (l - 1);
	dest = dest - (l + 2);
return (dest);
}
