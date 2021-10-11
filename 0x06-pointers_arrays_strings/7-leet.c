#include "holberton.h"
/**
 * leet- changes string to leet
 * @str: input array variable
 * Return: str
 */
char *leet(char *str)
{
	int l;
	int i = 0;
	char stan[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char leet[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	char *pstan = stan;
	char *pleet = leet;

	for (l = 0; *str != '\0'; l++)
	{
		while (i < 10)
		{
			if (*str == *pstan)
			{
				*str = *pleet;
			}
			pstan++;
			pleet++;
			i++;
		}
		pstan = pstan - i;
		pleet = pleet - i;
		i = 0;
		str++;
	}
	str = str - l;
return (str);
}
