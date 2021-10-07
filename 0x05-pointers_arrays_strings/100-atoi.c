#include "main.h"
/**
 * _atoi- converts a string to an integer
 * @s: input variable pointer
 * Return: sign * val
 */
int _atoi(char *s)
{
	int val = 0;
	int neg = 0;
	int pos = 0;
	int sign;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			neg++;
		}
		else if (*s == '+')
		{
			pos++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			val = val * 10;
			val = val + *s;
		}
		else if (*s == ';')
		{
			break;
		}
		s++;
	}
	if (neg % 2 != 0)
	{
		sign = -1;
	}
	else
	{
		sign = 1;
	}
return (sign * val);
}
