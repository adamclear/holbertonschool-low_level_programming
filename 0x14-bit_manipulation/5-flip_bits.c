#include "main.h"
/**
 * flip_bits - finds the number of bit flips needed for n to m
 * @n: input variable ulint
 * @m: input variable ulint
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	/* find the difference with xor */
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		/* find the number of flips by the # of trailing 1 to 0s done */
		diff &= (diff - 1);
		flips++;
	}
return (flips);
}
