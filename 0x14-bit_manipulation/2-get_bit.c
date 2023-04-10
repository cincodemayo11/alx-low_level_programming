#include "main.h"

/**
 *get_bit - return value of a bit at index
 *
 *@n: the int being worked on
 *@index: the index of the bit
 *
 *Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n && index < 64)
	{
		return (0);
	}
	if (n)
	{
		return ((n >> index) & 1);
	}
	else
		return (-1);
}
