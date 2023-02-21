#include "main.h"

/**
*_isalpha - shows 1 if the character is a letter, and 0 otherwise
*
*@c: the character in ASCII code
*
*Return: 1 if it's a letter and 0 otherwise
*/


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
