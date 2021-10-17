#include "main.h"
/**
 * _isdigit- checks if a character is a number 0-9
 * @c: return variable
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
return (c);
}
