#include "main.h"

/**
 *get_endianness - check endianness of computer
 *
 *Return: 0 if little endian 1 if big endian
 */

int get_endianness(void)
{
	int i = 1;

	if (*(char *) &i == 1)
	{
		return (1);
	}
	return (0);
}
