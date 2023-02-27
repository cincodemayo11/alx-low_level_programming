#include "main.h"

/**
 *_strlen(char) - counts chars in a string
 *
 *@s: the string itself
 *
 *Return: count (The number of chars)
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count++;
	}
	return (count);
}
