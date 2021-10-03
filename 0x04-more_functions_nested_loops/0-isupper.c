#include "main.h"
/**
 * _isupper- checks if a character is uppercase
 * @c: return variable
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
return (c);
}
