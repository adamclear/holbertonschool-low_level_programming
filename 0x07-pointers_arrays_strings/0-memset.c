#include "main.h"
/**
 *_memset- fills memory with a constant byte
 *@s: input array pointer
 *@b: input filler byte
 *@n: input length variable
 *Return: **sptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}
	s = s - l;
return (s);
}
