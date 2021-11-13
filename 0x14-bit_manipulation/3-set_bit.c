#include "main.h"
/**
 * set_bit - sets the bit at the given index to 1
 * @n: input int variable
 * @index: input index number to be changed
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n |= (1 << index);
return (1);
}
