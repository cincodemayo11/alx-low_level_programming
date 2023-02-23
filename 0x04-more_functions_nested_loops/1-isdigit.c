#include "main.h"

/**
 *_isdigit - checks whether input is a digit
 *
 *@c: the input
 *
 *Return: 1 if it's a digit and 0 if it's not
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
