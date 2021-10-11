#include "main.h"
/**
 * _memcpy- copies the memory area
 * @dest: destination array pointer
 * @src: input array pointer
 * @n: input length variable
 * Return: **pdest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		*dest = *src;
		dest++;
		src++;
	}
return (dest);
}
