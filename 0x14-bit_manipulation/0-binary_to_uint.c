#include "main.h"

/**
 *binary_to_uint - converts binary to an unsigned int
 *
 *@b: the binary string
 *
 *Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			number *= 2;
			number += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
