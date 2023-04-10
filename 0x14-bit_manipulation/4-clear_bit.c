#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *
 *@n: the number being indexed
 *@index: the bit index of the number
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	i = 1 << index;

	if (*n & i)
	{
		*n = (*n ^ i);
	}

	return (1);
}
