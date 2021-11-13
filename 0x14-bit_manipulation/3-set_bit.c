#include "main.h"
/**
 * set_bit - sets the bit at the given index to 1
 * @n: input int variable
 * @index: input index number to be changed
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* # of bits in ulint is 64, if index is more than that ret -1 */
	if (index > 63)
	{
		return (-1);
	}
	/* change the value of n by setting bit at index by using | 1 */
	*n |= (1 << index);
return (1);
}
