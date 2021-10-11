#include "holberton.h"
/**
 * cap_string- capitalizes first character of each word in a string
 * @str: input array variable
 * Return: str
 */
char *cap_string(char *str)
{
	int l;
	int i = 0;
	char sep[14] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, '\0'};
	char *psep = sep;

	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	for (l = 0; *str != '\0'; l++)
	{
		if (*str >= 'a' && *str <= 'z' && l > 0)
		{
			while (i < 14)
			{
				if (*(str - 1) == *psep)
					*str = *str - 32;
				if (*str >= 'A' && *str <= 'Z')
					break;
				psep++;
				i++;
			}
			psep = psep - i;
			i = 0;
		}
		str++;
	}
str = str - l;
return (str);
}
