#include "main.h"
/**
 * get_bit - returns the value of a bit at index of ulint
 * @n: input ulint variable
 * @index: input variable for bit to return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* #of bits in ulint is 64, ret -1 if index is more than that */
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
