#include "holberton.h"
/**
 * leet- changes string to leet
 * @str: input array variable
 * Return: str
 */
char *leet(char *str)
{
	int l;

	for (l = 0; *str != '\0'; l++)
	{
		switch (*str)
		{
		case 'A':
		case 'a':
			*str = '4';
			break;
		case 'E':
		case 'e':
			*str = '3';
			break;
		case 'o':
		case 'O':
			*str = '0';
			break;
		case 't':
		case 'T':
			*str = '7';
			break;
		case 'l':
		case 'L':
			*str = '1';
			break;
		}
		str++;
	}
	str = str - l;
return (str);
}
