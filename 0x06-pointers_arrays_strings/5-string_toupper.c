#include "holberton.h"
/**
 * string_toupper- converts all lowercase chars to uppercase
 * @str: input array pointer
 * Return: str
 */
char *string_toupper(char *str)
{
	int l;

	for (l = 0; *str != '\0'; l++)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	str = str - l;
return (str);
}
