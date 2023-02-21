#include "main.h"

/**
 *_islower - Checks if letter is lower case
 *
 *@c: The character in ASCII code
 *
 *Return : 1 if lower. 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
