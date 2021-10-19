#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- finds the sum of arguments
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if not
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int val = 0;

	while (count < argc)
	{
		if (checknum(argv[count]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		val += atoi(argv[count]);
		count++;
	}
	printf("%d\n", val);
	return (0);
}

/**
 * checknum- checks if the string consists of only digits
 * @str: input string
 * Return: 0 if all digits, 1 if not
 */
int checknum(char *str)
{
	int count = 0;

	while (count < _strlen(str))
	{
		if (_isdigit(*(str + count)) == 1)
		{
			return (1);
		}
		count++;
	}
return (0);
}
/**
 * _strlen- returns the length of the string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
return (len);
}
/**
 * _isdigit- checks if digit or not
 * @c: input character
 * Return: 0 if input is a digit, 1 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 0;
	}
	else
	{
		c = 1;
	}
return (c);
}
