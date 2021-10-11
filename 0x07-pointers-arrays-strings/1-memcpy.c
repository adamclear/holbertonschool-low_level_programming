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
	int l;
	char **pdest = &dest;

	for (l = 0; l < n; l++)
	{
		**pdest = *src;
		dest++;
		src++;
	}
return (**pdest);
}
