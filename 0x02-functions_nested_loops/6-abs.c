#include "main.h"

/**
 *_abs - shows the absolute integer of a given number
 *
 *@i: the given number
 *
 *Return: Always i (Success.)
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (i * -1);
	}
	else
	{
		i = i * 1;
	}
	return (i);
}
