#include "main.h"
/**
 * print_last_digit- prints the last digit of a number
 * @r: return variable
 *
 * Return: r
 */

int print_last_digit(int r)
{

	if (r < 0)
	{
		r = r * (-1);
		r = (r % 10);
	}
	else
	{
		r = (r % 10);
	}
return (r);
}
