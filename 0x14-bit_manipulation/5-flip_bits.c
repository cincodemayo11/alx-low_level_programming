#include "main.h"

/**
 *flip_bits - number of bits you would need to flip a num to another
 *
 *@n: one number
 *@m: the other number
 *
 *Return: number of bits you would need to flip to get from one num to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i != 0)
	{
		j += i & 1;
		i >>= 1;
	}
	return (j);
}
