#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int x = 0;

	if (!b)
	{
		return (0);
	}
	while (b[x])
	{
		if (b[x] == '1' || b[x] == '0')
		{
			sum = ((sum * 2) + (b[x] - '0'));
		}
		else
		{
			return (0);
		}
		x++;
	}
return (sum);
}
