#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *
 *@n: the number we are indxeing on
 *@index: the index of the number being set
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	i  = 1 << index;
	*n = (*n | i);

	return (1);
}
