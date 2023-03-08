#include "main.h"
/**
 *_strlen_recursion - count number of char in a string
 *
 *@s: the string we're counting from
 *
 *Return: the number of chars
 */

int _strlen_recursion(char *s)
{
	char c = *s;
	int count;

	if (c == '\0')
	{
	}
	else if (c != '\0')
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
