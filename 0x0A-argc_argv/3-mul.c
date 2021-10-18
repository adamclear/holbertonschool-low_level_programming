#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main- multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int val1 = _atoi(argv[1]);
		int val2 = _atoi(argv[2]);

		printf("%d\n", (val1 * val2));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

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
	int sign = 1;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			break;
		}
		if (*s == '-')
		{
			neg++;
		}
		s++;
	}
	if (neg % 2 != 0)
	{
		sign = -1;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			val = val * 10 + ((*s - '0') * sign);
		}
		else if (*s < '0' || *s > '9')
		{
			break;
		}
		s++;
	}
return (val);
}
