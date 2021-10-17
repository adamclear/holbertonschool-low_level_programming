#include "main.h"
/**
 * _strncat- concatenates two strings
 * @dest: destination array pointer
 * @src: source array pointer
 * @n: limiting variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lend = 0;
	int lens;

	while (*dest != '\0')
	{
		dest++;
		lend++;
	}
	for (lens = 0; lens < n; lens++)
	{
		if (*src == '\0')
		{
			break;
		}
		else
		{
			*(dest++) = *(src++);
		}
	}
	dest = dest - (lend + lens);
return (dest);
}
