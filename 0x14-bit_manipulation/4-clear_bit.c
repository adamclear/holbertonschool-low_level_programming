#include "main.h"
/**
 * clear_bit - sets the value of the bit at index to 0
 * @n: input variable number
 * @index: input index value to be changed
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* #of bits in ulint is 64, ret -1 if index is more than that */
	if (index > 63)
	{
		return (-1);
	}
	/* change the value of n by clearing the bit at index with & */
	*n &= ~(1 << index);
return (1);
}
